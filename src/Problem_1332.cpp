//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1332.h"
#include <iostream>

using namespace std;

Problem_1332::Problem_1332() {}
void Problem_1332::resolve()
{
    int n, correctLetterCountOne, correctLetterCountTwo, correctLetterCountThree;
    string currentWord;

    string wordsNumbers[] = {"one", "two", "three"};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> currentWord;
        correctLetterCountOne = 0;
        correctLetterCountTwo = 0;
        correctLetterCountThree = 0;

        if (currentWord.size() > 3) {
            for (int j = 0; j < wordsNumbers[2].size(); j++) {
                if (currentWord[j] == wordsNumbers[2][j]) {
                    correctLetterCountThree++;
                }
            }
        }
        else {
            for (int j = 0; j < 3; j++) {
                if (currentWord[j] == wordsNumbers[0][j]) {
                    correctLetterCountOne++;
                }
                if (currentWord[j] == wordsNumbers[1][j]) {
                    correctLetterCountTwo++;
                }
            }
        }

        if (correctLetterCountOne >= wordsNumbers[0].size() - 1) {
            cout << "1";
        }
        if (correctLetterCountTwo >= wordsNumbers[1].size() - 1) {
            cout << "2";
        }
        if (correctLetterCountThree >= wordsNumbers[2].size() - 1) {
            cout << "3";
        }

        cout << "\n";
    }
}

#include "../include/Problem_1332.h"
