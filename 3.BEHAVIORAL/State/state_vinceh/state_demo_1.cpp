
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Purpose.  State design pattern - an FSM with two states and two events
// (distributed transition logic - logic in the derived state classes)

//Event    on      off State \      -------  -------
// ON          nothing    OFF
// OFF           ON     nothing

class Machine
{
   class State *current;

public:
   Machine();
   void setCurrent(State *s) { current = s; }
   void on();
   void off();
};

class State
{
public:
   virtual void on(Machine *m) { cout << "   already ON\n"; }
   virtual void off(Machine *m) { cout << "   already OFF\n"; }
};

void Machine::on() { current->on(this); }
void Machine::off() { current->off(this); }

class ON : public State
{
public:
   ON() { cout << "   ON-ctor "; };
   virtual ~ON() { cout << "   dtor-ON\n"; };
   void off(Machine *m);
};

class OFF : public State
{
public:
   OFF() { cout << "   OFF-ctor "; };
   virtual ~OFF() { cout << "   dtor-OFF\n"; }; //delete called on non-final 'OFF' that has virtual functions but non-virtual destructor [-Wdelete-non-virtual-dtor]
   void on(Machine *m)
   {
      cout << "   going from OFF to ON";
      m->setCurrent(new ON());
      delete this;
   }
};

void ON::off(Machine *m)
{
   cout << "   going from ON to OFF";
   m->setCurrent(new OFF());
   delete this;
}

Machine::Machine()
{
   current = new OFF();
   cout << '\n';
}

int main(void)
{
   Machine fsm;
   int num;
   void (Machine::*ptrs[])() = {&Machine::off, &Machine::on};
   //void (Machine::*ptrs[])() = { Machine::off, Machine::on }; // message: call to non-static member function without an object argument

   while (1)
   {
      cout << "Enter 0/1: ";
      cin >> num;
      (fsm.*ptrs[num])();
   }
   return 0;
}

//    OFF-ctor
// Enter 0/1: 0
//    already OFF
// Enter 0/1: 1
//    going from OFF to ON   ON-ctor    dtor-OFF
// Enter 0/1: 1
//    already ON
// Enter 0/1: 0
//    going from ON to OFF   OFF-ctor    dtor-ON
// Enter 0/1: 1
//    going from OFF to ON   ON-ctor    dtor-OFF
// Enter 0/1: 0
//    going from ON to OFF   OFF-ctor    dtor-ON
// Enter 0/1: 0
//    already OFF
// Enter 0/1: