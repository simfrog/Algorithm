// DP 문제는 먼저 점화식을 세우는 것이 중요!
// 점화식 : D[n] = D[n-1] + D[n-2]
#include <iostream>
using namespace std;

int d[1001];

int dp(int x) {
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(d[x] != 0) return d[x];
    return d[x] = (dp(x-1) + dp(x-2)) % 10007;
}

int main()
{
    int n;
    cin >> n;
    cout << dp(n);
    return 0;
}