#include "Person.hpp"

Person::Person(const string& name, const time_t& DateofBirth)
{
    nam = name;
    dob = DateofBirth;
    createdD = time_t();
}

void Person::print() const
{
    // Who am I?

    cout << "------ Person Data -----\n";
    cout << "Name: " << nam << ", Date of birth: " << dob << ", Age: " << age() << endl;
}

int Person::age() const 
{
    std::time_t raw_time = std::time(nullptr);
    std::tm* local_time = std::localtime(&raw_time);
    std::time_t seconds = std::mktime(local_time);
    return int( double(seconds - dob) / (365.0 * 24 * 3600));
}

#include <ctime>
#include "Person.hpp"
#include <string>
using namespace std;

int main()
{
      // Create a custom date: January 1, 2025, 10:30:00
    std::tm custom_date = {}; // Initialize all members to 0
    custom_date.tm_year = 1943 - 1900; // Years since 1900
    custom_date.tm_mon = 0;           // January (0-indexed)
    custom_date.tm_mday = 1;          // Day of the month
    // custom_date.tm_hour = 10;
    // custom_date.tm_min = 30;
    // custom_date.tm_sec = 0;
    //custom_date.tm_isdst = -1;       // Let mktime determine daylight saving

    // Convert to time_t
    std::time_t time_value = std::mktime(&custom_date);
    string MyName ("Steve");
    Person dd(MyName, time_value);
    dd.print();
    //std::cout << "Custom Date: " << time_value;
    // Print the custom date
    //std::cout << "Custom Date: " << std::asctime(&custom_date);
    




    return 0;
}


// #include <iostream>
// #include <ctime>

// int main() {
//     // Create a custom date: January 1, 2025, 10:30:00
//     std::tm custom_date = {}; // Initialize all members to 0
//     custom_date.tm_year = 2025 - 1900; // Years since 1900
//     custom_date.tm_mon = 0;           // January (0-indexed)
//     custom_date.tm_mday = 1;          // Day of the month
//     custom_date.tm_hour = 10;
//     custom_date.tm_min = 30;
//     custom_date.tm_sec = 0;
//     custom_date.tm_isdst = -1;       // Let mktime determine daylight saving

//     // Convert to time_t
//     std::time_t time_value = std::mktime(&custom_date);

//     // Print the custom date
//     std::cout << "Custom Date: " << std::asctime(&custom_date);

//     return 0;
//}
