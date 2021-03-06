
#include <iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

#include <ctime>


// Purpose.  Command design pattern and inheritance
//
// Discussion.  The Command pattern promotes a deferred method invocation to
// full object status.  Each Command object is a "black box" - it is opaque to
// its holder/user.  Here, a portfolio's heterogeneous collection of financial
// instruments is being treated homogeneously, because, they all inherit from
// a common base class, and, they all have a "convert to currency" method with
// a common signature.

class Instrument { public: virtual ~Instrument() { } };

class IOU : public Instrument {
   int amount;
public:
   IOU( int in ) { amount = in; }
   int payUp() { return amount; }
};

class Check : public Instrument {
   int amount;
public:
   Check( int in ) { amount = in; }
   int cash() { return amount; }
};

class Stock : public Instrument {
   int amount;
public:
   Stock( int in ) { amount = in; }
   int redeem() { return amount; }
};

class Command {
public:
   typedef int (Instrument::*Action)();
   Command( Instrument* o, Action m ) {
      object = o;
      method = m;
   }
   int execute() { return (object->*method)(); }
private:
   Instrument* object;
   Action      method;
};

int main( void ) 
{
   
      // error: taking the address of a temporary object of type  .. 
   Command* portfolio[] = {  // old C cast, or new RTTI is required
      &Command( &IOU(100),   (int(Instrument::*)())&IOU::payUp ),
      &Command( &Check(200), static_cast<int(Instrument::*)()>(&Check::cash) ),
      &Command( &Stock(300), static_cast<int(Instrument::*)()>(&Stock::redeem) ) };
   
   int netWorth,i;
   for (netWorth=0, i=0; i < 3; i++)
      netWorth += portfolio[i]->execute();
   cout << "net worth is now " << netWorth << '\n';
   return 0;
}

// net worth is now 600