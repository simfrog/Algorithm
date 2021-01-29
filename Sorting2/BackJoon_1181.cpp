#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<string> v;

bool compare(string a, string b) {
    if(a.length() < b.length()) {
        return 1;
    } else if(a.length() > b.length()) {
        return 0;
    } else {
        return a < b;
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) {
        if(i > 0 && v[i] == v[i-1]) {
            continue;
        } else {
            cout << v[i] << "\n";
        }
    }
    return 0;
}