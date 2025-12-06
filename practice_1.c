// this program is to a print function
// This program prints a greeting message with the name "Michael Patrick Reyes".
// To run the compile the program, start with "gcc <file name> -o hello then execute "./hello" in the terminal.
// another way is to just do gcc <file name> -o <file name> and then ./<file name> in the terminal
#include <stdio.h>

int main() {
    char name[] = "Michael Patrick Reyes";
    printf("Hello %s", name);
    return 0;
}

