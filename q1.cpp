// Questão 1: Versão recursiva do SelectionSort
#include <iostream>
using namespace std;

void recursiveSelectionSort(int v[], int n, int index = 0) {
    if (index == n) return;
    int min = index;
    for (int i = index + 1; i < n; i++) {
        if (v[i] < v[min]) min = i;
    }
    swap(v[index], v[min]);
    recursiveSelectionSort(v, n, index + 1);
}

int main() {
    int v[] = {64, 25, 12, 22, 11};
    int n = sizeof(v)/sizeof(v[0]);
    recursiveSelectionSort(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}
