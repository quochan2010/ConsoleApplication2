// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>


int main()
{
    int n;
    printf("Input a number: ");
    scanf_s("%d", &n);
    int result = n % 2;
    if (result == 0) {
        printf("\n%d is an even number\n", n);
    }
    else {
        printf("%d is an odd number\n", n);
    }
    printf("Finished");
    result == 0 ? printf("%d is Even\n", n) : printf("%d is Odd\n", n);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
