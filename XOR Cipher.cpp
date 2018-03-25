#include <iostream>
#include <string>
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: xor cipher.cpp
// Last Modification Date: 3/1/2018
// Author1 and ID and Group: Ahmed Elsayed G1 20170011
// Purpose: cipher and decipher text

using namespace std;

int main()
{
    while(true){
    string mess;
    int i;
    char key;
    cout <<"\nAhlan ya user ya habibi.\nWhat do you like to do today?\n1- Cipher a message\n2- Decipher a message\n3- End "<<endl;
    cin >> i;
    cin.ignore();
    if (i == 1)
    {
        cout << "Please enter the message to cipher: " ;
        getline(cin,mess);
        cout << "Enter Key: " ;
        cin >> key;
        for (int i = 0 ; i<mess.length() ; i++)
        {
            mess[i] = mess[i] ^ key;
        }
        cout << "cipher: "<< mess <<endl;
        cout << hex ;
        cout <<"hexa :";
        for (int i = 0 ; i < mess.length() ;++i)
        {
            cout  <<hex << (int)mess[i];
        }



    }
    else if (i == 2)
    {
        cout << "Please enter the message to Decipher: " ;
        getline(cin,mess);
        cout << "Enter Key: " ;
        cin >> key;
        for (int i = 0 ; i<mess.length() ; i++)
        {
            mess[i] = mess[i] ^ key;
        }
        cout << "cipher: "<< mess <<endl;
        cout << hex;
        cout <<"hexa :";
        for (int i = 0 ; i < mess.length() ;++i)
        {
            cout  <<hex << (int)mess[i];
        }
    }
    else
        break;
    }

    return 0;
}
