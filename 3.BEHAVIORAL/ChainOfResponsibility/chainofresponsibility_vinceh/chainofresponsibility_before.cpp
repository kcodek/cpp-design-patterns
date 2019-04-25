#include <iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

// Purpose.  Chain of Responsibility.  
//
// Discussion.  Instead of the client having to know about the number of  "handlers", and manually map requests to available handlers;
// design the handlers into an "intelligent" chain.  Clients "launch and leave" requests with the head of the chain.                       
                                                                                             
class H1 {                              
public:                                
   H1() {                               
      id_ = count_++;                  
      busy_ = 0;                       
   }                                   
   ~H1() {                              
      cout << id_ << " dtor" << endl;  
   }                                   
   int handle() {                      
      if (busy_ = !busy_) {   
         cout << id_ << " handles" << endl;                   
         return 1;                     
      } else {                         
         cout << id_ << " is busy" << endl;                   
         return 0;                     
   }  }                                
private:                               
   int        id_, busy_;              
   static int count_;                  
};
int H1::count_ = 1;                     

int main( void ) 
{                  
  cout<<">>>>>>>> main_chainofresponsibility_1 <<<<<<<<"<<endl;     
   const int TOTAL = 2;              
   H1* list[TOTAL] = { new H1, new H1};
                                     
   for (int i=0; i < 6; i++)
      for (int j=0; 1 ;              
               j = (j + 1) % TOTAL)  
         if (list[j]->handle())
            break;                   
                                     
   for (int k=0; k < TOTAL; k++)
      delete list[k]; 

   return 0;                
}                                    
// 1 handles                         
// 1 is busy                         
// 2 handles                         
// 1 handles                         
// 1 is busy                         
// 2 is busy                         
// 1 handles                         
// 1 is busy                         
// 2 handles                         
// 1 handles                         
// 1 dtor                            
// 2 dtor   