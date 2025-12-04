// Person.hpp
//
// "Hello World" class Function declarations
//

#ifndef Person_HPP
#define Person_HPP

#include <ctime>
#include <string>
#include <iostream>

using namespace std;

class Person
{
    public: // Everything public, for convenience
        string nam;            // Name of person
        time_t dob;        // Date of birth
        time_t createdD = time(nullptr);   // When object was created
    
    public:
        Person( const string& name, const time_t& DateofBirth);
        void print() const;
        int age() const;
};

#endif
