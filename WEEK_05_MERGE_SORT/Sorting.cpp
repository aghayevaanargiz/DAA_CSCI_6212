#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void merge(int *a, int left, int middle, int right) {

    vector<int> temp;

    int i = left;
    int j = middle + 1;

    while (i <= middle && j <= right) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i++]);
        }
        else {
            temp.push_back(a[j++]);
        }
    }

    while (i <= middle) {
        temp.push_back(a[i++]);
    }

    while (j <= right) {
        temp.push_back(a[j++]);
    }

    for (int k = 0; k < temp.size(); k++) {
        a[left + k] = temp[k];
    }
}

void mergeSort(int *a, int left, int right) {

    if (left >= right) return;

    int middle = (left + right) / 2;

    mergeSort(a, left, middle);
    mergeSort(a, middle + 1, right);

    merge(a, left, middle, right);
}

int main() {

    int n;
    scanf("%d", &n);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n > 0) {
        mergeSort(a.data(), 0, n - 1);
    }

    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}
