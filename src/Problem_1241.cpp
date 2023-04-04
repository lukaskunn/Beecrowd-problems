//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1241.h"
#include <iostream>

using namespace std;

Problem_1241::Problem_1241() {}
void Problem_1241::resolve()
{
    int n;
    string a, b;
    bool isWrong;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        isWrong = false;

        if (b.size() > a.size()) {
            cout << "nao encaixa\n";
        }
        else {
            for (int j = 0; j < b.size(); j++) {
                if (b[b.size() - j - 1] != a[a.size() - j - 1]) {
                    isWrong = true;
                }
            }

            (isWrong) ? cout << "nao encaixa\n" : cout << "encaixa\n";
        }
    }
}

#include "../include/Problem_1241.h"
