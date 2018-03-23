#include <iostream>
#include <string>
using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Caesar Cipher.cpp
// Last Modification Date: 22/02/2018
// Author1 and ID and Group: Ahmed Elsayed 20170011 G1
// Purpose:cipher and decipher words
int main()
{

    while (true){
    string mess;
    int shift,i;
    cout << "Ahlan ya user ua habibi.\nWhat do you like to do today?\n1- Cipher a message\n2- Decipher a message\n3- End"<<endl;
    cin >> i;
    cin.ignore();
    if(i == 1)
    {
        cout << "Please enter the message to cipher: ";
        getline(cin,mess);
        cout << "Shift:";
        cin >> shift;
        shift = 26 - shift;
        for(int i = 0; i<mess[i]; i++)
        {
            //if(mess[i] >= 97 && mess[i] <= 122)
            //{
                mess[i] = mess[i] + shift;
               /* if (mess[i]>122)
                {
                    mess[i]=mess[i]-122+97-1;
                }*/
            //}
            //else if(mess[i] >= 65 && mess[i] <= 90)
            //{
                //mess[i] = mess[i]+ shift;
               /* if (mess[i]>90)
                {
                    mess[i]=mess[i]-90+65-1;
                }*/
            //}
        }
        cout<<"cipher : "<<mess<<endl;
    }
    else if (i==2)
    {
        cout << "Please enter the message to Decipher: ";
        getline(cin,mess);
        cout << "Shift:";
        cin >> shift;
        shift = 26 - shift;
        for(int i = 0; i<mess[i]; i++)
        {
            if(mess[i] >= 97 && mess[i] <= 122)
            {
                mess[i] = mess[i]-shift;
                if (mess[i]<97)
                {
                    mess[i]=mess[i]+122-97+1;
                }
            }
            else if(mess[i] >= 65 && mess[i] <= 90)
            {
                mess[i] = mess[i]- shift;
                if (mess[i]<65)
                    mess[i]=mess[i]+90-65+1;
            }
        }
        cout<<"Decipher : "<<mess<<endl;
    }
    else
        break;
    }
        return 0;
    }




