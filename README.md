# Create a class to represent rational numbers and a test program to verify that all required 
functionality works. In this C++ project you are required to implement a Rational class that 
represents two integer type rational numbers r1 and r2 to perform arithmetic operations, relational 
operators, equality operators and unary operators and implemented friend function and operator
overloading.
# A RationalNumber is a type of real number, can be defined as any number which can be
represented in the form of p/q where q ≠ 0. (Where p/0 is not a rational number)
Hint: The code performs several arithmetic operations, binary operators, relational Operators
equality operators on r1 and r2 using overloaded operators. Set the limit p/0 is not allowed
(condition is false)
# Data Members: Two rational number r1 and r2
      ● int numerator
      ● int denominator
#Member Functions: numerator and denominator p/q where q ≠ 0.
      ● Constructor:
          o Default constructor
          o Take two integers: one numerator and one denominator
      ● Accessors:
          ○ int getNumerator()
          ○ int getDenominator()
      ● Mutators:
          ○ void setNumerator(int num)
          ○ void setDenominator(int denom)
#    ● Operators Overloading
##       o Binary Operator (arithmetic, stream operators, relational operators)
            ▪ Using Member functions
            ▪ Using Friend functions
##       o Arithmetic Operators
            ⮚ + (Addition): Adds two rational numbers or a rational number and
            aninteger.
            ⮚ - (Subtraction): Subtracts two rational numbers or a rational number
            and an integer.
            ⮚ *(Multiplication): Multiplies two rational numbers or a
            rationalnumber and an integer.
            ⮚ / (Division): Divides a rational number by an integer.
            ⮚ % (Modulus): Calculates the modulus of two rational numbers or a
            rational number and an integer.
##      o Comparison Operators
            ⮚ == (Equal to): Checks if two rational numbers or a rational number and
            aninteger are equal.
            ⮚ != (Not equal to): Checks if two rational numbers or a rational number
            and aninteger are not equal.
            ⮚ < (Lessthan): Checksif a rational number is lessthan another rational number
            or an integer.
            ⮚ (Greater than): Checks if a rational number is greater than another
            rational number or an integer.
            ⮚ <= (Less than or equal to): Checks if a rational number is less
            than orequal to another rational number or an integer.
            ⮚ >= (Greater than or equal to): Checks if a rational number is greater
            than orequal to another rational number or an integer.
##      o Compound Assignment Operators
            ⮚ +=(Addition): Adds two rational numbers or a rational number and an integer.
            ⮚ -=(Subtraction): Subtracts two rational numbers or a rational number
            and aninteger.
            ⮚ *=(Multiplication): Multiply two rational numbers or a rational
            number andan integer.
            ⮚ /+(division): divide two rational numbers
            o Unary operator
            Using member functions
            ⮚ pre-increment operator ++num, post-Increment num++
            ⮚ pre-decrement operator –num, post-decrement num–