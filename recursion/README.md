 # C - Recursion

This project focuses on implementing recursive functions in C. Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller instances of the same problem.

## Concepts

- **Recursion**: A function that calls itself
- **Base case**: The condition that stops the recursion
- **Recursive case**: The condition where the function calls itself

## Tasks

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

**Objective**: Write a function that prints a string, followed by a new line.

**Approach**:
- Base case: If the current character is `'\0'` (end of string), print a new line and return
- Recursive case: Print the current character and call the function with the next character in the string (`s + 1`)

### 1. Why is it so important to dream? Because, in my dreams we are together

**Objective**: Write a function that prints a string in reverse.

**Approach**:
- Base case: If the current character is `'\0'`, return
- Recursive case: First make the recursive call with the next character (`s + 1`), then print the current character
- This way, characters are printed in reverse order as the recursion unwinds

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

**Objective**: Write a function that returns the length of a string.

**Approach**:
- Base case: If the current character is `'\0'`, return 0
- Recursive case: Return 1 plus the result of calling the function with the next character (`s + 1`)
- Each recursive call adds 1 to the total length

### 3. You mustn't be afraid to dream a little bigger, darling

**Objective**: Write a function that returns the factorial of a given number.

**Approach**:
- Base cases: 
  - If n < 0, return -1 (error)
  - If n = 0, return 1 (factorial of 0 is 1)
- Recursive case: Return n multiplied by the factorial of (n-1)

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate

**Objective**: Write a function that returns the value of x raised to the power of y.

**Approach**:
- Base cases:
  - If y < 0, return -1 (error)
  - If y = 0, return 1 (any number raised to 0 is 1)
- Recursive case: Return x multiplied by the result of x raised to the power of (y-1)

### 5. Your subconscious is looking for the dreamer

**Objective**: Write a function that returns the natural square root of a number.

**Approach**:
- You'll need a helper function that takes an additional parameter to test potential square roots
- Base cases in the helper function:
  - If the test value squared is greater than n, return -1 (no natural square root)
  - If the test value squared equals n, return the test value
- Recursive case: Call the helper function with an incremented test value

### 6. Inception. Is it possible?

**Objective**: Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

**Approach**:
- You'll need a helper function that takes an additional parameter to test divisibility
- Base cases in the helper function:
  - If n <= 1, return 0 (not prime)
  - If the test divisor equals n, return 1 (prime)
  - If n is divisible by the test divisor, return 0 (not prime)
- Recursive case: Call the helper function with an incremented divisor

## Compilation

Compile your programs with:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <filename>.c -o <output>
```

Remember: Every recursive function must have at least one base case to prevent infinite recursion!