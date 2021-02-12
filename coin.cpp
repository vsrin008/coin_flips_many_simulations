#include "coin.h"
#include <stdlib.h>


FlippedCoin::FlippedCoin() {
    zeroOrOne = rand()%2;

}

int FlippedCoin::GetCoinValue() {
    return zeroOrOne;


}