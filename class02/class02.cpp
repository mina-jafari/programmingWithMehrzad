#include <iostream>

void insertionSort(int* inArray, int size);
int main()
{
    // Prefix-sum or scan
    // Calculate the prefix-sum of this array
    int array[6] = {1, 2, 3, 4, 5, 8};
    int arrayOut[6] = {};
    int size = 6;
    int sum = 0;

    for (int i=0; i<size; i++)
    {
        arrayOut[i] = sum + array[i];
        sum = arrayOut[i];
    }

    std::cout << "prefix-sum is: " << std::endl;;
    for (int i=0; i<size; i++)
    {
        std::cout << arrayOut[i] << "  ";
    }
    std::cout << std::endl;
    // Three people trying to park arbitrary number of cars. One way is to to it in 
    // turns. If we know the length of cars, we can do it simultaneously. This is an 
    // example of prefix sum. This could be used in parallelization.


    // Introduction to sort
    int array_2[6] = {1, 2, 0, 4, 5, 1};
    int size_2 = 6;
    // find the minimum of the above array and place it in index zero. Swap element in index zero with the minimum element
    int minimum = array_2[0];
    int index = 0;
    for (int i=0; i<size_2; i++)
    {
        if (array_2[i] < minimum)
        {
            minimum = array_2[i];
            index = i;
        }
    }
    int temp = array_2[0];
    array_2[0] = minimum;
    array_2[index] = temp;

    std::cout << "new array after one sort is: " << std::endl;;
    for (int i=0; i<size; i++)
    {
        std::cout << array_2[i] << "  ";
    }
    std::cout << std::endl;

    // Sort the whole array; Insertion sort
    /*int index_2 = 0;
    for (int j=0; j<size_2-1; j++)
    {
        int minimum_2 = array_2[j];
        for (int i=j; i<size_2; i++)
        {
            if (array_2[i] < minimum_2)
            {
                minimum_2 = array_2[i];
                index_2 = i;
            }
        }
        int temp_2 = array_2[j];
        array_2[j] = minimum_2;
        array_2[index_2] = temp_2;
    }*/
    // write a function to do the above
    insertionSort(array_2, size_2);

    std::cout << "new array after insertion sort is: " << std::endl;;
    for (int i=0; i<size; i++)
    {
        std::cout << array_2[i] << "  ";
    }
    std::cout << std::endl;

    return 0;
}

// How to define a function
// Define a function named insertionSort, I didn't take notes bc I already knew
// how to define a function.
// Google it if you'd like! Stuff like function arguments, return values, ...
void insertionSort(int* inArray, int size) // int* inArray == int inArray[]
{
    int index = 0;
    for (int j=0; j<size-1; j++)
    {
        int minimum = inArray[j];
        for (int i=j; i<size; i++)
        {
            if (inArray[i] < minimum)
            {
                minimum = inArray[i];
                index = i;
            }
        }
        int temp = inArray[j];
        inArray[j] = minimum;
        inArray[index] = temp;
    }
}




