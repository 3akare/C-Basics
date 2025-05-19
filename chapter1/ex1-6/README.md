# Exercise 1-6

Verify that the expression `getchar() != EOF` is 0 or 1.

## Solution
The solution demonstrates that the expression `getchar() == EOF` evaluates to 0 (false) or 1 (true).

## How to Run
```bash
gcc solution.c -o solution
./solution
```

## Expected Output
```shell
// Ctrl+D
Enter a character:
Input was the End-Of-File (EOF) signal (e.g., Ctrl+D or Ctrl+Z).
``` 
or
```shell
// 'w'
Enter a character:
w
Input was a regular character: w.
```