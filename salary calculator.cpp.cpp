#include<iostream>
using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: salary calculator.cpp
// Last Modification Date: 22/02/2018
// Author1 and ID and Group: Ahmed Elsayed 20170011 G1
// Purpose:calculating salary



int main ()
{
    int dep,i;
    float nHours,grossPay=0,st,ft,it,hourlyrate =16.78 , netPay,overhours;
    while (true){
        cout<<"if u wanna use the program press 1\nif u wanna exit press any key\n";
        cin>>i;
    if (i==1){
    cout << "rate of $16.78 per hour for the first 40 hours worked in a week" <<endl;
    cout << "Please enter number of hours: ";
    cin  >> nHours;
    cout << "Please enter number of dependents: " <<endl;
    cin  >>dep;
    if ( nHours <=40){
            grossPay = nHours * hourlyrate;
    }
    grossPay = nHours * hourlyrate;
    if (dep > 3){
            grossPay = grossPay -35;
            cout << "$35 is withheld to cover the extra cost of health insurance beyond what the employer pays"<< endl;

    }
    else if (nHours > 40)
    {
        while(nHours > 40){
        overhours = nHours - 40;
        nHours = nHours -overhours;
        }
        grossPay = nHours * hourlyrate + overhours * (hourlyrate * 1.5);
    }


        st = grossPay * 0.06;
        ft = grossPay * 0.14;
        it = grossPay * 0.05;
        netPay =  grossPay - (st+ft+it+10);
        cout << "Your Gross pay :" << grossPay <<endl;
        cout << "6% withheld for Social Security tax = " << st <<endl;
        cout << "14% is withheld for federal income tax = "<< ft <<endl;
        cout << "5% is withheld for state income tax = "<< it <<endl;
        cout << "$10 per week is withheld for union dues"<<endl;
        cout << "the net take-home pay for the week = "<< netPay <<endl;
    }
    else break;
    }

  return 0;
}
