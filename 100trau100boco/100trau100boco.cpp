// 100trau100boco.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

//Trâu đứng ăn năm
//Trâu nằm ăn ba
//Trâu già 3 con 1 bó 

int main()
{
    for (int trDung = 1; trDung < 20; trDung++) {
        for (int trNam = 1; trNam < 34; trNam++) {
            int trGia = 100 - (trDung + trNam);
            if (((5 * trDung) + (3 * trNam) + (trGia / 3) == 100) && ((trGia % 3)) == 0) {
                printf("Trau Dung = %d, Trau Nam = %d, Trau Gia = %d\n", trDung, trNam, trGia);
            }
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
