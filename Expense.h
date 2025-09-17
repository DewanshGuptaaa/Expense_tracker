#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
    std::string description;
    double amount;
    std::string date; // YYYY-MM-DD

    bool isValidDate(const std::string& date);
    bool isLeapYear(int year);

public:
    Expense(const std::string& desc, double amt, const std::string& date);

    std::string getDescription() const;
    double getAmount() const;
    std::string getDate() const;
};

#endif
