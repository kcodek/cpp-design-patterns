#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

                                        
 
 #include <stdlib.h>      
 

// New design.  "globalObj" is now a static variable in the inst() accessor method.  
// The single instance is enforced by declaring the ctor non-public.  [The dtor must be public because of the static
// variable instance.]  Global access is provided by the static inst() method. 
//  The object is allocated on first demand by C++, and it is de-allocated automatically by C++.



class GlobalClass {
public:
   int  getValue() {
      return value_; }
   void setValue( int v ) {
      value_ = v; }
   static GlobalClass& inst() {
      static GlobalClass globalObj;
      return globalObj; }
   ~GlobalClass() {
      cout << ":dtor:" << endl; }
protected:
   GlobalClass( int v=0 ) {
      cout << ":ctor: ";
      value_ = v; }
private:
   int  value_;
};

void foo( void )
{
   GlobalClass::inst().setValue( 1 );
   cout << "foo: globalObj is " <<
      GlobalClass::inst().getValue()
      << endl;
}

void bar( void )
{
   GlobalClass::inst().setValue( 2 );
   cout << "bar: globalObj is " <<
      GlobalClass::inst().getValue()
      << endl;
}

int main( void )
{
   cout << "main: globalObj is " <<
      GlobalClass::inst().getValue()
      << endl;
   foo();
   bar();
   cout << "main: end" << endl;
   return 0;
}

// main: globalObj is :ctor: 0
// foo: globalObj is 1
// bar: globalObj is 2
// main: end
// :dtor:
