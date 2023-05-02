#include <iostream>
#include "doctest.h"
#include <vector>
#include "sources/Fraction.hpp"

TEST_CASE("dominetorTest"){
    CHECK_THROWS(Fraction(1,0)); // throws exception when denominator is 0
    Fraction f1(1,2);
    CHECK_THROWS(f1.setDenominator(0)); // throws exception when denominator is 0
    CHECK(f1.getDenominator() == 2);
    f1.setDenominator(6);
    CHECK(f1.getDenominator() == 6);
}

TEST_CASE("numeratorTest"){
    Fraction f1(1,2);
    CHECK(f1.getNumerator() == 1);
    f1.setNumerator(6);
    CHECK(f1.getNumerator() == 6);
}

TEST_CASE("operators"){
    Fraction f1(1,2);
    Fraction f2(2,4);
    Fraction f3(1,3);
    Fraction f4(2,3);
    //plus
    CHECK(f1 + f2 == Fraction(1,1));
    CHECK(f1 + f3 == Fraction(5,6));
    CHECK(f1 + f4 == Fraction(7,6));
    //minus
    CHECK(f1-f2 == Fraction(0,1));
    CHECK(f1-f3 == Fraction(1,6));
    CHECK(f1-f4 == Fraction(-1,6));
    //multiply
    CHECK(f1 * f2 == Fraction(1,4));
    CHECK(f1 * f3 == Fraction(1,6));
    CHECK(f1 * f4 == Fraction(2,6));
    //divide
    CHECK(f1 / f2 == Fraction(1,1));
    CHECK(f1 / f3 == Fraction(3,2));
    CHECK(f1 / f4 == Fraction(3,4));
}

TEST_CASE("operators with float"){
    Fraction f1(1,2);
    //plus
    CHECK(f1 + 1.5 == Fraction(2,1));
    CHECK(f1 + 0.5 == Fraction(1,1));
    CHECK(f1 + 0.25 == Fraction(3,4));
    //minus
    CHECK(f1 - 1.5 == Fraction(-1,1));
    CHECK(f1 - 0.5 == Fraction(0,1));
    CHECK(f1 - 0.25 == Fraction(1,4));
    //multiply
    CHECK(f1 * 1.5 == Fraction(3,4));
    CHECK(f1 * 0.5 == Fraction(1,4));
    CHECK(f1 * 0.25 == Fraction(1,8));
    //divide
    CHECK(f1 / 1.5 == Fraction(1,3));
    CHECK(f1 / 0.5 == Fraction(1,1));
    CHECK(f1 / 0.25 == Fraction(2,1));
}

