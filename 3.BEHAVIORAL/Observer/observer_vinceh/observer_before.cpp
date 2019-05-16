#include <iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Purpose.  Observer                   
//
// Discussion.  On the left: Subject has hard-wired the number and type of "dependent" objects, the compiler must have the declaration of the  
// concrete Obs classes to compile Subject's decl, the Obs classes exercise no reuse of i/f or impl, and Subject "pushes" updates to the Obs objects.  

class DivObs { 
public:                  
   DivObs( int );                       
   void update( int );                  
private:                                
   int  div_;                           
};  

DivObs::DivObs( int d ) { div_ = d; }  

void DivObs::update(int v) 
{          
   cout << v << " div " << div_ << " is " << v / div_ << endl; 
}  

class ModObs { 
public:                  
   ModObs( int );                       
   void update( int );                  
private:
   int  div_;                           
};     


ModObs::ModObs( int d ) { div_ = d; }

void ModObs::update( int v ) 
{          
   cout << v << " mod " << div_ << " is " << v % div_ << endl; 
}  

class Subject {                         
public:                                 
   Subject();                           
   void setVal( int );                  
private:                                
   int     val_;                        
   DivObs  div_;
   ModObs  mod_;                        
};                                      
                                        
Subject::Subject() : div_(4), mod_(3) { }       

void Subject::setVal( int v ) 
{         
   val_ = v;                            
   div_.update( val_ );                 
   mod_.update( val_ ); 
}               

int main( void )                       
{ 
   Subject  subj;                       
   subj.setVal( 14 );
   return 0;                   
}
// 14 div 4 is 3                        
// 14 mod 3 is 2   
/********************* ********************* ********************* ********************* *********************/