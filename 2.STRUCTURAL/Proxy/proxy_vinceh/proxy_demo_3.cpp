#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Purpose.  Simulate a Persistent Object Pointer

template <typename TBD>
class POP {          // Persistent Object Pointer
   string oid;
   TBD*   ptr;
public:
   POP( string id )  { oid = id;  ptr = 0; }
   ~POP()            { delete ptr; }
   TBD* operator->() {
      if ( ! ptr)
         // simulate the persistence mechanism
         ptr = new TBD( oid );
      return ptr;
}  };

class Person2 {
   string name;
   int    age;
public:
   Person2( string n) { name = n;}
   string getName()   { return name; }
   int    getAge()    { return age; }//32 ??
};

int main() 
{ 
   POP<Person2> ph( "Tom");
   cout << "policy holder is " << ph->getName() << ", age is " << ph->getAge() << '\n';
   return 0;
}

// policy holder is Tom, age is 32