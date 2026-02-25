# 🟢 Exercise 05: ft_sqrt

## 📝 Objective
Create a function that returns the exact square root of a number, or 0 if the root is irrational.

## 💡 The Logic
We iterate a variable `root` starting from 1. 

**The Integer Overflow Optimization:**
Normally, evaluating `root * root <= nb` causes a massive integer overflow crash when testing large numbers near `INT_MAX`, because `46341 * 46341` exceeds the 32-bit signed integer limit. 
To bypass this entirely without changing variable types, we alter the loop condition to use division instead: `while (root <= nb / root)`. If we find a match, we return `root`; if the loop finishes without a match, the root is irrational and we return 0.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_sqrt.c`](ft_sqrt.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX05` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX05 ../tester.c ft_sqrt.c -o test_ex05
   ./test_ex05
   ```
