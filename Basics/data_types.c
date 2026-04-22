#include <stdio.h>

int main(){
    int number = 7;
    float floating_point = 1.0;
    char character = 'a';
    char *characters = "aaa"; // A list of characters, basically a string.
    // 'a' and "a" are different in C. '' are four a single character, while "" are for char *.

    printf("My fav number is %d.\n", number); // %d for digits
    printf("%.2f is a float.\n", floating_point); // %f for floating 
    printf("%c is a single character.\n", character); // %c for char
    printf("%s is a list of chacters.\n", characters); // %s for string
}

/*
There are other data types such as:
- short (short interger),
- long (long interger),
- double (double-precision floating point)

There are also precision specifications:
- %d print as decimal integer
- %6d print as decimal integer, at least 6 chars wide
- %f print as floating point
- %6f print as floating point, at least 6 chars wide
- %.2f print as floating point, 2 chars after decimal point
- 6.2f print as floating point, at least 6 wide and 2 chars after deecimal point
*/