#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int number,num;
    vector<int> data;
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> num;
        data.push_back(num);
    }
    sort(data.begin(),data.end());
    for(int i = 0; i < number; i++) {
        cout << data[i] << "\n";
    }
    return 0;
}