# 🟢 Exercise 07: ft_find_next_prime

## 📝 Objective
Create a function that returns the closest prime number greater than or equal to the given number.

## 💡 The Logic
We place the highly optimized $O(\sqrt{N})$ prime-checking logic directly inside an infinite `while (1)` loop. 
If the current `nb` is not prime (meaning `nb % i == 0`), we `break` the inner loop, increment `nb++`, and start the prime check over again. The moment it confirms a prime number, it immediately returns `nb`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_find_next_prime.c`](ft_find_next_prime.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX07` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX07 ../tester.c ft_find_next_prime.c -o test_ex07
   ./test_ex07
   ```
