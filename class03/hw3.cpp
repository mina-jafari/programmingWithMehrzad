#include <iostream>

void combine(int* arrayA, int sizeA, int* arrayB, int sizeB);
void findIndices(int* arrayIn, int size, int sum);

int main()
{
    int arrayB[5] = {0, 3, 5, 7, 9};
    int arrayA[6] = {1, 3, 4, 5, 10, 12};

    combine(arrayA, sizeof(arrayA)/sizeof(arrayA[0]), arrayB, sizeof(arrayB)/sizeof(arrayB[0]));

    int arrayIn[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    findIndices(arrayIn, 10, 5);

    return 0;
}

void combine(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
    int arrayOut[sizeA+sizeB] = {};
    int size = sizeA + sizeB;
    int i = 0;
    int j = 0;
    int k = 0;

    while (j < size)
    {
        if (i < sizeA && k < sizeB && arrayA[i] <= arrayB[k])
        {
            arrayOut[j] = arrayA[i];
            j++;
            i++;
        }
        else if (i < sizeA && k < sizeB && arrayA[i] >= arrayB[k])
        {
            arrayOut[j] = arrayB[k];
            j++;
            k++;
        }
        else if (i < sizeA)
        {
            arrayOut[j] = arrayA[i];
            j++;
            i++;
        }
        else if (k < sizeB)
        {
            arrayOut[j] = arrayB[k];
            j++;
            k++;
        }
    }

    std::cout << "Array is: ";
    for (int i=0; i<sizeA+sizeB; i++)
    {
        std::cout << arrayOut[i] << " ";
    }
    std::cout << std::endl;
}

void findIndices(int* arrayIn, int size, int sum)
{
    // O(n^2)
    /*
    int j = 0;
    while (j < size)
    {
        int firstNumber = arrayIn[j];
        int secondNumber = sum - firstNumber;

        // can we do this search using binary search?
        for (int i=j+1; i<size; i++)
        {
            if (arrayIn[i] == secondNumber)
            {
                std::cout << "The 1st number is " << firstNumber << " and its index is " << j << std::endl;
                std::cout << "The 2nd number is " << secondNumber << " and its index is " << i << std::endl;
                size = i+1;
            }
        }
        j++;
    }
    */
    // Write it in O(N)
    int i = 0;
    int j = size-1;
    while (i<j)
    {
        if (arrayIn[i]+arrayIn[j] > sum)
        {
            j--;
        }
        else if (arrayIn[i]+arrayIn[j] < sum)
        {
            i++;
        }
        else
        {
            std::cout << "The 1st number is " << arrayIn[i] << " and its index is " << i << std::endl;
            std::cout << "The 2nd number is " << arrayIn[j] << " and its index is " << j << std::endl;
            i++;
            j--;
        }
    }
}
