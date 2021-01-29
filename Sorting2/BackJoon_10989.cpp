#include <iostream>
using namespace std;

int n, m;
int a[10001];

int main()
{
    cin.tie(NULL);  // 입출력 속도 늘리기
    ios::sync_with_stdio(false); // cpp의 iostream을 c의 stdio와 동기화시켜주는 역할

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        a[m]++;
    }

    for(int i = 0; i < 10001; i++) {
        while(a[i] != 0) {
            cout << i << "\n";
            a[i]--;
        }
    }
    return 0;
}