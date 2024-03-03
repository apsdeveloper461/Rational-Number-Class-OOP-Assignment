#include<iostream>
#include<string>
#include<conio.h>
#include "Rational.cpp"

using namespace std;


int main(){
     Rational r1;
     Rational r2;
     cin >> r1 ;
     cin >> r2;
     bool loopBreak=false;
do
{
    /* code */

     char ch;
     cout << "\n\n"
          << " __________________________________________________________________________________\n"
          << "|                                                                                  |\n"
          << "|                  ---- All Operator Overloading Assignment -----                  | \n"
          << "|                                                                                  |\n"
          << "|     (1) Perform All Arithmetic Operator......                                    | \n"
          << "|     (2) Perform All Arithmetic Operator with rational NO and Integer......       |\n"
          << "|     (3) Perform All Unary Operator......                                         | \n"
          << "|     (4) Perform All Relational Operator......                                    | \n"
          << "|     (5) Perform All Compound Assignment Operator......                           | \n"
          << "|     (6) Exit......                                                               | \n"
          << "|__________________________________________________________________________________|\n";
        do{
            cout << "\n==> Enter a Choice:: ";
            ch=_getche();
            if(ch<'1' || ch>'6'){
            cout << "\n--Invalid Input. Enter in the range(1 to 5 )";
            }else{
            break;
            }
        }while(true);
        switch (ch)
        {
        case '1':{
        cout << "\n--------------------Arithematic Operator ---------------\n"
                << "Addition :: " << r1+r2 << endl
                << "Subtraction :: " << r1-r2 << endl
                << "Division :: " << r1/r2 << endl
                << "Multiplication :: " << r1*r2 << endl;
        }   
            break;
            case '2':{
        int n;
            cout << "\n\n==>Enter an integer to perform with " << r2 << " arithmatic operation :: ";
            cin >> n;
                cout << "\n--------------------Arithematic Operator with Integer---------------\n"
            << "Addition :: " << r2+n << endl
            << "Subtraction :: " << r2-n << endl
            << "Division :: " << r2/n << endl
            << "Multiplication :: " << r2*n ;
            }
        break;
        case '3':{
        cout << "\n-------------Unary Operator------------------\n";
            cout << "Unary operator on r1 which has value " << r1  << endl;
            cout << "pre Increment in r1::" << ++r1 << endl;
            cout << "post Increment in r1::" << r1++ << "   ";
            cout << "After Post Increment:: "<< r1 << endl;
            cout   << "pre Decrement in r1::" << --r1 << r1 << endl;
            cout<< "post Decrement in r1::" << r1-- << endl;
            cout << "After post decremet::" << r1 << endl;
        }
        break;
        case '4':{
            cout << "\n ------------------ Relational Operator --------------\n";
            cout <<"both Value are" << r1 << "    " << r2 << endl
                << "Greater :: " << (r1 > r2) << endl
                << "Less :: " << (r1 < r2) << endl
                << "Greater and Equal :: " << (r1 >= r2) << endl
                << "Less And Equal :: " << (r1 <= r2) << endl
                << "Equal :: " << (r1 == r2) << endl
                << "Not Equal :: " << (r1 != r2) << endl;
        }
        break;
        case '5':{
            cout << "\n ----- All compound Assignment Operator-------\n";
            cout << "r2 add to r1 and assign to r1 ::here (r1=" <<r1 <<  " and r2=" << r2 << "):" ;
            r1+=r2;
            cout << r1 << endl;
            cout << "r2 subtract to r1 and assign to r1 ::here (r1=" <<r1 <<  " and r2=" << r2 << ") :" ;
            r1-=r2;
            cout << r1 << endl;
            cout << "r2 multiple to r1 and assign to r1 :: here (r1=" <<r1 <<  " and r2=" << r2 << ") :" ;
            r1*=r2;
            cout << r1 << endl;
            cout << "r2 division to r1 and assign to r1 :: here (r1=" <<r1 <<  " and r2=" << r2 << ") :" ;
            r1/=r2;
            cout << r1 << endl;
        }
        break;
        default:
            loopBreak=true;
            break;
        }
        if(loopBreak) break;
        

  
   


  
} while (true);
     




    return 0;
}