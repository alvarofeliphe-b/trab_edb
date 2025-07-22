// Questão 2: Mudança do laço for para i < n
#include <iostream>
using namespace std;

void selectionsort(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min]) min = j;
        }
        swap(v[i], v[min]);
    }
}

int main() {
    int v[] = {29, 10, 14, 37, 13};
    int n = sizeof(v)/sizeof(v[0]);
    selectionsort(n, v);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}
