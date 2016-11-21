#include <iostream>

void bubbleSort(int* inArray, int size);

int main()
{
    int array[7] = {5, 2, 1, 3, 3, 8, 7};
    int size = 7;
    bubbleSort(array, size);
    std::cout << "Sorted array: ";
    for (int i=0; i<size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

}

void bubbleSort(int* inArray, int size)
{
    int temp_1, temp_2 = 0;
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (inArray[j] > inArray[j+1])
            {
                temp_1 = inArray[j];
                temp_2 = inArray[j+1];
                inArray[j] = temp_2;;
                inArray[j+1] = temp_1;
            }
        }
    }
}
