#include <stdio.h>
int main() {
    int myNum = 15; 
    int myOtherNum = 10;
    myNum = myOtherNum; // meaning my number wil become 10 as it follows the othernum function
    printf("%d", myNum); // this will now print 10 since i declared myNum to be othernum which is 10
    return 0;
}
// compile it first using "gcc practice_X.c -o practice_X ./practice_X"
// X is the number of the practice file
// and then after, run it by "gcc practice_X.c -o practice_X" or "./practice_X"
