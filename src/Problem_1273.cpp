//
// Created by work on 3/28/2023.
//
#include "../include/Problem_1273.h"
#include <iostream>
#include <vector>

using namespace std;

Problem_1273::Problem_1273() {}
void Problem_1273::resolve()
{
    int n = 0, bigWordSize = 0;
    string currentWord = "";
    vector<string> words;

    cin >> n;

    while (n != 0) {
        words.clear();
        bigWordSize = 0;

        for (int i = 0; i < n; i++) {
            cin >> currentWord;

            if (words.empty()) {
                words.push_back(currentWord);
                bigWordSize = currentWord.size();
            }
            else {
                if (currentWord.size() >= bigWordSize) {
                    bigWordSize = currentWord.size();
                }
                words.push_back(currentWord);
            }
        }

        for (int j = 0; j < words.size(); j++) {
            printf("%*s\n", bigWordSize, words[j].c_str());
        }

        
        cin >> n;
        n != 0 ? cout << "\n" : cout << "";
    }
}

#include "../include/Problem_1273.h"
