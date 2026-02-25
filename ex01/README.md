# 🟢 Exercise 01: ft_recursive_factorial

## 📝 Objective
Create a recursive function that returns the factorial of the given parameter.

## 💡 The Logic
Recursion requires a function to call itself until it hits a "base case." 
If `nb` is 0, we return 1 (this is the base case that stops the recursion). If `nb` is negative, we return 0. 
For any valid positive number, the function returns `nb * ft_recursive_factorial(nb - 1)`. This stacks the multiplications in memory until it reaches 0, at which point the stack unwinds and computes the final factorial.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_recursive_factorial.c`](ft_recursive_factorial.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX01` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX01 ../tester.c ft_recursive_factorial.c -o test_ex01
   ./test_ex01
   ```
