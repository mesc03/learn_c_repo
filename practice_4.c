#include <stdio.h>
/* int main() {
    int myNum = 15; 
    int myOtherNum = 10;
    myNum = myOtherNum; // meaning my number wil become 10 as it follows the othernum function
    printf("%d", myNum); // this will now print 10 since i declared myNum to be othernum which is 10
    return 0;
} */
// compile it first using "gcc practice_X.c -o practice_X ./practice_X"
// X is the number of the practice file
// and then after, run it by "gcc practice_X.c -o practice_X" or "./practice_X"

#include <stdio.h>
int main() {
    int x = 11;
    int y = 11;
    int sum  = x + y; // output would be 22
    printf("This is how old i am %d", sum);
}

// if there are any changes to the code always compile it first before running it again.
// gcc practice_X.c -o practice_X and then do ./practice_X 