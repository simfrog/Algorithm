// 에라토스체네스의 체 사용 : O(N^(1/2))
#include <iostream>
using namespace std;

int number = 100000;
int a[100001];

void primeNumbereve() {
    for(int i = 2; i <= number; i++) {
        a[i] = i;
    }

    for(int i = 2; i <= number; i++) {
        if(a[i] == 0) continue;
        for(int j = i+i; j <= number; j += i) {
            a[j] = 0;
        }
    }

    for(int i = 2; i <= number; i++) {
        if(a[i] != 0) cout << a[i] << " ";
    }
}

int main()
{
    primeNumbereve();
    return 0;
}