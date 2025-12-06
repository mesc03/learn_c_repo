// learning c variables
/* 
int = 123 456
float = 12.3 45.6
char = "a" or "b" 
this is an example of a syntax "type variableName = value;" */

// i learned that when printing there are format specifiers for each variable type
// %d for int
// %f for float
// to limit decimal places use %.2f for two decimal places, %.1f for one, and %.0f for none
// %c for char
// %s for string


#include <stdio.h>
int main() {
    int myNum = 22; // this is my age
    float myFloat = 400.55; // my current wallet balance
    char myChar = 'M'; // my first name initial
    printf("I am %d years old today.\n", myNum);
    printf("I have %.2f in my gcash wallet.\n", myFloat);
    printf("My first name starts with %c.\n", myChar);
    printf("Hello my name is Michael, it starts with \"%c\" and I am %d years old. I am not rich but i have %.2f in my gcash right now", myChar, myNum, myFloat);
    return 0;
}