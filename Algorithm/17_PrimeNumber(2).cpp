// 제곱근까지만 약수 여부 검증
#include <iostream>
#include <math.h>
using namespace std;

int isPrimeNumber(int x) {
    int end = (int)sqrt(x);
    for(int i = 2; i <= end; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    cout << isPrimeNumber(97);
    return 0;
}