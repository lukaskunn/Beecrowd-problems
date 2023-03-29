//
// Created by work on 3/28/2023.
//
#include "../include/Problem_2189.h"
#include <iostream>

using namespace std;

Problem_2189::Problem_2189() {}
void Problem_2189::resolve()
{
    int n, m, winner, caseCount = 1;

    cin >> n;

    while (n > 0) {
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (m == i + 1) {
                winner = m;
            }
        }

        cout << "Teste " << caseCount << "\n";
        cout << winner << "\n\n";

        caseCount++;
        cin >> n;
    }
}

#include "../include/Problem_2189.h"
