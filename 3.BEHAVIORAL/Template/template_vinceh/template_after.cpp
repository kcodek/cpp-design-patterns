// Purpose.  Template Method


#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

class Sort {  // Shell sort
public:
   void doIt( int v[], int n ) {
      for (int g = n/2; g > 0; g /= 2)
         for (int i = g; i < n; i++)
            for (int j = i-g; j >= 0;
                              j -= g)
               if (needSwap(v[j],
                            v[j+g]))
                  doSwap(v[j],
                         v[j+g]);
   }
private:
   virtual int needSwap(int,int) = 0;
   void doSwap(int& a,int& b) {
      int t = a; a = b; b = t; }
};
class SortUp : public Sort {
   int needSwap(int a, int b) {
      return (a > b); }
};
class SortDown : public Sort {
   int needSwap(int a, int b) {
      return (a < b); }
};

int main()
{
   
   const int NUM = 10;
   int       array[NUM];
   time_t    t;
   srand((unsigned) time(&t));
   for (int i=0; i < NUM; i++) {
      array[i] = rand() % 10 + 1;
      cout << array[i] << ' '; }
   cout << endl;
   SortUp  upObj;
   upObj.doIt( array, NUM );
   for (int u=0; u < NUM; u++)
      cout << array[u] << ' ';
   cout << endl;
   SortDown  downObj;
   downObj.doIt( array, NUM );
   for (int d=0; d < NUM; d++)
      cout << array[d] << ' ';
   cout << endl;
   return 0;
}
// 1 6 6 2 10 9 4 10 6 4
// 1 2 4 4 6 6 6 9 10 10
// 10 10 9 6 6 6 4 4 2 1