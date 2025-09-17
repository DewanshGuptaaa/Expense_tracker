#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H

#include "Expense.h"
#include <vector>

class ExpenseManager {
private:
    std::vector<Expense> expenses;

public:
    void addExpense(const Expense& expense);
    void listExpenses() const;
    double getTotal() const;
};

#endif
