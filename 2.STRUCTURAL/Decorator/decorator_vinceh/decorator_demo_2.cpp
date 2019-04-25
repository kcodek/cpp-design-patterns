#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Purpose.  Decorator design patterns
// 1. Create a "lowest common denominator" that makes classes interchangeable
// 2. Create a second level base class for optional functionality
// 3. "Core" class and "Decorator" class declare an "isa" relationship
// 4. Decorator class "hasa" instance of the "lowest common denominator"
// 5. Decorator class delegates to the "hasa" object
// 6. Create a Decorator derived class for each optional embellishment
// 7. Decorator derived classes delegate to base class AND add extra stuf
// 8. Client has the responsibility to compose desired configurations

// 1. "lowest common denominator"
class Widget { public: virtual void draw() = 0; };  

// 3. "Core" class & "isa"
class TextField : public Widget {                   
   int width, height;
 public:
   TextField( int w, int h ) { width  = w;  height = h; }
   /*virtual*/ void draw() { cout << "TextField: " << width << ", " << height << '\n'; }
};

// 2. 2nd level base class                                                   
class Decorator1 : public Widget {// 3. "isa" relationship
   Widget* wid;// 4. "hasa" relationship
 public:
   Decorator1( Widget* w )  { wid = w; }
   /*virtual*/ void draw() { wid->draw(); }// 5. Delegation
};

// 6. Optional embellishment
class BorderDecorator : public Decorator1 {
 public:  
   BorderDecorator( Widget* w ) : Decorator1( w ) { }
   /*virtual*/ void draw() {
      Decorator1::draw();  // 7. Delegate to base class
      cout << "   BorderDecorator" << '\n'; //    and add extra stuff
      }  
};

// 6. Optional embellishment
class ScrollDecorator : public Decorator1 { 
 public:  
   ScrollDecorator( Widget* w ) : Decorator1( w ) { }
   /*virtual*/ void draw() {
      Decorator1::draw(); // 7. Delegate to base class
      cout << "   ScrollDecorator" << '\n'; //and add extra stuff
      }
};

int  main() 
{ 
   // 8. Client has the responsibility to compose desired configurations
   Widget* aWidget = new BorderDecorator(
                        new BorderDecorator(
                           new ScrollDecorator(
                              new TextField( 80, 24 ))));
   aWidget->draw();
   return 0;
}

// TextField: 80, 24
//    ScrollDecorator
//    BorderDecorator
//    BorderDecorator