#include <iostream>
using namespace std;
 
int main ()
{
   int a = 10;

   do
   {
       cout << "a:" << a << endl;
       a = a + 1;
   } while ( a < 20 );
 
   return 0;
}