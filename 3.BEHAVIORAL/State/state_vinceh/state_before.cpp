#include <iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

// Purpose.  State                      
//
// Discussion.  The boss's behavior is "morphing" radically as a function of his mood.  Operations have large "case" constructs that depend on     
// this "state" attribute.  Like large procedures, large conditional stmts are undesirable.  They're monolithic, and tend to make maintenance     
// very difficult.  The State pattern models individual states with derived classes of an inheritance hierarchy, and front-ends this       
// hierarchy with an "interface" object that knows its "current" state.  This partitions and localizes all state-specific responsibilities; allowing for a cleaner     
// implementation of dynamic behavior that must change as internal state changes.


#include <ctime>

class Disposition;

class Boss {                            
public:                                 
   Boss() {                             
      mood_ = DilbertZone;              
   }                                    
   void decide() {                      
      if (mood_ == DilbertZone) {       
         cout << "Eenie, meenie,";      
         cout << " mynie, moe.\n";      
      }                                 
      else if (mood_ == Sunny) {        
         cout << "You need it - you";   
         cout << " got it.\n";          
      }                                 
      toggle();                         
   }                                    
   void direct() {                      
      if (mood_ == DilbertZone) {       
         cout << "My whim - you're";
         cout << " nightmare.\n";       
      }                                 
      else if (mood_ == Sunny)          
         cout << "Follow me.\n";        
      toggle();                         
   }                                    
private:                                
   enum Disposition { Sunny, DilbertZone};
   Disposition  mood_;                  
   void toggle() 
   {
        //mood_ = !mood_;   //message : assigning to 'Boss::Disposition' from incompatible type 'bool'
   }   
};                                      
                                        
int main( void )                      
{   
                                   
   Boss ph;                             
   for (int i=0; i < 2; i++)            
   {                                    
      ph.decide();                      
      ph.decide();                      
      ph.direct();                      
   }  
   return 0;                                  
}      