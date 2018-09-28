/*
Name : Ahmed Elsayed Ali Elsayed
ID : 20170011
Group : 1
Maclaurin Expansions
*/

#include <iostream>


using namespace std;

#define pi 3.1415926535897

double toRadians(double angdeg);
double sinx ( double x );
double cosx ( double x );
double arctanx ( double x );
double ex ( double x);
double ln ( double x);

int main()
{
    long long a;
    double result;
    char choice;
    while (1)
    {
        cout << "****** Maclaurin Expansions ******\n";
        cout << "                                               \n";
        cout << "Please choose a number from the following :\n";
        cout << "1-sin(x) \n2-cos(x) \n3-arctan(x) \n4-ex\n5-ln(x+1) \n0-exit \n";
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == '0') break;
        cout<<"enter the the value for x : ";
        cin>>a;
        if(choice=='1')
        {
            result=sinx(a);
            cout<<"result= "<<result<<endl;
        }
        else if(choice=='2')
        {
            result=cosx(a);
            cout<<"result= "<<result<<endl;
        }
        else if (choice=='3')
        {
            result=arctanx(a);
            cout<<"result= "<<result<<endl;
        }

        else if (choice== '4')
        {
            result=ex(a);
            cout<<"result= "<<result<<endl;
        }
        else if (choice== '5')
        {
            result=ln(a);
            cout<<"result= "<<result<<endl;
        }
        cout <<endl;
    }
}


double toRadians(double angdeg)
{
    return angdeg / 180.0 * pi;
}

double sinx(double x)
{
    int n;
    double sum=0,t=0;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout << "1 ";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "- (";
        else cout << "+ (";
        double q = 0;
        for (int j = 0; j < i; j++)
            q += 2;
        cout << "x^" << ++q << ")";
        cout << "/" << q << "! ";
    }
    cout<<endl<<endl;
    x=toRadians(x);
    t=x;
    sum=x;
    for(int i=1; i<=n; i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum+=t;
    }
    return sum;
}

double cosx ( double x )
{
    int n;
    double sum=1,t=1;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout << "1 ";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "- (";
        else cout << "+ (";
        double x = 0;
        for (int j = 0; j < i; j++)
            x += 2;
        cout << "x^" << x << ")";
        cout << "/" << x << "! ";
    }
    cout<<endl<<endl;
    x=toRadians(x);
    for(int i=1; i<n ; i++)
    {
        t=(t*x*x*-1)/(i*(i+1));
        sum+=t;
    }
    return sum;
}


double arctanx ( double x )
{
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout << "x ";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "- (";
        else cout << "+ (";
        double a = 1;
        for (int j = 0; j < i; j++)
            a += 2;
        cout << "x^" << a << ")";
        cout << "/" << a << " ";
    }
    cout<<endl<<endl;

    x=toRadians(x);
    double y=x,f=1,sum=0;
    for (int i=0; i<n; i++)
    {
        y*=-x*x;
        f+=2;
        sum+=y/f;
    }
    return (x+sum);
}

double ex( double x)
{
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout << "1 + x ";
    for (int i = 2; i < n+1; i++)
    {
        cout << "+ (";
        double w = 0;
        for (int j = 0; j < i; j++)
            w += 1;
        cout << "x^" << w << ")";
        cout << "/" << w << "! ";
    }
    cout<<endl<<endl;
    double sum=0,P=1,F=1;
    for(int i=0; i<n; i++)
    {
        P*=x;
        F*=(i+1);
        sum+=(P/F);
    }
    return (1+sum);

}

double ln( double x)
{
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout << "x ";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "- (";
        else cout << "+ (";
        double e = 1;
        for (int j = 0; j < i; j++)
            e += 1;
        cout << "x^" << e << ")";
        cout << "/" << e << " ";
    }
    cout<<endl<<endl;
    x=toRadians(x);
    double y=(x),base=1,sum=0;
    for (int i=2; i<n; i++)
    {
        y*=-x;
        base*=i;
        sum+=(y/base);
    }
    return (x+sum);
}




