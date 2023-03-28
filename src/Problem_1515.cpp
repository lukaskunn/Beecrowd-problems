//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1515.h"
#include <iostream>

using namespace std;

Problem_1515::Problem_1515() {}
void Problem_1515::resolve()
{
    int n, year, time, firstPlannet;
    string planet, firstPlanetString;

    cin >> n;

    while (n != 0) {
        firstPlannet = 2114;
        firstPlanetString = "";

        for (int i = 0; i < n; i++) {
            cin >> planet;
            cin >> year >> time;

            if (year - time < firstPlannet) {
                firstPlanetString = planet;
                firstPlannet = year - time;
            }
        }

        cout << firstPlanetString << "\n";

        cin >> n;
    }
}

#include "../include/Problem_1515.h"
