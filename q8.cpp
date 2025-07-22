#include <iostream>
using namespace std;

void selectionsortDesc(int n, int v[]) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] > v[max]) max = j;
        }
        swap(v[i], v[max]);
    }
}

int main() {
    int v[] = {10, 30, 20, 50, 40};
    int n = sizeof(v)/sizeof(v[0]);
    selectionsortDesc(n, v);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    return 0;
}
