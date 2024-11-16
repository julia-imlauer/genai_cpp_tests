#ifndef DATE_UTILS_H
#define DATE_UTILS_H

#include <string>
#include <ctime>

class DateUtils {
public:
    // Validates if the given date is in the format YYYY-MM-DD
    bool IsValidDate(const std::string& date);

    // Calculates the difference in days between two dates
    int DaysBetween(const std::string& date1, const std::string& date2);

    // Gets the current date in the format YYYY-MM-DD
    std::string GetCurrentDate();
};

#endif // DATE_UTILS_H
