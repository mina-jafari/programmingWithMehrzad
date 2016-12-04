#include <iostream>

//insertion sort == selection sort
//dynamic allocation
//int* array = new int[10];
//allocates enough space for 10 integers and return the pointer to the first element
//deallocate to avoid memory leak
//delete[] array;

//remove duplicates from an array

int main()
{
    int* array = new int[10];
    for (int i=0; i<10; i++)
    {
        array[i] = i;
    }
    array[5] = 5;
    array[6] = 5;
    array[7] = 5;
    for (int i=0; i<10; i++)
    {
        std::cout << array[i] << "  ";
    }
    std::cout << std::endl;

    int* arrayOut = new int[10];
    //copy the first element, then compare each element of array with the last
    //element of arrayOut
    int j = 1;
    arrayOut[0] = array[0];
    for (int i=1; i<10; i++)
    {
        if (array[i] != arrayOut[j-1])
        {
            arrayOut[j] = array[i];
            j++;
        }
    }
    for (int i=0; i<j; i++)
    {
        std::cout << arrayOut[i] << "  ";
    }
    std::cout << std::endl;


    delete [] array, arrayOut;
    return 0;
}
