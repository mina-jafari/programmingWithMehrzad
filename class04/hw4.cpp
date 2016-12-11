#include <iostream>

int hanoiTower(int numOfDisks);

int main()
{
    int numOfDisks = 4;
    std::cout << "Number of disks is " << numOfDisks << " and number of moves is " 
              << hanoiTower(numOfDisks) << std::endl;
}

int hanoiTower(int numOfDisks)
{
    if (numOfDisks == 1)
        return 1;
    return (2 * hanoiTower(numOfDisks-1) + 1);
}
