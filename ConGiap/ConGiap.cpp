// ConGiap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <time.h>

int main()
{
    int yob;
    printf("Input yob: ");
    scanf_s("%d", &yob);
    int age = 2022 - yob + 1;
    printf("Age: %d\n", age);
    int zodiac = age % 12;

    switch (zodiac) {
    case 0: 
        printf("Dan");
        break;
    case 1:
        printf("Mao");
        break;
    case 2:
        printf("Thin");
        break;
    case 3:
        printf("Ti");
        break;
    case 4:
        printf("Ngo");
        break;
    case 5:
        printf("Mui");
        break;
    case 6:
        printf("Than");
        break;
    case 7:
        printf("Dau");
        break;
    case 8:
        printf("Tuat");
        break;
    case 9:
        printf("Hoi");
        break;
    case 10:
        printf("Ti");
        break;
    case 11:
        printf("Suu");
        break;
    }
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
