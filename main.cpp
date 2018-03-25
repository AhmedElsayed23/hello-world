#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        cout<<"________________________________________________"<<endl;
        cout<<endl<<"ahlan ya user ya habibi ...\n\n";
        string mode, plain, cipher, tmp;
        int i , j , k , l , key , jump1 , jump2 ;
        cout<<"What do you like to do today?\n  1- Cipher a message\n  2- Decipher a message\n  3- End\n";
        cin>>mode;
        while ( mode!="1" && mode!="2" && mode!="3" )
        {
            cout<<"only choose 1, 2 or 3\n";
            cin>>mode;
        }
        if (mode=="1")   //Encryption method **
        {
            cout<<"enter text to encrypt : \n   ";
            cin.get() ;
            getline(cin,plain) ;
            plain.erase(remove_if(plain.begin(), plain.end(), ::isspace), plain.end());
            for ( i=0 ; i<plain.length() ; i++ )
            {
                if (plain[i]>='A' && plain[i]<='Z' )
                {
                    plain[i]=plain[i]+32;
                }
            } //end if , for
            cout<<"enter the key : ";
            while ( 1 )
            {
                cin>>key;
                if ( cin.fail() )
                {
                    cout << "invaled key..\nThe pragram stopped";
                    return 0;
                }
                if ( key<=1 )
                {
                    cout << "invalid key , enter another one : ";
                    continue;
                }
                else
                    break;
            }
            tmp=plain;
            jump1=2*key-2;
            jump2=0;
            l=0;
            for ( i=0 ; i<key ; i++)
            {
                if (i==0 || i==(key-1) )
                {
                    j=i;
                    while ( j<plain.length() )
                    {
                        tmp[l]=plain[j] ;
                        j+=2*key-2;
                        l+=1;
                    }
                }
                else if ( i>0 & i<key-1 )
                {
                    jump1-=2;
                    jump2+=2;
                    k=0;
                    j=i;
                    while ( j<plain.length() )
                    {
                        if ( k%2==0 )
                        {
                            tmp[l]=plain[j] ;
                            j+=jump1;
                        }
                        if ( k%2==1 )
                        {
                            tmp[l]=plain[j] ;
                            j+=jump2;
                        }
                        k+=1;
                        l+=1;
                    }
                }
            } //end while , elif , for
            cout<<endl<<"The encrypted text is : << "<<tmp<<" >>"<<endl;
        } //end mode 1
        else if (mode=="2")   //Decryption method **
        {
            cout<<"enter text to decrypt : \n   ";
            cin.get() ;
            getline(cin,cipher) ;
            cipher.erase(remove_if(cipher.begin(), cipher.end(), ::isspace), cipher.end());
            for ( i=0 ; i<cipher.length() ; i++ )
            {
                if (cipher[i]>='A' && cipher[i]<='Z' )
                {
                    cipher[i]=cipher[i]+32;
                }
            } //end if , for
            cout<<"enter the key : ";
            while ( 1 )
            {
                cin>>key;
                if ( cin.fail() )
                {
                    cout << "invaled key..\nThe pragram stopped";
                    return 0;
                }
                if ( key<=1 )
                {
                    cout << "invalid key , enter another one : ";
                    continue;
                }
                else
                    break;
            }
            tmp=cipher;
            jump1=2*key-2;
            jump2=0;
            l=0;
            for ( i=0 ; i<key ; i++)
            {
                if (i==0 || i==(key-1) )
                {
                    j=i;
                    while ( j<cipher.length() )
                    {
                        tmp[j]=cipher[l];
                        j+=2*key-2;
                        l+=1;
                    }
                }
                else if ( i>0 & i<key-1 )
                {
                    jump1-=2;
                    jump2+=2;
                    k=0;
                    j=i;
                    while ( j<cipher.length() )
                    {
                        if ( k%2==0 )
                        {
                            tmp[j]=cipher[l] ;
                            j+=jump1;
                        }
                        if ( k%2==1 )
                        {
                            tmp[j]=cipher[l] ;
                            j+=jump2;
                        }
                        k+=1;
                        l+=1;
                    }
                }
            } //end while , elif , for
            cout<<endl<<"The decrypted text is : << "<<tmp<<" >>"<<endl;
        }
        else if (mode=="3")
        {
            cout<<"see you...";
            return 0;
        } //end mode 2
    } //end while
}

