
#include <iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Deadbeat 
{ 
public:                
   Deadbeat( int v ) { cash_ = v; }     
   int payUp( int v ) {                 
      cash_ -= v;  return v; }          
   int rptCash() { return cash_; }      
private:                                
   int cash_;                           
};  

class Command { public:
   virtual int execute() = 0;
};
class IOU2 : public Command {
public:
   typedef int (Deadbeat::*Meth)(int);
   IOU2( Deadbeat* r, Meth a, int m ) {
      obj_ = r;
      mth_ = a;
      amt_ = m; }
   int execute() {
      return (obj_->*mth_)( amt_ ); }
private:
   Deadbeat*  obj_;
   Meth       mth_;
   int        amt_;
};
class Enforcer {
public:
   Enforcer( Command& c ) : cmd_(c) {}
   Command& collect() { return cmd_; }
private:
   Command& cmd_;
};

class TheBoss {
public:
   TheBoss() { cash_ = 1000; }
   void collect( Command& cmd ) 
   {
      cash_ += cmd.execute(); 
   }
   int rptCash() { return cash_; }
private:
   int cash_;
};

int main( void )
{  
   Deadbeat joe(90), tom(90);
   IOU2 one(&joe, &Deadbeat::payUp, 60);
   IOU2 two(&tom, &Deadbeat::payUp, 70);
   Enforcer quido(one), lucca(two);
   TheBoss  don;
   don.collect( quido.collect() );
   don.collect( lucca.collect() );
   cout << "joe has $" << joe.rptCash()<<endl;
   cout << "tom has $" << tom.rptCash()<<endl; 
   cout << "don has $" << don.rptCash()<<endl; 
   return 0;
}
// joe has $30
// tom has $20
// don has $1130