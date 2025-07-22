#include <iostream>
using namespace std;

int selectionsort(int n, int v[]) {
    int trocas = 0;
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min]) min = j;
        }
        if (min != i) {
            swap(v[i], v[min]);
            trocas++;
        }
    }
    return trocas;
}

int main() {
    int v1[] = {9, 8, 7, 6, 5};  // Pior caso
    int v2[] = {1, 2, 3, 4, 5};  // Melhor caso
    int n = 5;

    cout << "Trocas (pior caso): " << selectionsort(n, v1) << endl;
    cout << "Trocas (melhor caso): " << selectionsort(n, v2) << endl;
    return 0;
}
