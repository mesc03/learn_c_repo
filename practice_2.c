// multiple print lines 
#include <stdio.h>
int main() {
    char name[] = "Michael Patrick Reyes";
    printf("Hello %s", name);
    printf("\nCongrats in learning c programming!"); // when printing this it produces a new line before the text
    printf("\nEnjoy the learning");
    printf("\nThis line when print\t, produces space");
    printf("\nThis line produces a backslash after this text\\");
    printf("\nThis line adds a double quote after this text\"");
    return 0;
}

// "\t" adds a space between the text
// "\\" adds a single \ after the text
// "\"" adds a double quote after the text
// "\n" adds a new line after the text