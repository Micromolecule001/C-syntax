#include <stdio.h>
#include <stdbool.h>

/*
    Basic Syntax
    Structure of a C program
    Writing and compiling your first C program
    Understanding main(), printf(), and return 0
    Data Types and Variables
    

    terminal commands: 

    gcc file.c          compiling program
    ./file.exe          run compiled program 
*/

int main () {

    //      Hello World!
    printf("Hello World! \n\n\n");



    // PRIMITIVE DATA TYPES 

    // Integer types
    int number = -42;               // Standard integer
    short shortNumber = 32767;      // Short integer
    long longNumber = 2147483647L;  // Long integer
    long long longLongNumber = 9223372036854775807LL; // Long long integer
    unsigned int unsignedNumber = 42; // Unsigned integer

    // Floating-point types
    float floatNumber = 42.42f;     // Single precision float
    double doubleNumber = 123.456;  // Double precision float
    long double longDoubleNumber = 98765.4321L; // Extended precision float

    // Character type
    char letter = 'B';              // Single character

    // Boolean type
    bool isTrue = true;             // Boolean value (requires <stdbool.h>)

    // Print all data types
    printf("Primitive Data Types in C:\n\n");

    // Integer types
    printf("Int: \t\t\t %d\n", number);
    printf("Short: \t\t\t %hd\n", shortNumber);
    printf("Long: \t\t\t %ld\n", longNumber);
    printf("Long Long: \t\t %lld\n", longLongNumber);
    printf("Unsigned Int: \t\t %u\n", unsignedNumber);

    // Floating-point types
    printf("Float: \t\t\t %.4f\n", floatNumber);
    printf("Double: \t\t %.3lf\n", doubleNumber);
    printf("Long Double: \t\t %.4Lf\n", longDoubleNumber);

    // Character type
    printf("Char: \t\t\t %c\n", letter);

    // Boolean type
    printf("Boolean (true/false): %d\n", isTrue); // Prints 1 for true, 0 for false


    // MEMORY SIZE

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("\n\nMemory SizeOf diffirent data types:\n\n");
    printf("Int \t\t\t%lu\n", sizeof(myInt));
    printf("Float \t\t\t%lu\n", sizeof(myFloat));
    printf("Double \t\t\t%lu\n", sizeof(myDouble));
    printf("Char \t\t\t%lu\n", sizeof(myChar));




    return 0;
}


