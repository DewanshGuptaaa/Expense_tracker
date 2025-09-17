#include "ExpenseManager.h"
#include <iostream>
#include <iomanip>

void ExpenseManager::addExpense(const Expense& expense) {
    expenses.push_back(expense);
}

void ExpenseManager::listExpenses() const {
    if (expenses.empty()) {
        std::cout << "\nNo expenses recorded yet.\n";
        return;
    }

    std::cout << "\n--- Expense List ---\n";
    for (const auto& e : expenses) {
        std::cout << e.getDate() << " | "
                  << e.getDescription() << " | $"
                  << std::fixed << std::setprecision(2)
                  << e.getAmount() << "\n";
    }
}

double ExpenseManager::getTotal() const {
    double total = 0;
    for (const auto& e : expenses) {
        total += e.getAmount();
    }
    return total;
}
