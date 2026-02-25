# 🟢 Exercise 04: ft_fibonacci

## 📝 Objective
Create a function that returns the $n$-th element of the Fibonacci sequence using recursion.

## 💡 The Logic
The Fibonacci sequence is formed by adding the two preceding numbers together. 
To achieve this, our recursive step must branch into two simultaneous calls: `return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2))`. 
The required base cases stop the branching: if `index` is 0, return 0; if `index` is 1 or 2, return 1. Invalid negative indexes return -1.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_fibonacci.c`](ft_fibonacci.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX04` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX04 ../tester.c ft_fibonacci.c -o test_ex04
   ./test_ex04
   ```
