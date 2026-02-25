# 🟢 Exercise 06: ft_is_prime

## 📝 Objective
Create a function that returns 1 if a number is prime, and 0 if it is not.

## 💡 The Logic
A prime number is only divisible by 1 and itself. 

**The $O(\sqrt{N})$ Time Optimization:**
If we loop from 2 all the way to $N$ to test remainders, massive numbers like `2147483647` will cause a CPU "Time Out" error during evaluation. 
Mathematically, a number is guaranteed to be prime if it has no divisors less than or equal to its square root. We cap the checking loop with `while (i <= nb / i)`. This reduces the maximum loop operations from 2 billion down to just 46,340, executing instantly!

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_is_prime.c`](ft_is_prime.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX06` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX06 ../tester.c ft_is_prime.c -o test_ex06
   ./test_ex06
   ```
