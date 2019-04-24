// Purpose.  Factory Method             
//           creation via inheritance   
//
// Discussion.  The architect has done an admirable job of decoupling the  client from Stooge concrete derived  
// classes, and, exercising polymorphism.  But there remains coupling where instances are actually created.   
// If we design an "extra level of indirection" (a "factory method") and have clients use it (instead of "new"), then the last bit of coupling goes away.
// The "factory method" (aka "virtual constructor") can be defined in the  Stooge base class, or, in a separate "factory" class
// Note that main() is no longer dependent on Stooge derived classes.           
                                        
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;            
                       
class Stooge {
public:
   virtual void slapStick() = 0;
};
class Factory {
public:
   // Factory Method (virtual ctor)
   static Stooge* create( int );
};

int main()
{
 
   Stooge*  roles[10];
   int      in, j, i = 0;
   while (1) {
      cout << "L(1) M(2) C(3) Go(0): ";
      cin >> in;
      if ( ! in ) break;
      roles[i++] = Factory::create(in);
   }
   for (j=0; j < i; j++)
      roles[j]->slapStick();
   for (j=0; j < i; j++)
      delete roles[j];
   
   return 0;   
}
class Larry : public Stooge { public:
   void slapStick() {
      cout << "Larry: poke eyes"
         << endl; }
};
class Moe : public Stooge { public:
   void slapStick() {
      cout << "Moe: slap head"
         << endl; }
};
class Curly : public Stooge { public:
   void slapStick() {
      cout << "Curly: suffer abuse"
         << endl; }
};
Stooge* Factory::create( int in ) {
   if (in == 1)
      return new Larry;
   else if (in == 2)
      return new Moe;
   else
      return new Curly;
}
// L(1) M(2) C(3) Go(0): 1
// L(1) M(2) C(3) Go(0): 2
// L(1) M(2) C(3) Go(0): 3
// L(1) M(2) C(3) Go(0): 1
// L(1) M(2) C(3) Go(0): 0
// Larry: poke eyes
// Moe: slap head
// Curly: suffer abuse
// Larry: poke eyes