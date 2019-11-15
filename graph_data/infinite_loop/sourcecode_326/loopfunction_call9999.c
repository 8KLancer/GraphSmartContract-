#include "vntlib.h"

constructor Function5(){}

MUTABLE
void test1(){
    uint128 res = test2();
    PrintUint256T("recurrent times:", res);
}

MUTABLE
uint128 test2() {
    uint128 a = 20;
    uint256 i = U256SafeMul(a, a);
    Require(i > a, "i > a");
    test3(a, i);

    return i;
}

MUTABLE
bool test3(uint256 a, uint256 i) {
    Assert(a < i, "require a < i");
    if (a >= i) {
        Revert("require a < i");
    }
    test1();

    return true;
}

