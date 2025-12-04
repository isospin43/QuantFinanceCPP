#ifndef EUROPEANOPTION_HPP
#define EUROPEANOPTION_HPP

#include <string>

class EuropeanOption 
{
    private:

        void init(); // Initialize all default values
        void copy(const EuropeanOption& o2);
        // "Kernel" functions for option calculations
        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;

    public:
        // Public member data for convenience
        double r;      // Interest rate
        double sig;    // Volatility
        double K;      // Strike price
        double T;      // Expiry date
        double U;      // Current underlying price / spot price
        double b;      // Cost to carry

        std::string optType; //

    public:
        // Constructors
        EuropeanOption(); // Default call option
        EuropeanOption(const EuropeanOption& option2);      // copy constructor
        EuropeanOption(const std::string& optionType);      // create option type

        

};
#endif