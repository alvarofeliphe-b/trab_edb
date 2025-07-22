// Teste de correção
#include <iostream>
using namespace std;

void selectionsort(int n, int v[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min]) min = j;
        }
        swap(v[i], v[min]);
    }
}

bool estaOrdenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (v[i] > v[i+1]) return false;
    return true;
}

int main() {
    int v[] = {3, 2, 1, 4, 5};
    int n = sizeof(v)/sizeof(v[0]);
    selectionsort(n, v);
    cout << (estaOrdenado(v, n) ? "Correto" : "Incorreto") << endl;
    return 0;
}
