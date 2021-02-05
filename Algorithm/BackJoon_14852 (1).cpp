// 점화식 : D[n] = 2 * D[n-1] + 3 * D[n-2] + (2*D[n-3] + 2*D[n-4] + ... + 2*D[0])
// 이와 같이 할 경우 시간초과 발생
#include <iostream>
using namespace std;

int d[1000001];

int dp(int d[], int x) {
    if(x == 0) return 1;
    if(x == 1) return 2;
    if(x == 2) return 7;
    if(d[x] != 0) return d[x];
    int result = 2*dp(d, x-1) + 3*dp(d, x-2);
    for(int i = 3; i <= x; i++) {
        result += (2*dp(d, x-i)) % 100000007;
    }
    return d[x] = result % 100000007;
}

int main()
{
    int n;
    cin >> n;
    cout << dp(d, n);
    return 0;
}