// 단순 소수 판별 : O(N)
#include <iostream>
using namespace std;

int isPrimeNumber(int x) {
    for(int i = 2; i < x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    cout << isPrimeNumber(97);
    return 0;
}