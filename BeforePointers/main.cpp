#include <iostream>

using namespace std;

void sortZero(int array[], int size);

int main()
{
    const int SIZE = 21;
    int testArray[SIZE] = {1,2,5,4,-3,100,-49 ,0, 1, 3, 4, 5, 6, 3, -3, -1, 0, 28097, 1234, 0, -6543};

    sortZero(testArray, SIZE);
    //int *ptrArray = testArray;
    /*
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(sortZero(testArray, SIZE) + i) << "\n";
    }
*/
    return 0;
}


//**********************************************//
//  This needs to have a pointer passed into    //
//  the function and then return that ponter    //
//  That will allow for the original values     //
//  from Main to be changed. Conserving mem     //
//**********************************************//
void sortZero(int array[], int size)
{
    int count = 0; // control the iterations through the array
    while(count < size)
    {
        if (array[count] == 0)
        {
            for(int i = count; i < size; i++)
            {
                if (array[i] != 0)
                {
                    array[count] = array[i];
                    array[i] = 0;
                    break;
                }
                for(int i = 0; i < size; i++)
                {
                    cout << array[i] << ",";
                }
                cout << endl;
            }
        }
        count++;
    }

    for(int i = 0; i < (size); i++)
    {
        cout << array[i] << endl;
    }
}
