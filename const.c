#include<stdio.h>

int main()
{
					// no1 is a variable of type integer
					// initialised with 10
    int no1 = 10;

					// no2 is a variable of type integer constant
					// inittialised with 10
    const int no2 = 10;

					// Arr is one dimentional array which contains
					// 4 elements each element is of type int
    int Arr[4] = {10,20,30,40};

					// Brr is one dirmetional array which contains
					// 4 element each element is of type integer constant
    const int Brr[4] = {10,20,30,40};


    no1++;

    // no2++;

    Arr[0] = 11;

    // Brr[0] = 11;

    return 0;
}









