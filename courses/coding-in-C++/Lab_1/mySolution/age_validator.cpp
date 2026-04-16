/*
 * File: age_validator.cpp
 * Description: Program to classify your age
 */

#include <iostream>
#include <cstdint>
#include <limits>

namespace validation
{
    const std::uint8_t ADULT_AGE_LIMIT = 18;
    const std::uint8_t SENIOR_AGE_LIMIT = 65;

    bool isAdult(std::uint8_t age)
    {
        return age >= ADULT_AGE_LIMIT;
    }

    bool isSenior(std::uint8_t age)
    {
        return age >= SENIOR_AGE_LIMIT;
    }
}

int main()
{
    const std::uint8_t MAX_AGE = 120;
    int age = 0;

    std::cout << "Please enter your age: ";
    while(true)
    {
        // if not a number
        if (!(std::cin >> age))
            {
                std::cout << "You did not enter a valid number. Please try again." << '\n';
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        // no negative numbers allowed
        else if (age < 0)
        {
            std::cout << "You entered a negative number. Please try again." << '\n';
        }
        // no numbers larger than MAX_AGE allowed
        else if (age > MAX_AGE)
        {
            std::cout << "Your number is too large. Please try again." << '\n';
        }
        // valid input ends infinite loop
        else
        {
            break;
        }
        std::cout << "Please enter your age: ";
    }

    std::cout << "Your are" << age << "years old." << std::endl;

    const std::uint8_t validated_age = static_cast<std::uint8_t>(age);

    if (validation::isSenior(validated_age))
    {
        std::cout << "That means you are a senior citizen." << std::endl;
    }
    else if (validation::isAdult(validated_age))
    {
        std::cout << "That means you are an adult." << std::endl;
    }
    else
    {
        std::cout << "That means you are still a kid or teenager." << std::endl;
    }
    
    return 0;
}