# Expense Tracker C++ Project

## Overview
The Expense Tracker is a **console-based C++ application** designed to help users record, view, and calculate their expenses. This project is **multi-file, modular, and beginner-friendly**, making it perfect for demonstrating C++ skills, object-oriented programming, and date validation logic.

**Features:**
- Add expenses with description, amount, and date (YYYY-MM-DD).  
- View a list of all recorded expenses.  
- View the total sum of all expenses.  
- Validate user input for proper date format and real calendar dates.  

## Project Structure

ExpenseTracker/
├── main.cpp
├── Expense.h
├── Expense.cpp
├── ExpenseManager.h
├── ExpenseManager.cpp
├── README.md

## Prerequisites
- C++ compiler (e.g., `g++` or `clang++`)  
- Git (for uploading to GitHub)  
- Terminal/Command Prompt  

## Compilation and Running

1. Open terminal/command prompt in the `ExpenseTracker` folder.  

2. Compile all files together:

```bash
# Linux/macOS
g++ main.cpp Expense.cpp ExpenseManager.cpp -o ExpenseTracker

# Windows
g++ main.cpp Expense.cpp ExpenseManager.cpp -o ExpenseTracker.exe
```
3. Run the application:
```bash
# Linux/macOS
./ExpenseTracker

# Windows
ExpenseTracker.exe
```
## Usage

1. Add Expense
Enter a description, amount, and date (YYYY-MM-DD).
Invalid dates will be rejected with an error message.

2. View Expenses
Displays all recorded expenses in a formatted list.

3. View Total
Displays the sum of all expenses.

4. Exit
Press 0 to exit the program.

## Sample Output
```bash
Expense Tracker
1. Add Expense
2. View Expenses
3. View Total
0. Exit
Enter choice: 1
Enter description: Grocery
Enter amount: 50.75
Enter date (YYYY-MM-DD): 2025-09-16
Expense added successfully!

Enter choice: 2
--- Expense List ---
2025-09-16 | Grocery | $50.75

Enter choice: 3
Total Expenses: $50.75
```
