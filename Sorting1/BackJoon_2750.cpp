#include <iostream>
using namespace std;

int main()
{
    int data[1000];
    int min, index, temp, number;

    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> data[i];
    }

    for(int i = 0; i < number; i++) {
        min = 1001;
        for(int j = i; j < number; j++) {
            if(min > data[j]) {
                min = data[j];
                index = j;
            }
        }
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    for(int i = 0; i < number; i++) {
        cout << data[i] << "\n";
    }

    return 0;
}