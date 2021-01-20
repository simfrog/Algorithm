#include <iostream>
using namespace std;

int main()
{
    int temp;
    int number[10] = {1, 8, 4, 6, 2, 7, 9, 5, 10, 3};

    // 오름차순
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9-i; j++) {
            if(number[j] > number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;

                for(int k = 0; k < 10; k++) {
                    cout << number[k] << " ";
                }
                cout << "\n";
            }
        }
        cout << "\n";
    }

    // 내림차순
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9-i; j++) {
            if(number[j] < number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;

                for(int k = 0; k < 10; k++) {
                    cout << number[k] << " ";
                }
                cout << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}