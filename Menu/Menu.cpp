// Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

int main()
{
    int n = 0;
    int choose = 0;
    while (1) {
        printf("1. Input n\n");
        printf("2. Output n\n");
        printf("3. Quit n\n");
        printf("Choose: ");
        scanf_s("%d", &choose);
        switch (choose) {
        case 1:
            printf("n: ");
            scanf_s("%d", &n);
            break;
        case 2:
            if (n == 0) {
                printf("Input n first\n");
            } else {
            printf("n: %d\n", n);
            }
            break;
        case 3:
            //return 1;
            exit(0);
        default: 
            break;
        }
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
