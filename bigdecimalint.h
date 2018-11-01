// Program: CS213-2018-A2-T3
// Purpose: make a big decimal class to store a big decimal int number
// Author:  Ibrahim Ramadan 20170002
//          Athar Atef      20170005
//          Ahmed Elsayed   20170011
// Date:    22 October  2018
// Version: 2.0




#ifndef BIGDECIMALINT_H
#define BIGDECIMALINT_H
#include <iostream>
#include <string>
using namespace std;

class BigDecimalInt
{
public:



    string num;
    int sum, carry;

    BigDecimalInt(string decstr);
    BigDecimalInt(int decint);
    BigDecimalInt();

    BigDecimalInt operator+(BigDecimalInt b);
    BigDecimalInt operator-(BigDecimalInt b);

    friend ostream& operator<< (ostream& output, BigDecimalInt a);
    friend bool checkvalid(BigDecimalInt &b);
    friend bool checksign(BigDecimalInt &b);
    friend bool checkbigger(string a, string b);
    friend void removeleftzeros(string &a);
};

#endif // BIGDECIMALINT_H
