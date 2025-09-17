#include "Expense.h"
#include <regex>
#include <stdexcept>
#include <sstream>

// Check leap year
bool Expense::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Validate date format and real calendar date
bool Expense::isValidDate(const std::string& date) {
    std::regex pattern("^\\d{4}-\\d{2}-\\d{2}$");
    if (!std::regex_match(date, pattern)) return false;

    int year, month, day;
    char sep;
    std::istringstream iss(date);
    iss >> year >> sep >> month >> sep >> day;

    if (month < 1 || month > 12) return false;
    if (day < 1) return false;

    int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    if (day > daysInMonth[month - 1]) return false;

    return true;
}

// Constructor
Expense::Expense(const std::string& desc, double amt, const std::string& date)
    : description(desc), amount(amt) {
    if (!isValidDate(date)) {
        throw std::invalid_argument("Invalid date. Use format YYYY-MM-DD and a real calendar date.");
    }
    this->date = date;
}

// Getters
std::string Expense::getDescription() const { return description; }
double Expense::getAmount() const { return amount; }
std::string Expense::getDate() const { return date; }
