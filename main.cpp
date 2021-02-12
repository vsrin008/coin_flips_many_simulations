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

    cout << "Entire desired minimum amount of heads: ";
    int desiredHeads;
    cin >> desiredHeads;



    vector<int> AllFlips(numFlips);

    int numHeads = 0;
    int numTails = 0;
    int numSimulations = 0;

    while (numHeads < desiredHeads) {

        for (int i=0; i<AllFlips.size(); ++i) {
            FlippedCoin coin;
            AllFlips.at(i) = coin.GetCoinValue();
            if (AllFlips.at(i) == 0) {
              ++numTails;
            }
            else {
                ++numHeads;
            }
        }
        if (numHeads < desiredHeads) {
            numTails = 0;
            numHeads = 0;
        }
        ++ numSimulations;
    }
    double doubleNumHeads = numHeads;
    double doubleNumTails = numTails;


    double perHeads = doubleNumHeads / numFlips * 100;
    double perTails = doubleNumTails / numFlips * 100;


    printf("You flipped %d times. These are the results: \n Heads: %d (%f percent) \n Tails: %d (%f percent) \n", numFlips, numHeads, perHeads, numTails, perTails);
    printf("It took %d simulations to get this result\n", numSimulations);


return 0;


}