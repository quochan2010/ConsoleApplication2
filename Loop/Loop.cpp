// Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++) {
        printf("Hello World\n");
    }
    printf("Done\n");

    int n;
    int sum = 0;
    printf("Input n: ");
    scanf_s("%d", &n);
    for (int j = 1; j <= n; j++) {
        sum += j;
    }
    printf("Sum: %d\n", sum);
    //Tinh n!

    int n1; 
    printf("Input n: ");
    scanf_s("%d", &n);
    //Về hàng
    for (int i = 0; i < n; i++) {
        //Vẽ * 
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        //Xuống hàng / Vẽ hàng mới
        printf("\n");
    }

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
