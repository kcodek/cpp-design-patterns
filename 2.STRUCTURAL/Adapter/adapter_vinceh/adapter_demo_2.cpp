#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Purpose.  Adapter design pattern (External Polymorphism demo)
// 1. Specify the new desired interface
// 2. Design a "wrapper" class that can "impedance match" the old to the new
// 3. The client uses (is coupled to) the new interface
// 4. The adapter/wrapper "maps" to the legacy implementation

// 1. Specify the new i/f
class ExecuteInterface { public:                  
   virtual ~ExecuteInterface() { }
   virtual void execute() = 0;
};

// 2. Design a "wrapper" or "adapter" class
template <class TYPE>                             
class ExecuteAdapter : public ExecuteInterface {  
public:
   ExecuteAdapter( TYPE* o, void (TYPE::*m)() ) 
   { 
      object = o; 
      method = m; 
    }
   ~ExecuteAdapter() 
   { 
      delete object; 
   }
   // 4. The adapter/wrapper "maps" the new to the legacy implementation
   void execute()            
    /* the new */     
   {
      (object->*method)();
   }
private:                             
   TYPE* object; // ptr-to-object attribute
   void (TYPE::*method)();    /* the old */       // ptr-to-member-function attribute
};                                                

// The old: three totally incompatible classes // no common base class, // no hope of polymorphism
class Fea { public:                               
   ~Fea()        { cout << "Fea::dtor" << endl; }
   void doThis() { cout << "Fea::doThis()" << endl; }
};

class Feye { public:
   ~Feye()       { cout << "Feye::dtor" << endl; }
   void doThat() { cout << "Feye::doThat()" << endl; }
};

class Pheau { public:
   ~Pheau()          { cout << "Pheau::dtor" << endl; }
   void doTheOther() { cout << "Pheau::doTheOther()" << endl; }
};

/* the new is returned */ 
ExecuteInterface** initialize() 
{
   ExecuteInterface** array = new ExecuteInterface*[3]; /* the old is below */
   array[0] = new ExecuteAdapter<Fea>(   new Fea(),     &Fea::doThis       );
   array[1] = new ExecuteAdapter<Feye>(  new Feye(),    &Feye::doThat      );
   array[2] = new ExecuteAdapter<Pheau>( new Pheau(),   &Pheau::doTheOther );
   return array;
}

int main( void ) 
{
   //external_polymorphism   
   ExecuteInterface** objects = initialize();

   for (int i=0; i < 3; i++) objects[i]->execute();  // 3. Client uses the new
                                                     //    (polymporphism)
   for (int i=0; i < 3; i++) delete objects[i];
   delete objects;
   return 0;
}

//output: 
// Fea::doThis()
// Feye::doThat()
// Pheau::doTheOther()
// Fea::dtor
// Feye::dtor
// Pheau::dtor