// Purpose.  Bridge                     
//
// Discussion.  Even though Date has a clean interface and a well encapsulated implementation, the client still has to recompile if the class architect changes his/her mind.      
// Instead, create a wrapper (or interface) class that contains and delegates to a body (or implementation) class. 
// Client can now specify at run-time exactly what s/he wants.    
                         
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
               
#define OK
                                        
class Date {                                                                    
public:
      Date( int y, int m, int d );
      void output();                      
                                    
private: 
   
   #ifdef OK                                                                                                     
      int  year_, month_, day_;  
   #endif                     

   #ifdef AA                              
      int        toJulian(int,int,int);      
      char*      fromJulian(void);           
      int        julian_;                 
      int        year_;                   
      static int dayTable_[2][13];  
   #endif 
};   

//  class DateOk : public DateImp {
//  public:
//     DateOk( int y, int m, int d );
//     void output();
//  private:
//     int  year_, month_, day_;
//  };

#ifdef OK
void Date::output() {                   
   char buf[20];                        
   int year = year_ - (year_/100*100);  
   sprintf( buf, "%02d%02d%02d",year, month_, day_ );             
   cout << buf << "  "; 
}       
#endif                                  

#ifdef AA
void Date::output() {                   
   cout << fromJulian() << "  "; 
   }
#endif                     

int main( void )                       
{
   Date  d1( 1996, 2, 29 );             
   Date  d2( 1996, 2, 30 );             
   d1.output();                         
   d2.output();                         
   cout << endl;    
   return 0;                    
}                                       

// 960229  960230                             



