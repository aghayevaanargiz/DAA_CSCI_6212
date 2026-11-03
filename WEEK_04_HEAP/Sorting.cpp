
#include <iostream>
#include <stdio.h>

using namespace std;

void Heapify(int a[], int i, int n){
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest = i;

    if (l <= n && a[l] > a[largest]){
        largest = l;
    }

    if (r <= n && a[r] > a[largest]){
        largest = r;
    }

    if (largest != i){
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        Heapify(a, largest, n);
    }
}

void BuildHeap(int a[], int n){
    for (int j = n / 2; j > 0; j--)
    {
        Heapify(a, j, n);
    }
}

void HeapSort(int a[], int n){
    BuildHeap(a, n);

    for (int k = n; k >= 2; k--){
        int temp = a[1];
        a[1] = a[k];
        a[k] = temp;

        Heapify(a, 1, k - 1);
    }
}

int main(){
    int n;
    int a[100005];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }

    HeapSort(a, n);

    for (int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
