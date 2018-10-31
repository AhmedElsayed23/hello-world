#include <iostream>
#include <cstring>
#include "labelgn.h"

using namespace std;

int main()
{
    labelgn figureNumbers("Figure ", 1);
    labelgn pointNumbers("P", 0);
    cout << "Figure numbers: ";
    for (int i = 0; i < 19; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << figureNumbers.nextLabel();
    }
    cout << endl << "Point numbers: ";
    for (int i = 0; i < 5; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << pointNumbers.nextLabel();
    }
    cout << endl << "More figures: ";
    for (int i = 0; i < 3; i++)
    {
        if (i > 0)
            cout << ", ";
        cout << figureNumbers.nextLabel();
    }
    cout << endl;
    return 0;
}
