#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
    Basic Syntax
    Terminal commands: 

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
    
    printf("\n\nMemory SizeOf different data types:\n\n");
    printf("Int \t\t\t%lu\n", sizeof(myInt));
    printf("Float \t\t\t%lu\n", sizeof(myFloat));
    printf("Double \t\t\t%lu\n", sizeof(myDouble));
    printf("Char \t\t\t%lu\n", sizeof(myChar));

    
    // INPLICIT

    printf("\n\nInplicit DataType:\n\n");
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;

    printf("float sum = (float) num1 /num2 ==> %f", sum); // 2.500000


    // OPERATORS

    int a = 10, b = 3;
    float x = 10.0, y = 3.0;

    printf("\n\nC Operators Demonstration:\n\n");

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);  // Addition
    printf("a - b = %d\n", a - b);  // Subtraction
    printf("a * b = %d\n", a * b);  // Multiplication
    printf("a / b = %d\n", a / b);  // Division (integer)
    printf("x / y = %.2f\n", x / y); // Division (float)
    printf("a %% b = %d\n", a % b);  // Modulus
    printf("\n");

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n", a <= b);  // Less than or equal to
    printf("\n");

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > b) && (b > 0): %d\n", (a > b) && (b > 0)); // Logical AND
    printf("(a > b) || (b < 0): %d\n", (a > b) || (b < 0)); // Logical OR
    printf("!(a > b): %d\n", !(a > b));                     // Logical NOT
    printf("\n");

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR
    printf("~a = %d\n", ~a);        // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift
    printf("\n");

    // Assignment Operators
    printf("Assignment Operators:\n");
    int c = a;  // Assignment
    printf("c = %d\n", c);
    c += b;     // Add and assign
    printf("c += b: %d\n", c);
    c -= b;     // Subtract and assign
    printf("c -= b: %d\n", c);
    c *= b;     // Multiply and assign
    printf("c *= b: %d\n", c);
    c /= b;     // Divide and assign
    printf("c /= b: %d\n", c);
    c %= b;     // Modulus and assign
    printf("c %%= b: %d\n", c);
    printf("\n");

    // Unary Operators
    printf("Unary Operators:\n");
    printf("a = %d, ++a = %d\n", a, ++a); // Pre-increment
    printf("a = %d, a++ = %d\n", a, a++); // Post-increment
    printf("a = %d, --a = %d\n", a, --a); // Pre-decrement
    printf("a = %d, a-- = %d\n", a, a--); // Post-decrement
    printf("\n");


    // IF ELSE CONDITION

    int time = 20;
    if (time < 18) {
      printf("Good day.");
    } else if (time > 18) {
      printf("Good evening.\n");
    } else {
        printf("Time == 18");
    }
    
    // SIMPLIFY IF STATEMENT

    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n\n\n");
    
    
    // SWITCH CASES

    int day = 4;

    switch (day) {
      case 1:
        printf("Monday");
        break;
      case 2:
        printf("Tuesday");
        break;
      case 3:
        printf("Wednesday");
        break;
      case 4:
        printf("Thursday");
        break;
      case 5:
        printf("Friday");
        break;
      case 6:
        printf("Saturday");
        break;
      case 7:
        printf("Sunday");
        break;
      default:
        printf("error, no such day index");
    };
    
    
    // WHILE LOOP

    int i = 0;

    while (i <= 5) {
      printf("%d\n", i);
      i++;
    }

    int e = 0;
    
    // DO\WHILE

    do {
      printf("%d\n", e);
      e++;
    }
    while (e < 5);
    
    
    // FOR LOOP

    int o, j;

    // Outer loop
    for (o = 1; o <= 2; ++o) {
      printf("Outer: %d\n", i);  // Executes 2 times

      // Inner loop
      for (j = 1; j <= 3; ++j) {
        printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
      }
    }


    // MATRIX (MULTIDIMENTIONAL ARRAYS)

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("\n\n Matrix[0][2] ==> %d", matrix[0][2]);  // Outputs 2


    // STRING + LENGHT
    
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("\n\nAlphabet string size ==> %d", strlen(alphabet));
    

    // USER INPUT

    /* Create an int and a char variable
    int myNum;
    char Char;

    // Ask the user to type a number AND a character
    printf("\n\n\nType a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &Char);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", Char);
    */

    // MEMORY 

    int Age = 43;
    printf("\n\n\n%p", &Age); 

    
    // POINTERS

    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("\n\n\n%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);

    return 0;
}

