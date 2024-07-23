#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <chrono>

class DateTime {
    private:
        std::chrono::system_clock::time_point timestamp;

public:
    DateTime();
    std::chrono::system_clock::time_point getTimestamp() const;
    void setTimestamp(const std::chrono::system_clock::time_point& newTimestamp);
    std::string printFormattedTimestamp() const;
};

#endif // DATE_TIME_H
