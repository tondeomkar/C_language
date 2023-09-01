#include<stdio.h>

int main()
{
    // All the belwo memory allocations are static memory allocations

    // First way to intialise the array
    int Arr[4] = {10,20,30,40};     // Member initialisation list

    //Second way to initialise the array
    int Brr[] = {10,20,30,40}; // Member initialisation list

    // Third way to initialise the array
    int Crr[4];
    // Member by meber initialisation
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    return 0;
}