#include <iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
// Purpose.  Command                    
//                                      
// Discussion.  On the left, an IOU has been encapsulated as a struct, and TheBoss class is tightly coupled to that struct.  

// On the right,TheBoss is only coupled to the abstract class Command.  
// Lots of possible derived classes could be substituted: IOUs that call payUp() on Deadbeats, Checks that call cash() on Banks, Stocks that call redeem() on Companies.  
// Each "command" is a "token" that gets transfered from one holder to another, until someone chooses to "execute" it.         


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
                                        
struct IOU 
{                            
   Deadbeat*  objPtr;                   
   int (Deadbeat::*funPtr)( int );
   int amt;                      
};                                      
                                        
class Enforcer 
{ 
public:                
   Enforcer( IOU& m ) : mkr_(m) { }     
   IOU& collect() { return mkr_; }      
private:                                
   IOU& mkr_;
};                                      
                                        
class TheBoss {                         
public:                                 
   TheBoss() { cash_ = 1000; }          
   void collect( IOU& i ) 
   {                  
      cash_ +=                          
         ((i.objPtr)->*i.funPtr)(i.amt); 
   }                                    
   int rptCash() { return cash_; }
private:                                
   int cash_;                           
};                                      
                                        
int main( void )                       
{                                       
   Deadbeat joe(90), tom(90);           
   IOU one ={&joe, &Deadbeat::payUp,60};
   IOU two ={&tom, &Deadbeat::payUp,70}; 
   Enforcer quido(one), lucca(two);     
   TheBoss  don;                        
                                        
   don.collect( quido.collect() );      
   don.collect( lucca.collect() );      
   cout << "joe has $" << joe.rptCash()<<endl;
   cout << "tom has $" << tom.rptCash()<<endl; 
   cout << "don has $" << don.rptCash()<<endl; 
   return 0;
}   