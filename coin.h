#ifndef COIN_H
#define COIN_H
#include <iostream>

using namespace std;

class FlippedCoin {
    public:
        FlippedCoin();
        int HeadsOrTails();
        int SetCoinNumber();
        int GetCoinValue();
    
    private:
        int zeroOrOne; //0 is tails 1 is heads
        //int coinNumber;


};

#endif