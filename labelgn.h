#ifndef LABELGN_H
#define LABELGN_H


class labelgn
{
public:
    labelgn(); //Empty constructor
    labelgn(char n[],int a);// Parameterize constructor to set values.
    int nextLabel(); // Function to next label sequence.
private:
    char name[10];
    int num;

};
#endif // LABELGN_H
