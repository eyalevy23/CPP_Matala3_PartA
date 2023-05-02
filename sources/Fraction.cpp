#include "Fraction.hpp"
#include <iostream>
#include <numeric>

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator)
{
    if(denominator == 0){
        throw std::invalid_argument("denominator can't be 0");
    }
    this->numerator = numerator;
    this->denominator = denominator;
};

int Fraction::getNumerator() const{
    return this->numerator;
}

int Fraction::getDenominator() const{
    return this->denominator;
}

void Fraction::setNumerator(int numerator){
    this->numerator = numerator;
}

void Fraction::setDenominator(int denominator){
    if(denominator == 0){
        throw std::invalid_argument("denominator can't be 0");
    }
    this->denominator = denominator;
}

Fraction Fraction::operator+(const Fraction& other) const{
    return Fraction(0,1);
}

Fraction Fraction::operator-(const Fraction& other) const{
    return Fraction(0,1);
}

Fraction Fraction::operator*(const Fraction& other) const{
    return Fraction(0,1);
}

Fraction Fraction::operator/(const Fraction& other) const{
    return Fraction(0,1);
}

bool Fraction::operator==(const Fraction& other)const {
    return true;
}

Fraction &Fraction::operator++(){
    return *this;
}

Fraction Fraction::operator++(int){
    Fraction other = *this;
    return other;
}

Fraction& Fraction::operator--(){
    return *this;
}

bool Fraction::operator<(const Fraction& other)const {
    return true;
}

bool Fraction::operator>(const Fraction& other)const {
    return true;
}

bool Fraction::operator<=(const Fraction& other)const {
    return true;
}

bool Fraction::operator>=(const Fraction& other)const {
    return true;
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction){
    return stream;
}

std::istream& operator>>(std::istream& stream, const Fraction& fraction){
    return stream;
}

//compare between fraction and float
bool operator==(const Fraction& fraction, const float num){
    return true;
}

bool operator<(const Fraction& fraction, const float num){
    return true;
}

bool operator>(const Fraction& fraction, const float num){
    return true;
}

bool operator<=(const Fraction& fraction, const float num){
    return true;
}

bool operator>=(const Fraction& fraction, const float num){
    return true;
}

//compare between float and fraction

bool operator==(const float num, const Fraction& fraction){
    return true;
}

bool operator<(const float num, const Fraction& fraction){
    return true;
}

bool operator>(const float num, const Fraction& fraction){
    return true;
}

bool operator<=(const float num, const Fraction& fraction){
    return true;
}

bool operator>=(const float num, const Fraction& fraction){
    return true;
}

//friend function
Fraction operator+(const float num, const Fraction& fraction){
    return Fraction(0,1);
}

Fraction operator-(const float num, const Fraction& fraction){
    return Fraction(0,1);
}

Fraction operator*(const float num, const Fraction& fraction){
    return Fraction(0,1);
}

Fraction operator/(const float num, const Fraction& fraction){
    return Fraction(0,1);
}


//frection reduction
void Fraction::reduction(){
    int gcdNum = std::gcd(this->numerator, this->denominator);
    this->numerator /= gcdNum;
    this->denominator /= gcdNum;
}

// float function
Fraction::Fraction(float num){
    this->numerator = (int)(num * 1000);
    this->denominator = 1000;
    reduction();
}

Fraction Fraction::operator+(const float num) {
    return Fraction(0,1);
}

Fraction Fraction::operator-(const float num) {
    return Fraction(0,1);
}

Fraction Fraction::operator*(const float num) {
    return Fraction(0,1);
}

Fraction Fraction::operator/(const float num) {
    return Fraction(0,1);
}

