#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <string>
#include<iostream>
#include<vector>

namespace ariel{};

class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        void reduction();
        Fraction (float num);

        int getNumerator() const;
        int getDenominator() const;
        void setNumerator(int numerator);
        void setDenominator(int denominator);

        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        Fraction operator/(const Fraction& other) const;

        Fraction operator+(float num);
        Fraction operator-(float num);
        Fraction operator*(float num);
        Fraction operator/(float num);
        
        bool operator==(const Fraction& other) const;
        
        Fraction &operator++();
        Fraction operator++(int);
        Fraction &operator--();

        bool operator<(const Fraction& other) const;
        bool operator>(const Fraction& other) const;
        bool operator<=(const Fraction& other) const;
        bool operator>=(const Fraction& other) const;

        friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);
        friend std::istream& operator>>(std::istream& stream, const Fraction& fraction);

        //freind 
        friend Fraction operator+(float num, const Fraction& other);
        friend Fraction operator-(float num, const Fraction& other);
        friend Fraction operator*(float num, const Fraction& other);
        friend Fraction operator/(float num, const Fraction& other);
    
};

#endif