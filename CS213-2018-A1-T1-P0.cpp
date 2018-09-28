// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
    int** data;       // Pointer to 2-D array that will simulate matrix
    int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat);

// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2); // Add if same dimensions
matrix operator-  (matrix mat1, matrix mat2); // Sub if same dimensions
matrix operator*  (matrix mat1, matrix mat2); // Multi if col1 == row2
matrix operator+  (matrix mat1, int scalar);  // Add a scalar
matrix operator-  (matrix mat1, int scalar);  // Subtract a scalar
matrix operator*  (matrix mat1, int scalar);  // Multiple by scalar

// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
matrix operator+= (matrix& mat1, matrix mat2); // mat1 changes & return
// new matrix with the sum
matrix operator-= (matrix& mat1, matrix mat2); // mat1 changes + return new
// matrix with difference
matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix
void   operator++ (matrix& mat);   	// Add 1 to each element ++mat
void   operator-- (matrix& mat);    	// Sub 1 from each element --mat
istream& operator>> (istream& input, matrix& mat)
       	// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
        // and return istream to allow cascading input
{

    input>>mat.row>>mat.col;


    mat.data = new int* [mat.row];

    for (int i = 0; i < mat.row; i++)
        mat.data[i] = new int [mat.col];


    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            input>>mat.data[i][j];
        }
    }
    return input;
}
// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
// and return istream to allow cascading input

//Student #3 with the biggest ID (e.g., 20170089)
ostream& operator<< (ostream& output, matrix mat)
       	// Print matrix  as follows (2 x 3)			4	 6 	  8
        // and return ostream to cascade printing	9	12  	123
{

    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            output<<mat.data[i][j]<<"   ";
        }
        cout<<endl;
    }
    return output;
}
// Print matrix  as follows (2 x 3)			4	 6 	  8
// and return ostream to cascade printing	9	12  	123
bool   operator== (matrix mat1, matrix mat2);	// True if identical
bool   operator!= (matrix mat1, matrix mat2); 	// True if not same
bool   isSquare   (matrix mat);  // True if square matrix
bool   isSymetric (matrix mat);  // True if square and symmetric
bool   isIdentity (matrix mat);  // True if square and identity
matrix transpose(matrix mat);    // Return new matrix with the transpose

//__________________________________________

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};

    matrix mat1, mat2, mat3;
    createMatrix (4, 2, data1, mat1);
    createMatrix (2, 3, data2, mat2);
    createMatrix (4, 2, data3, mat3);

// The next code will not work until you write the functions
    cout << mat1 << endl;
    cout << mat2 << endl;
    cout << mat3 << endl;

    cout << (mat1 + mat3) << endl << endl;
    cout << (mat3 + mat3) << endl << endl;


    ++mat1;
    cout << mat1 << endl;

    mat1+= mat3 += mat3;
    cout << mat1 << endl;
    cout << mat2 << endl;
    cout << mat3 << endl;
    // Add more examples of using matrix
    // .......

    return 0;
}

//__________________________________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat.data[i] = new int [col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            mat.data[i][j] = num[i * col + j];
}

/*
Student #1
Name: Ibrahim Ramadan Abdou
ID: 20170002
G1
Date: 17/9/2018
*/

//-----------------------------
// Add 2 matrices if they have the same dimensions and return in new matrix
matrix operator+  (matrix mat1, matrix mat2)
{
    matrix mat;


    if (mat1.row==mat2.row&&mat1.col==mat2.col)
    {
        mat.row=mat1.row;
        mat.col=mat1.col;

        mat.data = new int* [mat.row];
        for (int i = 0; i < mat.row; i++)
            mat.data[i] = new int [mat.col];



        for (int i = 0; i < mat.row; i++)
        {

            for (int j = 0; j < mat.col; j++)
            {

                mat.data[i][j]=mat1.data[i][j]+mat2.data[i][j];
            }
        }
        return mat;
    }
    else
    {

        cout<<"operation failed! \n";
    }


}


//------------------------------------------------
// Add 2 matrices if they have the same dimensions and return in new matrix


matrix operator-  (matrix mat1, matrix mat2)
{

    matrix mat;


    if (mat1.row==mat2.row&&mat1.col==mat2.col)
    {
        mat.row=mat1.row;
        mat.col=mat1.col;

        mat.data = new int* [mat.row];

        for (int i = 0; i < mat.row; i++)
            mat.data[i] = new int [mat.col];


        for (int i = 0; i < mat.row; i++)
        {

            for (int j = 0; j < mat.col; j++)
            {

                mat.data[i][j]=mat1.data[i][j]- mat2.data[i][j];
            }
        }
        return mat;
    }
    else
    {

        cout<<"operation failed! \n";
    }


}
//--------------------------------------------------------------------
// Multiply 2 matrices if col1 == row2 and return in a new matrix

