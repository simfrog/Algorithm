#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <pair<int, string>> v;
    v.push_back(pair<int, string>(99, "박충남"));
    v.push_back(pair<int, string>(95, "조천역"));
    v.push_back(pair<int, string>(93, "인심덕"));
    v.push_back(pair<int, string>(88, "임오이"));
    v.push_back(pair<int, string>(90, "김미역"));

    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i].second << " ";
    }
    cout << "\n";
    return 0;
}