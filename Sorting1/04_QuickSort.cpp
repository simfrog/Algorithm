#include <iostream>
using namespace std;

// 오름차순
void quickSort_up(int* data, int start, int end) {
    if(start >= end) { return; } // 원소가 1개인 경우 그대로 두기

    int key = start; // key는 첫번째 원소
    int i = start+1, j = end, temp;

    while(i <= j) { // 엇갈릴 때까지 반복
        while(i <= end && data[i] <= data[key]) { // key 값보다 큰 값을 찾을 때까지 반복
            i++;
        }
        while(j > start && data[j] >= data[key]) { // key 값보다 작은 값을 찾을 때까지 반복
            j--;
        }

        if(i > j) { // 엇갈린 상태이면 key 값과 교체
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort_up(data, start, j-1);
    quickSort_up(data, j+1, end);
}

// 내림차순
void quickSort_down(int* data, int start, int end) {
    if(start >= end) { return; } // 원소가 1개인 경우 그대로 두기

    int key = start; // key는 첫번째 원소
    int i = start+1, j = end, temp;

    while(i <= j) { // 엇갈릴 때까지 반복
        while(i <= end && data[i] >= data[key]) { // key 값보다 큰 값을 찾을 때까지 반복
            i++;
        }
        while(j > start && data[j] <= data[key]) { // key 값보다 작은 값을 찾을 때까지 반복
            j--;
        }

        if(i > j) { // 엇갈린 상태이면 key 값과 교체
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort_down(data, start, j-1);
    quickSort_down(data, j+1, end);
}

int main()
{
    int number = 10;
    int data[] = {1, 8, 4, 6, 2, 7, 9, 5, 10, 3};

    //quickSort_up(data, 0, number-1);
    quickSort_down(data, 0, number-1);
    for(int i = 0; i < number; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";

    return 0;
}