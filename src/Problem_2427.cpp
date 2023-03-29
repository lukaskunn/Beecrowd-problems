//
// Created by work on 3/28/2023.
//
#include "../include/Problem_2427.h"
#include <iostream>

using namespace std;

Problem_2427::Problem_2427() {}
void Problem_2427::resolve()
{
    int l, pieces = 1;

    cin >> l;

    while (l >= 2) {
        l = l / 2;
        pieces = pieces * 4;
    }

    cout << pieces << "\n";
}

#include "../include/Problem_2427.h"
