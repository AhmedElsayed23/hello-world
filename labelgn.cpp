#include "labelgn.h"
#include <iostream>
#include <cstring>
using namespace std;


labelgn::labelgn(char n[],int a) // Parameterize constructor to set values.
{
    strcpy(name,n);
    num = a;
}
int labelgn::nextLabel() // Function to next label sequence.
{
    cout << name ;
    return num++;
}
