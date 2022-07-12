#include <iostream>
#include <algorithm>

void swap_int(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}
void insertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0 && a[j]>a[j+1]; j--){
            std::swap(a[j], a[j+1]);
        }
    }
}

int main(){
    int n = 15;
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