matrix operator*  (matrix mat1, matrix mat2)
{
    matrix mat;

    if (mat1.col==mat2.row)
    {
        mat.row=mat1.row;
        mat.col=mat2.col;

        mat.data = new int* [mat.row];
        for (int i = 0; i < mat1.row; i++)
            mat.data[i] = new int [mat.col];

        for (int i=0; i<mat.row; i++)
        {
            for (int j=0; j<mat.col; j++)
            {
                mat.data[i][j]=0;
            }
        }


        for (int co=0; co<mat.row; co++)
        {
            for (int co1=0; co1<mat.col; co1++)
            {
                for (int co2=0; co2<mat1.col; co2++)
                {
                    mat.data[co][co1]+=mat1.data[co][co2]*mat2.data[co2][co1];
                }
            }
        }
        return mat;


    }

    else
    {
        cout<<"Operation failed \n";
    }


}


//--------------------------------------------------------------
// Add a scalar to the matrix
matrix operator+  (matrix mat1, int scalar)
{
    matrix mat;
    mat.row=mat1.row;
    mat.col=mat1.col;

    mat.data = new int* [mat.row];

    for (int i = 0; i < mat.row; i++)
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]+scalar;
        }
    }

    return mat;

}

//----------------------------------------------------------------
// Subtract a scalar from a matrix

matrix operator-  (matrix mat1, int scalar)
{
    matrix mat;
    mat.row=mat1.row;
    mat.col=mat1.col;

    mat.data = new int* [mat.row];

    for (int i = 0; i < mat.row; i++)
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]-scalar;
        }
    }

    return mat;

}

//----------------------------------------------------
// Multiple by scalar
matrix operator*  (matrix mat1, int scalar)
{
    matrix mat;
    mat.row=mat1.row;
    mat.col=mat1.col;

    mat.data = new int* [mat.row];

    for (int i = 0; i < mat.row; i++)
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]*scalar;
        }
    }

    return mat;

}


/*
student #2
Name: Athar Atef Hussein
ID: 20170005
G1
*/

void   operator++ (matrix& mat)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            ++mat.data[i][j];
        }
    }

}
void   operator-- (matrix& mat)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            --mat.data[i][j];
        }
    }
}
matrix operator+= (matrix& mat1, matrix mat2)
{
    if(mat1.row!=mat2.row || mat1.col!=mat2.col)
    {
        cout<<"error"<<endl;
    }
    else
    {
        for(int i=0; i<mat1.row; i++)
        {
            for(int j=0; j<mat1.col; j++)
            {
                mat1.data[i][j]+=mat2.data[i][j];
            }
        }
        return mat1;
    }

}

matrix operator-= (matrix& mat1, matrix mat2)
{
    if(mat1.row!=mat2.row || mat1.col!=mat2.col)
    {
        cout<<"error"<<endl;
    }
    else
    {
        for(int i=0; i<mat1.row; i++)
        {
            for(int j=0; j<mat1.col; j++)
            {
                mat1.data[i][j]-=mat2.data[i][j];

            }
        }
        return mat1;
    }

}
matrix operator+= (matrix& mat, int scalar)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            mat.data[i][j]+=scalar;
        }
    }
}
matrix operator-= (matrix& mat, int scalar)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            mat.data[i][j]-=scalar;
        }
    }
}

/*
student #3
Name:Ahmed Elsayed Ali
ID: 20170011
G1
*/
//________________________________________________________________________________________

// Take two matrices and check if identical or no.

bool operator== (matrix mat1, matrix mat2)
{
    for (int i = 0; i < mat1.col; i++)
        for (int j = 0; j < mat2.col; j++)
            if (mat1.data[i][j] != mat2.data[i][j])
                return 0;
    return 1;
}
//________________________________________________________________________________________

// Take two matrices and check if not identical or no.

bool operator!= (matrix mat1, matrix mat2)
{
    for (int i = 0; i < mat1.col; i++)
        for (int j = 0; j < mat2.col; j++)
            if (mat1.data[i][j] != mat2.data[i][j])
                return 1;
    return 0;
}
//_________________________________________________________________________________________

// Take matrix and check if is square or no.

bool isSquare (matrix mat)
{
    if (mat.row == mat.col)
        return 1;
    return 0;
}
//_________________________________________________________________________________________

// Take matrix and check if is Symetric & square or no.

bool isSymetric (matrix mat)
{
    if (mat.row == mat.col)
    {
        for (int i = 0; i < mat.row; i++)
            for (int j = 0; j < i; j++)
                if (mat.data[i][j] != mat.data[j][i])
                    return 0;
        return 1;
    }
    else
        return 0;
}
//___________________________________________________________________________________________

// Take matrix and check if is Identity & square or no.

bool isIdentity (matrix mat)
{
    int flag = 1;
    if (mat.row == mat.col)
    {
        for (int i = 0; i < mat.row; i++)
        {
            for (int j = 0; j < mat.col; j++)
            {
                if ( i == j && mat.data[i][j]!=1)
                {
                    flag = 0;
                    break;
                }
                if (i != j && mat.data[i][j]!=0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
//_____________________________________________________________________________________________

//Take matrix and return new matrix with the transpose

matrix transpose(matrix mat)
{
    for (int i = 0; i < mat.col; i++ )
    {
        for (int j = 0; j < mat.row; j++)
        {
            cout << " " << mat.data[j][i];
        }
        cout << endl;
    }

}
