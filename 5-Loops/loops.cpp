#include <iostream>
using std::cout;
/*
- Iterator;
- Starting point;
- Test;
- Increment/Decrement;
- Loop body.
*/
int main()
{  

   cout<<"For loop now!\n";
   for (int i=0; i <= 6; ++i)
   {
      cout << i << '\n';
      if (i == 2)
         continue;
      // if (i == 4)
      //    break;
      
   }
   
   int i=0;
   cout<<"While loop now!\n";
   while(i<6)
   {
      cout<<i++<<'\n';
      if (i == 4)
         continue;
      
   }
   
}