#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Purpose.  Inheritance run amok
class A1 { 
    public:
        virtual void doIt() { cout << "A1"; }
};

class AwithX : public A1 {
   void doX() { cout << 'X'; }
public:
   /*virtual*/ void doIt() {
      A1::doIt();
      doX();
}  };

class AwithY : public A1 {
protected:
   void doY() { cout << 'Y'; }
public:
   /*virtual*/ void doIt() {
      A1::doIt();
      doY();
}  };

class AwithZ : public A1 {
protected:
   void doZ() { cout << 'Z'; }
public:
   /*virtual*/ void doIt() {
      A1::doIt();
      doZ();
}  };

class AwithXY : public AwithX, public AwithY { public:
   /*virtual*/ void doIt() {
      AwithX::doIt();
      AwithY::doY();
}  };

class AwithXYZ : public AwithX, public AwithY, public AwithZ { public:
   /*virtual*/ void doIt() {
      AwithX::doIt();
      AwithY::doY();
      AwithZ::doZ();
}  };

int main() {
   cout<<">>>>>>>> main_inheritance_amok <<<<<<<<"<<endl;
   AwithX    anX;
   AwithXY   anXY;
   AwithXYZ  anXYZ;
   anX.doIt();    cout << '\n';
   anXY.doIt();   cout << '\n';
   anXYZ.doIt();  cout << '\n';
   return 0;
}

// AX
// AXY
// AXYZ