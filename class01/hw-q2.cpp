#include <iostream>

int findMissingInt(int* inArray, int size);
int main()
{
    int myArray[5] = {1, 5, 4, 2, 6};
    int size = 5;
    int missingNum = findMissingInt(myArray, size);
    std::cout << "Missing number is : " << missingNum << "\n";
}

int findMissingInt(int* inArray, int size)
{
    int arraySum = 0;
    for (int i=0; i<size; i++)
    {
        arraySum += inArray[i];
    }
    int sumOfInts = (size+1) * (size+2) / 2;

    return (sumOfInts - arraySum);
}
