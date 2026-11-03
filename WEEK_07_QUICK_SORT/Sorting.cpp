#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

vector<int> a;

int Partition(int L, int R){
    int x = a[L];
    int i = L-1;
    int j = R +1;
        
    while(1){
        
        do i++; while (a[i] < x);
        
        do j--; while (a[j] > x );
        
        if (i<j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else{
            return j;
        }
    }
    
}

void QuickSort(int L, int R){
    if (L<R){
        int q  = Partition(L, R);
        QuickSort(L, q);
        QuickSort(q + 1, R);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    
    a.resize(n);
    
    for(int i= 0; i<n; i ++){
        scanf("%d", &a[i]);
    }
    
    QuickSort(0, n - 1);
    
    for(int k = 0; k<n; k++){
        printf("%d ", a[k]);
    }
    
}
