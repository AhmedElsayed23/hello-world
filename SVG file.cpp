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

    unsigned value1  = 0;
    unsigned value2  = 0;
    unsigned value3  = 0;
    unsigned value4  = 0;
    unsigned maxV = 0;

    cout << "Please enter the values:\n";

    cin  >> value1 >> value2 >> value3 >> value4;

    if (value1 > value2 && value1 > value3 && value1 > value4)
        maxV = value1;
    else if (value2 > value1 && value2 > value3 && value2 > value4)
        maxV = value2;
    else if (value3 > value1 && value3 > value2 && value3 > value4)
        maxV = value3;
    else
        maxV = value4;

    //the values so they are always drawn with a maximum height of 400 pixels.

    value1 = value1 * (400/maxV);
    value2 = value2 * (400/maxV);
    value3 = value3 * (400/maxV);
    value4 = value4 * (400/maxV);


    /*SVG file that draws two rectangles and a
    line. To view it, save it to a text file with the “.svg” extension*/


    svg << "<?xml version=\"1.0\" standalone=\"no\"?>" << endl;
    svg << "<!DOCTYPE svg PUBLIC\"-//W3C//DTD SVG 1.1//EN\"" <<endl;
    svg << "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">" <<endl;
    svg << "<svg width=\"500\" height=\"500\"" << endl;
    svg << "xmlns=\http://www.w3.org/2000/svg\">" << endl;

    // Create bars

    svg << "<rect x=\"" << 25  << "\" y=\"" << 300 << "\" width=\"" << 50 << "\" height=\"" << value1 << "\" style=\"fill:black;\"/>" << endl;
    svg << "<rect x=\"" << 125 << "\" y=\"" << 300 << "\" width=\"" << 50 << "\" height=\"" << value2 << "\" style=\"fill:black;\"/>" << endl;
    svg << "<rect x=\"" << 225 << "\" y=\"" << 300 << "\" width=\"" << 50 << "\" height=\"" << value3 << "\" style=\"fill:black;\"/>" << endl;
    svg << "<rect x=\"" << 325 << "\" y=\"" << 300 << "\" width=\"" << 50 << "\" height=\"" << value4 << "\" style=\"fill:black;\"/>" << endl;

    // Create the lines

    svg << "<line x1=\"" << 0 << "\" y1=\"" << 300 << "\" x2=\"" <<  0  << "\" y2=\"" << (300+400) << "\" style=\"stroke:black;stroke-width:2\"/>" << endl;
    svg << "<line x1=\"" << 0 << "\" y1=\"" << 300 << "\" x2=\"" << 400 << "\" y2=\"" <<    300    << "\" style=\"stroke:black;stroke-width:2\"/>" << endl;

    svg << "</svg>" << endl;

    svg.close(); //close the file.


    return 0;
}
