#include <iostream>
#include "Expense.h"
#include "ExpenseManager.h"

int main() {
    ExpenseManager manager;
    int choice;

    do {
        std::cout << "\nExpense Tracker\n";
        std::cout << "1. Add Expense\n";
        std::cout << "2. View Expenses\n";
        std::cout << "3. View Total\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string desc, date;
            double amount;

            std::cout << "Enter description: ";
            std::cin.ignore();
            std::getline(std::cin, desc);

            std::cout << "Enter amount: ";
            std::cin >> amount;

            std::cout << "Enter date (YYYY-MM-DD): ";
            std::cin >> date;

            try {
                Expense e(desc, amount, date);
                manager.addExpense(e);
                std::cout << "Expense added successfully!\n";
            } catch (const std::invalid_argument& ex) {
                std::cout << "Error: " << ex.what() << "\n";
            }
        } else if (choice == 2) {
            manager.listExpenses();
        } else if (choice == 3) {
            std::cout << "Total Expenses: $" << manager.getTotal() << "\n";
        }
    } while (choice != 0);

    return 0;
}
