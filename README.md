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
├── main.cpp # Main program logic
├── Expense.h # Expense class declaration
├── Expense.cpp # Expense class implementation
├── ExpenseManager.h # ExpenseManager class declaration
├── ExpenseManager.cpp # ExpenseManager class implementation

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

3. Run the application:
# Linux/macOS
./ExpenseTracker

# Windows
ExpenseTracker.exe
