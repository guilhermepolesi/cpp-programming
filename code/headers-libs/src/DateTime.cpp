#include <iostream>
#include <iomanip>
#include <sstream>

#include "../headers/DateTime.hpp"

DateTime::DateTime() {
    // Initialize with current system time
    timestamp = std::chrono::system_clock::now();
}

std::chrono::system_clock::time_point DateTime::getTimestamp() const {
    return timestamp;
}

void DateTime::setTimestamp(const std::chrono::system_clock::time_point& newTimestamp) {
    timestamp = newTimestamp;
}

std::string DateTime::printFormattedTimestamp() const {
    // Convert time_point to time_t for local time manipulation
    std::time_t ts_c = std::chrono::system_clock::to_time_t(timestamp);
    // Convert time_t to local time tm structure
    std::tm local_tm = *std::localtime(&ts_c);

    // Create a string stream for formatted output
    std::stringstream ss;
    // Format the date and time components with leading zeros if necessary
    ss << std::setfill('0')
       << std::setw(2) << (local_tm.tm_mon + 1) << "/"   // Month (adjusted for base 1)
       << std::setw(2) << local_tm.tm_mday << "/"       // Day of the month
       << std::setw(4) << (local_tm.tm_year + 1900) << " " // Year (count of years since 1900)
       << std::setw(2) << local_tm.tm_hour << ":"       // Hour
       << std::setw(2) << local_tm.tm_min << ":"        // Minutes
       << std::setw(2) << local_tm.tm_sec;              // Seconds

    // Print the formatted timestamp to standard output
    return ss.str();
}

