# 🟢 Exercise 03: ft_recursive_power

## 📝 Objective
Create a recursive function that returns the value of a number raised to a given power.

## 💡 The Logic
Similar to the recursive factorial, we define our base cases: return 0 if `power < 0`, and return 1 if `power == 0`. 
The recursive step returns `nb * ft_recursive_power(nb, power - 1)`. The function continues to call itself, reducing the power by 1 each time, until the power hits 0 and the stack resolves.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_recursive_power.c`](ft_recursive_power.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX03` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX03 ../tester.c ft_recursive_power.c -o test_ex03
   ./test_ex03
   ```
