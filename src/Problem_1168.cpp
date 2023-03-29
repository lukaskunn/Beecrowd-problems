//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1168.h"
#include <iostream>

using namespace std;

Problem_1168::Problem_1168() {}
void Problem_1168::resolve()
{
    int n, ledCount;
    string caseTest;
    int arrayPlusCount[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> caseTest;
        ledCount = 0;

        for (int i = 0; i < caseTest.size(); i++) {
            int num = (int)caseTest[i];
            ledCount += arrayPlusCount[num - 48];
        }

        cout << ledCount << " leds\n";
    }
}

#include "../include/Problem_1168.h"
