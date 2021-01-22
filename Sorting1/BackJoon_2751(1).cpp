#include <iostream>
using namespace std;

void quickSort(int* data, int start, int end) {
    if(start >= end) { return; }

    int key = start;
    int i = start+1, j = end, temp;

    while(i <= j) {
        while(i <= end && data[i] <= data[key]) {
            i++;
        }
        while(j > start && data[j] >= data[key]) {
            j--;
        }

        if(i > j) {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main()
{
    int number;
    int data[99999];
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> data[i];
    }
    quickSort(data, 0, number-1);
    for(int j = 0; j < number; j++) {
        cout << data[j] << "\n";
    }
    return 0;
}