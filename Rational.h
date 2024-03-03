#include<iostream>
#include<string>
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational(int , int);
    Rational();
    void setnumerator(int);
    void setdenumerator(int);
    int getnumerator() const;
    int getdenumerator() const;
    Rational operator+(const Rational&);
    Rational operator+(const int&);
    Rational operator-(const Rational&);
    Rational operator-(const int&);
    Rational operator*(const Rational&);
    Rational operator*(const int&);
    Rational operator/(const Rational&);
    Rational operator/(const int&);

    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);

    Rational& operator++();
    Rational& operator--();
    Rational operator++(int);
    Rational operator--(int);
    
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator<=(const Rational& other) const;
    bool operator>=(const Rational& other) const;

    friend ostream& operator<<(ostream&,const Rational&);
    friend istream& operator>>(istream&, Rational&);



};




   
