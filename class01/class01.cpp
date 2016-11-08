#include <iostream>

int main()
{
    //getting started
    std::cout << "Hello world!" << std::endl;

    //defining a variable
    int a = 2;
    std::cout << "a is " << a << std::endl;

    //working with arrays
    int array[10] = {0, 1, 2, 3, 1, 5, 6, 7, 8, 9};
    //int array[10] = {-14, -2, -3, -1, -5, -6, -7, -8, -9, -10};
    std::cout << "8th element is " << array[8] << std::endl;
    for (int i=0; i<10; i++)
    {
        std::cout << array[i] << std::endl;
    }

    //find the sum of array elements
    int sum = 0;
    for (int i=0; i<10; i++)
    {
        sum += array[i];
    }
    std::cout << "Sum equals " << sum << std::endl;

    //find the maximum element of an array
    int maximum = array[0];
    for (int i=0; i<10; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    std::cout << "Maximum equals " << maximum << std::endl;

    //find the local minimum of an array
    if (array[0] < array[1])
    {
        std::cout << "Local minimum value is  " << array[0] << " and array index is " 
                  << 0 << std::endl;
    }
    else if (array[9] < array[8])
    {
        std::cout << "Local minimum value is  " << array[9] << " and array index is " 
                  << 9 << std::endl;
    }
    for (int i=1; i<9; i++)
    {
        if (array[i] < array[i-1] && array[i] < array[i+1])
        {
        std::cout << "Local minimum value is  " << array[i] << " and array index is " 
                  << i << std::endl;
        }
    }

    return 0;
}
