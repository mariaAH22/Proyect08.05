#include <stdio.h>

int main() {
    int counter = 10;
    float pi = 3.1415;

    printf("Dies ist eine Textzeile.\n");
    printf("Backslash n erzeugt\n einen Zeilenumbruch.\n");
    printf("Counter = %i\n", counter);
    printf("%i plus %i gleich %i.\n", 3, 2, 3+2);
    printf("Pi = %f\n", pi);  	/*6 Nachkommastellen*/
    printf("Pi = %.2f\n", pi);	/*2 Nachkommastellen*/

    return 0;
}

