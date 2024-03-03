#include<iostream>
#include<string>
#include "Rational.h"

using namespace std;

////////////////////////////////// Constructors /////////////////////////////////////////////////

Rational::Rational():numerator(1),denominator(1){}
Rational::Rational(int n,int d)
{
   
   if(d==0){
    cout << "\nInvalid Data(0 is not allowed in denumerator).We set default Value 1 and 1.Plz set again value through setter function.";
   }else{
    this->numerator=n;
    this->denominator=d;
   }
}



//////////////////////////// Member Setter & Getter Function /////////////////////////////////////////////

void Rational::setdenumerator(int d)
{
   if(d==0){
    cout << "\nInvalid Data(0 is not allowed in denumerator).Plz set regain";
   }else{
    this->denominator=d;
   }
}
void Rational::setnumerator(int n ){
    this->numerator=n;
}
int Rational::getdenumerator() const{
    return this->denominator;
}
int Rational::getnumerator() const{
    return this->numerator;
}

//////////////////////////////////// Arthimetic Operator Overloading ////////////////////////////////////

Rational Rational::operator+(const Rational& other){
    Rational temp;
        temp.numerator= (numerator * other.denominator) + (other.numerator * denominator);
        temp.denominator = denominator * other.denominator;
        return temp;
    }
   Rational Rational::operator+(const int& other){
    Rational temp;
        temp.numerator= (numerator) + (other * denominator);
        temp.denominator = denominator;
        return temp;
    }


    // Subtraction of two rational numbers
    Rational Rational:: operator-(const Rational& other)  {
        Rational temp;
        temp.numerator= (numerator * other.denominator) - (other.numerator * denominator);
       temp.denominator = denominator * other.denominator;
        return temp;
    }
    // Subtraction of two rational numbers
    Rational Rational:: operator-(const int& other)  {
        Rational temp;
        temp.numerator= (numerator) - (other * denominator);
       temp.denominator = denominator;
        return temp;
    }

    // Multiplication of two rational numbers
    Rational Rational:: operator*(const Rational& other)  {
        Rational temp;
       temp.numerator = numerator * other.numerator;
        temp.denominator = denominator * other.denominator;
        return temp;
    }
    Rational Rational:: operator*(const int& other)  {
        Rational temp;
       temp.numerator = numerator * other;
        temp.denominator = denominator;
        return temp;
    }

    // Division of two rational numbers
    Rational Rational:: operator/(const Rational& other)  {
        // Ensure the denominator of the divisor is not zero
        if (other.numerator == 0) {
            cout << "Error: Division by zero." << endl;
            exit(1);
        }
         Rational temp;
        temp.numerator= numerator * other.denominator;
        temp.denominator = denominator * other.numerator;
        return temp;
    }
    // Division of two rational numbers
    Rational Rational:: operator/(const int& other)  {
        // Ensure the denominator of the divisor is not zero
        if (other == 0) {
            cout << "Error: Division by zero." << endl;
            exit(1);
        }
         Rational temp;
        temp.numerator= numerator;
        temp.denominator = denominator * other;
        return temp;
    }

/////////////////////////////////// Relational OPerator Overloading /////////////////////////////////////

 // Equal to operator (==)
    bool Rational:: operator==(const Rational& other) const {
        return (numerator == other.numerator) && (denominator == other.denominator);
    }

    // Not equal to operator (!=)
    bool Rational:: operator!=(const Rational& other) const {
        return !(*this == other);
    }

    // Less than operator (<)
    bool Rational:: operator<(const Rational& other) const {
        return (numerator * other.denominator) < (other.numerator * denominator);
    }

    // Greater than operator (>)
    bool Rational:: operator>(const Rational& other) const {
        return (numerator * other.denominator) > (other.numerator * denominator);
    }

    // Less than or equal to operator (<=)
    bool Rational:: operator<=(const Rational& other) const {
        return (numerator * other.denominator) <= (other.numerator * denominator);
    }

    // Greater than or equal to operator (>=)
    bool Rational:: operator>=(const Rational& other) const {
        return (numerator * other.denominator) >= (other.numerator * denominator);
    }





////////////////////////////////// Compound Assignment Operator ////////////////////////////////////////
 // Compound addition operator (+=)
    Rational& Rational:: operator+=(const Rational& other) {
        numerator = (numerator * other.denominator) + (other.numerator * denominator);
        denominator *= other.denominator;
        return *this;
    }

    // Compound subtraction operator (-=)
    Rational& Rational:: operator-=(const Rational& other) {
        numerator = (numerator * other.denominator) - (other.numerator * denominator);
        denominator *= other.denominator;
        return *this;
    }

    // Compound multiplication operator (*=)
    Rational& Rational:: operator*=(const Rational& other) {
        numerator *= other.numerator;
        denominator *= other.denominator;
        return *this;
    }

    // Compound division operator (/=)
    Rational& Rational:: operator/=(const Rational& other) {
        // Ensure the denominator of the divisor is not zero
        if (other.numerator == 0) {
            std::cerr << "Error: Division by zero." << std::endl;
            exit(1);
        }

        numerator *= other.denominator;
        denominator *= other.numerator;
        return *this;
    }

////////////////////////////////////// Unary Operator //////////////////////////////////////////////

    Rational& Rational:: operator++(){
        // cout << this;
        this->numerator+=(denominator) ;
        return *this;

    }
    Rational Rational:: operator++(int){

        Rational temp(*this);
        this->numerator+=(denominator) ;
        return temp;

    }
    Rational& Rational:: operator--(){
        // cout << this;
        this->numerator-=(this->denominator) ;
        return *this;

    }
    Rational Rational:: operator--(int){

        Rational temp(*this);
        this->numerator-=(denominator) ;
        return temp;

    }
//////////////////////////////// Freind Function ///////////////////////////////////////////////////////

ostream& operator<<(ostream& out,const Rational& R){
    out << R.numerator << "/" << R.denominator;
    return out;
}
istream& operator>>(istream& in, Rational& R){
    cout << "==>Enter the Value of Numerator:: ";
    in>>R.numerator;
    do
    {
        cout << "==>Enter the Value of Denumerator:: ";
        in >> R.denominator;
        if(R.denominator==0) cout << "-- 0 is not Allowed\n";
        else break;
    } while (true);
    return in;
}



