// Purpose.  Composite design pattern - multiple container classes
// class Component { public: virtual void traverse() = 0; };

#include <iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Component { public: virtual void traverse() = 0; };

class Primitive : public Component {
   int value;
public:
   Primitive( int val ) { value = val; }
   void traverse()      { cout << value << "  "; }
};

class Composite : public Component {
   vector<Component*> children;
   int                value;
public:
   Composite( int val )     { value = val; }
   void add( Component* c ) { children.push_back( c ); }
   void traverse() {
      cout << value << "  ";
      for (int i=0; i < children.size(); i++)
          children[i]->traverse();
}  };

class Row : public Composite { public:     // Two different kinds of "container" classes.  Most of the "meat" is in the Composite base class.
   Row( int val ) : Composite( val ) { }   
   void traverse() {                        
      cout << "Row";                       
      Composite::traverse();
}  };

class Column : public Composite { public:
   Column( int val ) : Composite( val ) { }
   void traverse() {
      cout << "Col";
      Composite::traverse();
}  };

int main( void ) 
{
      Row    first( 1 );                     
      Column second( 2 );                  
      Column third( 3 );                   
      Row    fourth( 4 );                  
      Row    fifth( 5 );                   
      first.add( &second );                
      first.add( &third  );                
      third.add( &fourth );                
      third.add( &fifth  );  
      Primitive P1(6);
      Primitive P2(7);  
      Primitive P3(8);
      Primitive P4(9);
      Primitive P5(10);            
      first.add(&P1);     
      second.add(&P2);      
      third.add(&P3);          
      fourth.add(&P4);
      fifth.add( &P5 );       
      // fifth.add(  &Primitive(10 ) );       // error: taking the address of a temporary object of type 'Primitive' [-Waddress-of-temporary]
      first.traverse();  cout << '\n';     
      return 0;
}
// Row1
  //   |
  //   +-- Col2
  //   |     |
  //   |     +-- 7
  //   +-- Col3
  //   |     |
  //   |     +-- Row4
  //   |     |     |
  //   |     |     +-- 9
  //   |     +-- Row5
  //   |     |     |
  //   |     |     +-- 10
  //   |     +-- 8
  //   +-- 6


// Row1  Col2  7  Col3  Row4  9  Row5  10  8  6