#include <stdio.h>
#include <stdlib.h>

int main()
{
    //task of this program: swap two variables
    int a=10, b=20;
    int temp;

    // this way will not work:
    // because the two lines are executed sequentially!
    a=b; // this will set a=20 ; the old value of a is overwritten and lost!
    b=a; // this will set b = new value of a = 20
    // let's check the current values of a and b
    printf("result of wrong way: a=%i b=%i \n",a,b);
    // wrong!!!

    // now let's start again and swap a and b correctly.
    // first, reset a=10 and b=20
    a=10;
    b=20;
    // this is the correct way:
    temp = a;   // remember the value of a in temp
    a = b;      // overwrite a with value of b
    b = temp;   // set b to old value of a
    // let's check the current values of a and b
    printf("result of correct way: a=%i b=%i \n",a,b);
    // swapped correctly!!!

    return 0;
}
