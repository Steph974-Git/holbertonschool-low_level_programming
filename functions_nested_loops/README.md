C - Functions, nested loops

What are Nested Loops and How to Use Them
A nested loop is a loop inside another loop. The inner loop will execute completely every time the outer loop executes one iteration. Nested loops are typically used when there is a need to perform operations that require multiple iterations of a sequence. For example, printing a 2D array.

What is a Function and How Do You Use Functions
A function is a block of code designed to perform a specific task. Functions help in breaking down complex problems into smaller, manageable pieces. They can be called multiple times within a program to avoid redundant code. You define a function by using a prototype or declaration, and then call the function with required arguments in the program.

What is the Difference Between a Declaration and a Definition of a Function
Declaration: A function declaration introduces the function and specifies its return type and parameters. It tells the compiler about the function's existence but doesn't allocate memory for its body. Example:
c
Copier
Modifier
int add(int a, int b);
Definition: A function definition includes the body of the function, where the code that performs the actual task is written. It's where the function's logic is executed. Example:
c
Copier
Modifier
int add(int a, int b) {
    return a + b;
}
What is a Prototype
A prototype is a declaration of a function that specifies the function's name, return type, and parameters, but does not include the function's body. It helps in checking the correctness of function calls in the code before the function's actual implementation.

Scope of Variables
The scope of a variable refers to the region of the program in which the variable is accessible. There are two types of scopes:

Local scope: The variable is accessible only within the function or block where it is defined.
Global scope: The variable is accessible throughout the entire program.
What are the gcc Flags -Wall -Werror -pedantic -Wextra -std=gnu89
These are compiler flags for the gcc (GNU Compiler Collection):

-Wall: Enables all common warnings.
-Werror: Treats all warnings as errors.
-pedantic: Enforces strict compliance with the standard.
-Wextra: Enables additional warnings.
-std=gnu89: Specifies the C standard to use, in this case, GNU89 (an extension of the 1989 standard).
What are Header Files and How to Use Them with #include
Header files contain function prototypes, type definitions, macros, and global variable declarations. They allow for code reusability and better organization. To use them, you include them at the top of your C program with the #include directive. Example:

c
Copier
Modifier
#include <stdio.h>
Tasks
0. _putchar
Write a program that prints _putchar, followed by a new line.

c
Copier
Modifier
#include <stdio.h>

int main(void) {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;
}
1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.

c
Copier
Modifier
void print_alphabet(void) {
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++) {
        _putchar(letter);
    }
    _putchar('\n');
}
2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

c
Copier
Modifier
void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        print_alphabet();
    }
}
3. islower
Write a function that checks for a lowercase character.

c
Copier
Modifier
int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}
4. isalpha
Write a function that checks for an alphabetic character.

c
Copier
Modifier
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
5. Sign
Write a function that prints the sign of a number.

c
Copier
Modifier
int print_sign(int n) {
    if (n > 0) {
        _putchar('+');
        return 1;
    } else if (n == 0) {
        _putchar('0');
        return 0;
    } else {
        _putchar('-');
        return -1;
    }
}
6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.

c
Copier
Modifier
int _abs(int n) {
    return (n < 0 ? -n : n);
}
7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.

c
Copier
Modifier
int print_last_digit(int n) {
    int last_digit = n % 10;
    if (last_digit < 0) {
        last_digit = -last_digit;
    }
    _putchar(last_digit + '0');
    return last_digit;
}
8. I'm federal agent Jack Bauer, and today is the longest day of my life
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

c
Copier
Modifier
void jack_bauer(void) {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');
            _putchar(':');
            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');
            _putchar('\n');
        }
    }
}
9. Learn your times table
Write a function that prints the 9 times table, starting with 0.

c
Copier
Modifier
void times_table(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int product = i * j;
            if (j != 0) {
                _putchar(',');
                _putchar(' ');
            }
            if (product < 10) {
                _putchar(' ');
            }
            _putchar(product + '0');
        }
        _putchar('\n');
    }
}
10. a + b
Write a function that adds two integers and returns the result.

c
Copier
Modifier
int add(int a, int b) {
    return a + b;
}
11. 98 Battery Street, the OG
Write a function that prints all natural numbers from n to 98, followed by a new line.

c
Copier
Modifier
void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            if (i != n) {
                _putchar(',');
                _putchar(' ');
            }
            _putchar(i + '0');
        }
    } else {
        for (int i = n; i >= 98; i--) {
            if (i != n) {
                _putchar(',');
                _putchar(' ');
            }
            _putchar(i + '0');
        }
    }
    _putchar('\n');
}
