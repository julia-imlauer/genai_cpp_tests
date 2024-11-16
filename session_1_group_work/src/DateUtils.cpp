#include "DateUtils.h"
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <cmath>

bool DateUtils::IsValidDate(const std::string& date) {
    std::istringstream ss(date);
    std::tm tm = {};
    ss >> std::get_time(&tm, "%Y-%m-%d");
    return !ss.fail();
}

int DateUtils::DaysBetween(const std::string& date1, const std::string& date2) {
    std::istringstream ss1(date1);
    std::istringstream ss2(date2);
    std::tm tm1 = {}, tm2 = {};

    ss1 >> std::get_time(&tm1, "%Y-%m-%d");
    ss2 >> std::get_time(&tm2, "%Y-%m-%d");

    if (ss1.fail() || ss2.fail()) {
        throw std::invalid_argument("Invalid date format. Use YYYY-MM-DD.");
    }

    std::time_t time1 = std::mktime(&tm1);
    std::time_t time2 = std::mktime(&tm2);

    const int SECONDS_IN_A_DAY = 60 * 60 * 24;
    return std::abs(static_cast<int>(std::difftime(time2, time1) / SECONDS_IN_A_DAY));
}

std::string DateUtils::GetCurrentDate() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(localTime, "%Y-%m-%d");
    return oss.str();
}
