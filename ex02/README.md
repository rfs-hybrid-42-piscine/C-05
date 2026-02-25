# 🟢 Exercise 02: ft_iterative_power

## 📝 Objective
Create an iterative function that returns the value of a number raised to a given power.

## 💡 The Logic
Using a `while` loop, we continually multiply the base number (`nb`) by its original value (`nbr`) `power` times. 
We handle two strict mathematical edge cases first: if `power < 0`, it returns 0. If `power == 0`, it returns 1 (as any number to the power of 0 is mathematically 1).

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_iterative_power.c`](ft_iterative_power.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX02` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX02 ../tester.c ft_iterative_power.c -o test_ex02
   ./test_ex02
   ```
