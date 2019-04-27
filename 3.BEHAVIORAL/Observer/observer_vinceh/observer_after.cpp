
#include <iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

// On the right: Subject is decoupled from the number, type, and declaration of concrete Obs subclasses; the Obs objects accept
// polymorphism; and Subject broadcasts that a change has occurred followed by Obs objects requesting just the info that they want.  

class Obs;
class Subject {
public:
   Subject();
   void attach( Obs* );
   void setVal( int );
   int  getVal();
   void notify();
private:
   Obs*  obs_[10];
   int   num_, val_;
};

Subject::Subject(){ num_ = 0; }

int  Subject::getVal() { return val_; }

void Subject::attach( Obs* o ) 
{
   obs_[num_++] = o; 
}
void Subject::setVal( int v ) 
{
   val_ = v;   
   notify(); 
}

class Obs { 
public:
   virtual void update() = 0;
protected:
   Subject*  sub_;
   int       div_;
};

void Subject::notify() 
{
   for (int i=0; i < num_; i++)
   obs_[i]->update(); //member access into incomplete type 'Obs' - so, moved it after class Obs definition
}

class DivObs : public Obs 
{ 
public:
   DivObs( Subject*, int );
   void update();
};

DivObs::DivObs( Subject* s, int d ) 
{
   sub_ = s; 
   div_ = d;
   sub_->attach( this ); 
}
void DivObs::update()
{
   int v = sub_->getVal();
   cout << v << " div " << div_ << " is " << v / div_ << endl; 
}
class ModObs : public Obs
{
public:
   ModObs( Subject*, int );
   void update();
};

ModObs::ModObs( Subject* s, int d ) 
{
   sub_ = s;  
   div_ = d;
   sub_->attach( this ); 
}

void ModObs::update() 
{
   int v = sub_->getVal();
   cout << v << " mod " << div_ << " is " << v % div_ << endl; 
}

int main( void )
{
   
   Subject  subj;
   DivObs   divObs1( &subj, 4 );
   DivObs   divObs2( &subj, 3 );
   ModObs   modObs3( &subj, 3 );
   subj.setVal( 14 );
   return 0;
}
// 14 div 4 is 3
// 14 div 3 is 4
// 14 mod 3 is 2