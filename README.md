*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-c05.png" alt="C 05 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 05: Math & Recursion</h1>
  <p><i>Mastering iterative algorithms, recursive call stacks, and backtracking.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 05** introduces computer science algorithms and mathematical problem-solving. 

In this module, you will recreate basic mathematical operations (factorials, powers, square roots, and prime number detection). The true challenge lies in implementing these solutions using two entirely different approaches: **Iterative** (using standard `while` loops) and **Recursive** (where a function repeatedly calls itself). The module culminates in the Ten Queens puzzle, requiring a complex recursive backtracking algorithm.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and edge-case management.*

### 🔹 Factorials & Powers
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: ft_iterative_factorial`](ex00)** | **Iterative Math:** Calculating a factorial ($n!$) using a standard loop. <br><br>**Logic:** A factorial is the product of an integer and all the integers below it (e.g., $4! = 4 \times 3 \times 2 \times 1$). We use a `while` loop to multiply a `result` variable by a decreasing counter until it reaches 1. Invalid numbers (like negatives) must return 0. |
| **[`ex01: ft_recursive_factorial`](ex01)** | **Recursive Factorial:** Calculating a factorial using function self-calling. <br><br>**Logic:** Instead of a loop, the function calls itself with `nb - 1`. The base case to stop the recursion is when `nb` equals 0 or 1 (returning 1). The return statement builds the math dynamically: `return (nb * ft_recursive_factorial(nb - 1))`. |
| **[`ex02: ft_iterative_power`](ex02)** | **Iterative Exponents:** Calculating $nb^{power}$ using a loop. <br><br>**Logic:** We multiply `nb` by itself inside a loop that runs `power` times. By mathematical definition, any number to the power of 0 returns 1. If power is negative, it returns 0. |
| **[`ex03: ft_recursive_power`](ex03)** | **Recursive Exponents:** Calculating $nb^{power}$ using recursion. <br><br>**Logic:** The function calls itself, decrementing the `power` parameter each time. The base case stops the recursion when `power == 0`, returning 1. The result is accumulated as the call stack unwinds: `return (nb * ft_recursive_power(nb, power - 1))`. |

### 🔢 Advanced Mathematics
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex04: ft_fibonacci`](ex04)** | **Fibonacci Sequence:** Finding the $n$-th element of the sequence using pure recursion. <br><br>**Logic:** In the Fibonacci sequence, every number is the sum of the two preceding ones ($0, 1, 1, 2, 3, 5...$). The function requires two recursive calls added together: `return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2))`. The base cases are when index is 0 (returns 0) or 1 (returns 1). |
| **[`ex05: ft_sqrt`](ex05)** | **Integer Square Root:** Finding the exact square root of a number. <br><br>**Logic:** We iterate a variable `i` starting from 1. We multiply `i * i` until it equals `nb` (returning `i`) or exceeds `nb` (meaning the square root is irrational, returning 0). *Crucial Trap:* Multiplying `i * i` can easily overflow the 32-bit integer limit if `nb` is very large, so `i` must be safely cast or bounded (e.g., $46340^2$). |
| **[`ex06: ft_is_prime`](ex06)** | **Prime Numbers:** Determining if a number is prime. <br><br>**Logic:** A prime number is only divisible by 1 and itself. We loop a divisor variable from 2 upwards. If `nb % divisor == 0` at any point, the number is not prime. *Optimization:* We only need to check divisors up to the square root of `nb` (`divisor * divisor <= nb`) to prove it is prime. |
| **[`ex07: ft_find_next_prime`](ex07)** | **Next Prime:** Locating the closest prime number greater than or equal to `nb`. <br><br>**Logic:** We simply use the prime-checking logic from `ex06` inside a loop. If `nb` is not prime, we increment it (`nb++`) and check again until we find a prime. |

### 👑 The Final Boss
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex08: The Ten Queens`](ex08)** | **Recursive Backtracking:** Placing 10 queens on a $10 \times 10$ board so none can attack each other. <br><br>**Logic:** We use a 1D integer array `board[10]` where the index represents the column and the value represents the row. The algorithm places a queen in column 0, then recursively tries to place a queen in column 1. Before placing, it checks if the spot is safe (not in the same row, not on the same diagonal). If it hits a dead end, it *backtracks* (undoes the last placement) and tries the next row. It prints the board every time 10 queens are safely placed and returns the total solution count. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing (The Master Test)
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. 

To make testing incredibly easy while avoiding "undefined reference" linker errors, the **[`tester.c`](tester.c)** file in the root directory uses **C Preprocessor Macros** (`#ifdef`). This allows you to selectively compile and test only the exercises you want.

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C-05
   ```

2. **Test a Single Exercise:**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside **[`tester.c`](tester.c)**.
   ```bash
   # Example for ex00:
   cc -Wall -Wextra -Werror -D EX00 tester.c ex00/ft_iterative_factorial.c -o test_ex00
   ./test_ex00
   ```

3. **Test Multiple Exercises Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex00 and ex01:
   cc -Wall -Wextra -Werror -D EX00 -D EX01 tester.c ex00/ft_iterative_factorial.c ex01/ft_recursive_factorial.c -o test_multiple
   ./test_multiple
   ```

4. **Test ALL Exercises at Once:**
   By passing the `-D TEST_ALL` master flag, you can activate the entire testing suite in one go!
   ```bash
   cc -Wall -Wextra -Werror -D TEST_ALL tester.c ex00/ft_iterative_factorial.c ex01/ft_recursive_factorial.c ex02/ft_iterative_power.c ex03/ft_recursive_power.c ex04/ft_fibonacci.c ex05/ft_sqrt.c ex06/ft_is_prime.c ex07/ft_find_next_prime.c ex08/ft_ten_queens_puzzle.c -o test_all
   ./test_all
   ```

> **⚠️ WARNING for 42 Students:** Do not push **[`tester.c`](tester.c)** or any executable files to your final Moulinette repository! They are strictly for local testing purposes. Submitting unauthorized files will result in a 0.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 math` - Standard math library references (though you must build these functions manually).
* [Computerphile: Recursion](https://www.youtube.com/watch?v=Mv9NEXX1VHc) - Excellent visual explanation of recursive call stacks.
* [Backtracking & N-Queens](https://www.youtube.com/watch?v=xouin83ebxE) - The foundational logic needed to solve Exercise 08.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
