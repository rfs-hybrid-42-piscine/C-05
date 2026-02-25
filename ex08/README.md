# 🟢 Exercise 08: ft_ten_queens_puzzle

## 📝 Objective
Create a function that displays all possible placements of ten queens on a $10 \times 10$ chessboard ensuring no two queens can attack each other, and return the total number of solutions.

## 💡 The Logic
This is a classic computer science problem solved using **Recursive Backtracking**. 
1. **The State:** We use a simple 1D array `int queens[10]`, where the array *index* represents the column, and the stored *value* represents the row.
2. **Safety Check:** The `is_safe` function checks if a newly placed queen shares a row or a diagonal with any previously placed queen.
3. **Backtracking:** The `solve` function iterates through the columns. If placing a queen is safe, it sets the position and recursively calls itself for the next row. If it hits a dead end, it *backtracks* (overwrites the previous attempt) and tries the next available spot. 
4. Once it successfully places 10 queens (reaching row 10), it prints the array and adds to the total solution counter.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_ten_queens_puzzle.c`](ft_ten_queens_puzzle.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-05` directory. You must pass the `-D EX08` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX08 ../tester.c ft_ten_queens_puzzle.c -o test_ex08
   ./test_ex08
   ```
