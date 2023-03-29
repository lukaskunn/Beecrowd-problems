//
// Created by work on 3/28/2023.
//
#include "../include/Problem_2006.h"
#include <iostream>

using namespace std;

Problem_2006::Problem_2006() {}
void Problem_2006::resolve()
{
    int correctAnswerCount = 0, attempt, correctAnswer;

    cin >> correctAnswer;
    for (int i = 0; i < 5; i++) {
        cin >> attempt;

        if (attempt == correctAnswer) {
            correctAnswerCount++;
        }
    }

    cout << correctAnswerCount << "\n";
}

#include "../include/Problem_2006.h"
