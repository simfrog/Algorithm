#include <iostream>
using namespace std;

int main()
{
    int min, max, index, temp;
    int number[10] = {1, 8, 4, 6, 2, 7, 9, 5, 10, 3};

    // 오름차순
    for(int i = 0; i < 10; i++) {
        min = 9999;
        for(int j = i; j < 10; j++) {
            if(min > number[j]){
                min = number[j];
                index = j;
            }
        }
        temp = number[i];
        number[i] = number[index];
        number[index] = temp;
        for(int k = 0; k < 10; k++) {
            cout << number[k] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    // 내림차순
    for(int j = 0; j < 10; j++) {
        max = 0;
        for(int i = j; i < 10; i++) {
            if(max < number[i]) {
                max = number[i];
                index = i;
            }
        }
        temp = number[j];
        number[j] = number[index];
        number[index] = temp;
        for(int k = 0; k < 10; k++) {
            cout << number[k] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}