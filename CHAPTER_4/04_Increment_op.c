#include <stdio.h>

int main()
{
    int i = 4;
    printf("The value after i++ is %d\n", i++);
    //printf("The value after i is %d\n", i);

     // i++ ka mtlb phle print krdo fir increment krna. But
     // ++i ka mtlb phle increment kro fir print krna.
     

     printf("The value after i++ is %d\n", ++i);
   //printf("The value after i is %d\n", i);

   // += is a compound assignment operator just like -=, *=, /= and /= --------> Also Important

   i+= 10;                                  //------------> Increments i by 10
   printf("The value after i is %d\n", i);

   i-= 10;
   printf("The value after i is %d\n", i);

   i*= 10;
   printf("The value after i is %d\n", i);

   i/= 10;
   printf("The value after i is %d\n", i);

   i%= 10;
   printf("The value after i is %d\n", i);
    return 0;
}