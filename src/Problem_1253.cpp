//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1253.h"
#include <iostream>

using namespace std;

Problem_1253::Problem_1253() {}
void Problem_1253::resolve()
{
    int n, letterToRight;
    string a, newWord;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> letterToRight;
        newWord = "";

        for (int i = 0; i < a.size(); i++) {
            if ((int)a[i] - letterToRight < 65) {
                int remainingLetters = letterToRight - ((int)a[i] - 65);
                newWord.push_back((char)(91 - remainingLetters));
            }
            else {
                newWord.push_back((char)((int)a[i] - letterToRight));
            }
            //cout << (int)a[i] << " " << (char)((int)a[i] + 2) << "\n";
       
        }

        cout << newWord << "\n";
    }
}

#include "../include/Problem_1253.h"
