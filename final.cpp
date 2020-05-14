#include <iostream>

using namespace std;

float * sortZero(float *arrayPtr, int size);

int main()
{
    const int SIZE = 10;
    float testArray[SIZE] = {0.1, -0.1, 0, 5.3, -8, 456987, -456789, 0, 0, 12.5};
    float *arrayPtr = testArray;

    sortZero(arrayPtr, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        cout << *(arrayPtr + i) << ",";
        if (i == (SIZE- 1))
        {
            cout << endl;
        }
    }

    return 0;
}


//*************************************************************//
// Pass in a pointer to an array of floats                     //
// Should sort the values in the array that it points to       //
// to make all of the zeros get pushed to the end of the array //
//*************************************************************//
float * sortZero(float *arrayPtr, int size)
{
    int count = 0; // control the iterations through the array
    while(count < size)
    {
        if (arrayPtr[count] == 0) // Find the next zero in the array, stepping right through the array
        {
            for(int i = count; i < size; i++)
            {
                //Switch the next non-zero value found with the zero
                if (arrayPtr[i] != 0) // Find the next value in the array (starting from the current place) that is not a zero
                {
                    arrayPtr[count] = arrayPtr[i]; // make the current place the value as the next non-zero value found
                    arrayPtr[i] = 0; // Make the location of the non-zero value zero
                    break;
                }
            }
        }

        count++;
    }

    return arrayPtr;
}
