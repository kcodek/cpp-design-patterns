// Purpose.  Facade
//
// Discussion.  Class Compute models a decimal digit adder module.
// An entire "subsystem" can be configured by linking as many of these modules as the desired precision requires.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <time.h>

// Purpose.  Adapter
//
// Discussion.  The Adapter pattern discusses how to "wrap" the old interface of a legacy component, so that it can continue to contribute in a new system.  
// It is about "impedance matching" an old dog with new tricks (to mix metaphors).  

class ManlyTime {
  public:
        char* getTime() {
            static char buf[30];
            time_t  lt;
            tm*     ltStruct;
            time( &lt );
            ltStruct = localtime(&lt);
            strftime( buf, 30, "%H%M", ltStruct );
            return buf;
        }
    };


// On the left, WimpyTime "has_a" instance of the legacy component, and delegates the "heavy lifting" to it. 
class WimpyTime {                             
    public:                                       
        char* getTime() 
        {                          
            static char buf[30];                      
            char *ptr, mi[3], am[3];                
            int  hr;                                
            ptr = imp_.getTime();                   
            cout << "old interface time is "        
                << ptr << endl;                      
            strcpy( mi, &(ptr[2]) );                   
            ptr[2] = '\0';                             
            sscanf( ptr, "%d", &hr );               
            strcpy( am, "AM" );                        
            if (hr > 12) {                          
                hr -= 12;                        
                strcpy( am, "PM" ); }          
            sprintf( buf, "%d:%s %s",
                hr, mi, am );                 
            return buf;                       
        }                                       
    private:                                   
        ManlyTime  imp_;                       
};  
   
int main()
{
   WimpyTime newT;
   char*      ptr;                      
   ptr= newT.getTime();
   cout << "new interface('has_a' instance) time is "<< ptr << endl;

   return 0;
}
