#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Purpose.  Builder
//
// The monolithic design supports a single representation.
// The Builder design allows a different rep per  Builder derived class, and the
// common input and parsing have been defined in the Director class.
// The D constructs, the B returns result.

#include <deque>
using std::deque;

class Array
{
public:
   void addFront(char ch)
   {
      lst.push_front(ch);
   }
   void addBack(char ch)
   {
      lst.push_back(ch);
   }
   void traverse()
   {
      for (i = 0; i < lst.size(); i++)
         cout << lst[i] << ' ';
      cout << endl;
   }

private:
   deque<char> lst;
   int i;
};

string in[] = {"fa", "bb", "fc",
               "bd", "fe", "bf", "fg", "bh"};

int main(void)
{

   Array list;
   for (int i = 0; i < 8; i++)
      if (in[i][0] == 'f')
         list.addFront(in[i][1]);
      else if (in[i][0] == 'b')
         list.addBack(in[i][1]);
   list.traverse();

   return 0;
}

// g e c a b d f h