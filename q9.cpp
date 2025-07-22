// Cronometrar desempenho
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void selectionsort(int n, int v[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min]) min = j;
        }
        swap(v[i], v[min]);
    }
}

int main() {
    const int n = 1000;
    int v[n];
    for (int i = 0; i < n; i++) v[i] = n - i;

    auto inicio = high_resolution_clock::now();
    selectionsort(n, v);
    auto fim = high_resolution_clock::now();

    auto duracao = duration_cast<milliseconds>(fim - inicio);
    cout << "Tempo: " << duracao.count() << " ms" << endl;
    return 0;
}
