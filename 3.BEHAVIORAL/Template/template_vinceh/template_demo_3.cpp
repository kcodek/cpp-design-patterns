// Purpose.  Template Method design pattern

// 1. Standardize the skeleton of an algorithm in a base class "template method"
// 2. Steps requiring peculiar implementations are "placeholders" in base class
// 3. Derived classes implement placeholder methods

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class A
{
public:
   // 1. Standardize the skeleton of an algorithm in a "template" method
   void findSolution()
   {
      stepOne();
      stepTwo();
      stepThr();
      stepFor();
   }

protected:
   virtual void stepFor() { cout << "A.stepFor" << '\n'; }

private:
   // 2. Common implementations of individual steps are defined in base class
   void stepOne() { cout << "A.stepOne" << '\n'; }
   // 3. Steps requiring peculiar impls are "placeholders" in the base class
   virtual void stepTwo() = 0;
   virtual void stepThr() = 0;
};

class B : public A
{
   // 4. Derived classes can override placeholder methods
   // 1. Standardize the skeleton of an algorithm in a "template" method
   /*virtual*/ void stepThr()
   {
      step3_1();
      step3_2();
      step3_3();
   }
   // 2. Common implementations of individual steps are defined in base class
   void step3_1() { cout << "B.step3_1" << '\n'; }
   // 3. Steps requiring peculiar impls are "placeholders" in the base class
   virtual void step3_2() = 0;
   void step3_3() { cout << "B.step3_3" << '\n'; }
};

class C : public B
{
   // 4. Derived classes can override placeholder methods
   /*virtual*/ void stepTwo() { cout << "C.stepTwo" << '\n'; }
   void step3_2() { cout << "C.step3_2" << '\n'; }
   // 5. Derived classes can override implemented methods
   // 6. Derived classes can override and "call back to" base class methods
   /*virtual*/ void stepFor()
   {
      cout << "C.stepFor" << '\n';
      A::stepFor();
   }
};
//##############################################################################################
// Purpose.  Template Method design pattern demo.
//
// Discussion.  The "template method" establishes the steps to be
// performed.  All standard, or invariant, steps have their implementation
// provided by the abstract base class.  All variable steps are not
// defined in the base class, but must be defined by concrete derived
// classes.  "stepFour" below is an embellishment on the design pattern
// where the base class provides a default implementation, and then the
// derived class may extend that method by: overriding the method,
// "calling-back" to the base class to leverage its implementation, and
// then adding its own peculiar behavior.

class IncompleteAlgorithm
{
public:
   void doIt()
   {               // this is the Template Method
      stepOne();   // invariant, standard
      stepTwo();   // invariant, standard
      stepThree(); // variable,  supplied by subclass
      stepFour();
   } // variable,  default provided
private:
   void stepOne()
   {
      cout << "IncompleteAlgorithm::stepOne" << endl;
   }
   void stepTwo()
   {
      cout << "IncompleteAlgorithm::stepTwo" << endl;
   }
   virtual void stepThree() = 0;

protected:
   virtual void stepFour()
   {
      cout << "IncompleteAlgorithm::stepFour" << endl;
   }
};

class FillInTheTemplate : public IncompleteAlgorithm
{
   /* virtual */ void stepThree()
   {
      cout << "FillInTheTemplate::stepThree" << endl;
   }
   /* virtual */ void stepFour()
   {
      IncompleteAlgorithm::stepFour();
      cout << "FillInTheTemplate::stepFour" << endl;
   }
};

//##############################################################################################
int main()
{
   cout << "Demo_3" << endl;
   C algorithm;
   algorithm.findSolution();
   cout << "Demo_4" << endl;
   FillInTheTemplate theThingToDo;
   theThingToDo.doIt();
   return 0;
}

//Demo_3
// A.stepOne
// C.stepTwo
// B.step3_1
// C.step3_2
// B.step3_3
// C.stepFor
// A.stepFor

//Demo_4
// IncompleteAlgorithm::stepOne
// IncompleteAlgorithm::stepTwo
// FillInTheTemplate::stepThree
// IncompleteAlgorithm::stepFour
// FillInTheTemplate::stepFour
