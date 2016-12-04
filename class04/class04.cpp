#include <iostream>

//recursive functions
// function(n) -> function(n-1) -> dunction(n-2) -> -> initial value
// each recursive function has an recursuve formula and ??
// for example factorial, fact(n) = n! = n * n-1 * n-2 = n * fsct(n-1)
// two errors, 1. program never ends, 2. 
// one of the common errors in recursive programming is stack overflow
// template:
// returnVAlue funcName()
//  if (n==0)
//      return
//  func(n)
//      
// f(n) = f(n-1) + k -> one initial value
// f(n) = f(n-1) + f(n-2) -> two initial value
// f(n) = f(n-1) + f(n-2) + f(n-3) -> three initial value
int factorial(int inVAl);
int fibonacci(int inVal);

int main()
{
    int inVal;
    std::cout << "Enter a number for the factorial function" << std::endl;
    std::cin >> inVal;
    std::cout << "Factorial of " << inVal << " is " << factorial(inVal) << std::endl;

    std::cout << "Enter a number for the fibonacci function" << std::endl;
    std::cin >> inVal;
    std::cout << inVal << "th Fibonacci numbrt is " << fibonacci(inVal) << std::endl;
    // we have n stairs, f(n) = number of different states for reaching from stair 1 to star n
    // comes down to fibonacci numbers
    // at the beginning, 2 possible moves. climb one step=> n-1 steps , climb 2, n-2 steps ---> f(n) = F(n-2) + F(n-1)
}

int factorial(int inVal)
{
    if (inVal == 0)
        return 1;
    return (inVal * factorial(inVal-1));
}

int fibonacci(int inVal)
{
    if (inVal == 1 || inVal == 2)
        return 1;
    return (fibonacci(inVal-1) + fibonacci(inVal-2));
}
