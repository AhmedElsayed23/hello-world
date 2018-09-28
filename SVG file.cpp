// Author:  Ahmed Elsayed Ali
// Purpose: How to working with SVG file.
// Program: Creates the SVG file that displays a simple bar chart that depicts the integer values.
// Date:    28 september 2018


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create file.

    ofstream svg("Ahmed Elsayed Ali.svg");
    if (svg.fail())
        cout << "The file is not opened" << endl;

    int value1  = 0;
    int value2  = 0;
    int value3  = 0;
    int value4  = 0;
    int sum = 0;

    // Ignore the values grater than 400 or not nonnegative integer values.

    while (1)
    {
        cout << "Please enter values..\n";
        cin >> value1 >> value2 >> value3 >> value4;
        if (value1 > 400 || value2 > 400 || value3 > 400 || value4 > 400)
        {
            cout << "the values so they are always drawn with a maximum height of 400 pixels." << endl;
        }
        else if (value1 < 0 || value2 < 0 || value3 < 0 || value4 < 0)
        {
            cout << "not nonnegative integer values." << endl;
        }
        else
            break;
    }

    sum = value1 +value2 +value4;

    /*SVG file that draws two rectangles and a
    line. To view it, save it to a text file with the “.svg” extension*/


    svg << "<?xml version=\"1.0\" standalone=\"no\"?>"<< endl;
    svg << "<!DOCTYPE svg PUBLIC\"-//W3C//DTD SVG 1.1//EN\"" <<endl;
    svg << "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">" <<endl;
    svg << "<svg width=\"500\" height=\"500\"" << endl;
    svg << "xmlns=\http://www.w3.org/2000/svg\">" << endl;

    // Create bars

    svg << "<rect x=\"" << 25 <<"\" y=\""   << 300 << "\" width=\"" << 25 << "\" height=\"" << value1 << "\" style=\"fill:blue;\"/>" << endl;
    svg << "<rect x=\"" << 75 << "\" y=\""  << 300 << "\" width=\"" << 25 << "\" height=\"" << value2 << "\" style=\"fill:rgb(255,0,0);\"/>" << endl;
    svg << "<rect x=\"" << 125 <<"\" y=\""  << 300 << "\" width=\"" << 25 << "\" height=\"" << value3 << "\" style=\"fill:purple;\"/>" << endl;
    svg << "<rect x=\"" << 175 << "\" y=\"" << 300 << "\" width=\"" << 25 << "\" height=\"" << value4 << "\" style=\"fill:rgb(0,255,0);\"/>" << endl;

    // Create the lines

    svg << "<line x1=\"" << 0 << "\" y1=\"" << 300 << "\" x2=\"" << 0<< "\" y2=\"" << (300+sum) << "\" style=\"stroke:black;stroke-width:2\"/>" << endl;
    svg << "<line x1=\"" << 0 << "\" y1=\"" << 300 << "\" x2=\"" << 250 << "\" y2=\"" << 300  << "\" style=\"stroke:black;stroke-width:2\"/>" << endl;

    svg << "</svg>" << endl;

    svg.close(); //close the file.


    return 0;
}
