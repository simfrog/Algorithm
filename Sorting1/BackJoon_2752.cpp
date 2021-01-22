#include <iostream>
using namespace std;

int main()
{
    int data[3];
    int min, index, temp;
    for(int i = 0; i < 3; i++) {
        cin >> data[i];
    }

    for(int i = 0; i < 3; i++) {
        min = 1000000;
        for(int j = i; j < 3; j++) {
            if(min > data[j]) {
                min = data[j];
                index = j;
            }
        }
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    for(int i = 0; i < 3; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";

    return 0;
}