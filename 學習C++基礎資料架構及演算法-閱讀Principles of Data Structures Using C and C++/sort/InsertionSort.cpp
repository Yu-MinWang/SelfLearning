#include <iostream>
#include <algorithm>

void swap_int(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}
void insertionSort(int a[], int n){
    long long comparison = 0, total_swaps = 0;
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0 && a[j]>a[j+1]; j--){
            std::swap(a[j], a[j+1]);
            total_swaps++;
            comparison++;
        }
        comparison++;
    }
    std::cout << "comparison: " << comparison << "\ntotal_swaps: " << total_swaps << "\n";
}

int main(){
    int n = 40;
    int a[n];
    for(int i=0; i<n; i++)
        a[i] = i;
    std::random_shuffle(a, a+n);

    for(int i=0; i<n; i++)
        std::cout << a[i] << " ";
    std::cout << "\n";

    insertionSort(a, n);
    for(int i=0; i<n; i++)
        std::cout << a[i] << " ";
}
