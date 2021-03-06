#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

// New design.  "globalObj" is now a private static data member of its own class.  Global access is provided by the public static member
// function inst().  And the lazy initialization code is encapsulated in the inst() function.
// GlobalClass's ctor and dtor have been made protected so that clients cannot create more inst's or destroy the Singleton inst.
class GlobalClass
{
public:
   int getValue()
   {
      return value_;
   }
   void setValue(int v)
   {
      value_ = v;
   }
   static GlobalClass *inst()
   {
      if (!globalObj_)
         globalObj_ = new GlobalClass;
      return globalObj_;
   }

protected:
   GlobalClass(int v = 0)
   {
      value_ = v;
   }
   ~GlobalClass() {}

private:
   int value_;
   static GlobalClass *globalObj_;
};

// Allocating and initializing GlobalClass's static data member (the ptr, not a GlobalClass inst)
GlobalClass *
    GlobalClass::globalObj_ = 0;

void foo(void)
{
   GlobalClass::inst()->setValue(1);
   cout << "foo: globalObj is " << GlobalClass::inst()->getValue()
        << endl;
}

void bar(void)
{
   GlobalClass::inst()->setValue(2);
   cout << "bar: globalObj is " << GlobalClass::inst()->getValue()
        << endl;
}

int main(void)
{
   cout << "main: globalObj is " << GlobalClass::inst()->getValue()
        << endl;
   foo();
   bar();
   return 0;
}
// main: globalObj is 0
// foo: globalObj is 1
// bar: globalObj is 2