#include <iostream>
#include <vector>
using namespace std;

int number;
vector<int> heap;

void heapify(int i) {
    // 왼쪽 자식 노드
    int c = 2 * i + 1;
    
    // 오른쪽 자식 노드가 있고, 왼쪽 자식 노드보다 크다면
    if(c < number && heap[c] < heap[c+1]){
        c++;
    }
    // 부모보다 자식이 더 크면 교환
    if(heap[i] < heap[c]) {
        int temp = heap[i];
        heap[i] = heap[c];
        heap[c] = temp;
    }

    // number/2까지만 수행
    if(c <= number/2) heapify(c);
}

int main()
{
    cin >> number;
    for(int i = 0; i < number; i++) {
        int x;
        cin >> x;
        heap.push_back(x);
    }

    // 힙 생성
    for(int i = number/2; i >= 0; i--) {
        heapify(i);
    }

    // 정렬 수행
    for(int i = number - 1; i >= 0; i--) {
        for(int j = 0; j < number; j++) {
            cout << heap[j] << " ";
        }
        cout << "\n";

        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        int root = 0;
        int c = 1;
        do {
            c = 2 * root + 1;
            if(c < i-1 && heap[c] < heap[c+1]) c++;
            if(c < i && heap[root] < heap[c]) {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while(c < i);
    }
}