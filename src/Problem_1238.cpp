//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1238.h"
#include <iostream>
#include <stdio.h>

using namespace std;

Problem_1238::Problem_1238() {}
void Problem_1238::resolve()
{
    int caseCount, smallSizeWord;
    string firstWord, secondWord, biggerWord, newWord = "";

    scanf("%d", &caseCount);
    
    for (int i = 0; i < caseCount; i++) {
        cin >> firstWord;
        cin >> secondWord;
        newWord = "";

        smallSizeWord = (firstWord.size() < secondWord.size()) ? firstWord.size() : secondWord.size();
        biggerWord = (firstWord.size() < secondWord.size()) ? secondWord : firstWord;

        cout << biggerWord << "\n";
        for (int j = 0; j < smallSizeWord; j++) {
            cout << firstWord[j] << " " << secondWord[j] << "\n";
            newWord.append(firstWord, j, 1);
            newWord.append(secondWord, j, 1);
        }

        for (int k = smallSizeWord; k < biggerWord.size(); k++) {
            newWord.append(biggerWord, k, 1);
        }

        cout << newWord << "\n";
    }
    
}

#include "../include/Problem_1238.h"
