#include <iostream>
#include <vector>
#include "coin.h"
#include <time.h>
using namespace std;

int main() {
    srand(time(0));
    cout << "Welcome to Vinay's coin flip simulator.";
    cout << "Enter how many coins you would like to flip: ";
    int numFlips;
    cin >> numFlips;

    vector<int> AllFlips(numFlips);

    int numHeads = 0;
    int numTails = 1;

    for (int i=0; i<AllFlips.size()-1; ++i) {
        FlippedCoin coin;
        AllFlips.at(i) = coin.GetCoinValue();
        if (AllFlips.at(i) == 0) {
            ++numTails;
        }
        else {
            ++numHeads;
        }
    }
    double doubleNumHeads = numHeads;
    double doubleNumTails = numTails;


    double perHeads = doubleNumHeads / numFlips * 100;
    double perTails = doubleNumTails / numFlips * 100;


    printf("You flipped %d times. These are the results: \n Heads: %d (%f percent) \n Tails: %d (%f percent) \n", numFlips, numHeads, perHeads, numTails, perTails);


return 0;


}