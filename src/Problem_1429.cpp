//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1429.h"
#include <iostream>

using namespace std;

Problem_1429::Problem_1429() {}
void Problem_1429::resolve()
{
    int count;
    string caseTest;
    int arrayPlusCount[10] = { 1, 2, 6, 24, 120 };

    cin >> caseTest;

    while (caseTest != "0") {
        count = 0;

        for (int i = 0; i < caseTest.size(); i++) {
            count += arrayPlusCount[i] * ((int)caseTest[caseTest.size() -i - 1] - 48);
        }

        cout << count << "\n";
        cin >> caseTest;
    }
}

#include "../include/Problem_1429.h"
