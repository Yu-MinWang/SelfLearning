#include <iostream>
#include <algorithm>

void selectionSort(int a[], int n){
    long long comparison = 0, total_swaps = 0;

    for(int i=0; i<n; i++){
        int array_min = INT_MAX, arrray_min_index;

        for(int j=i; j<n; j++){
            comparison++;
            if(a[j]<array_min){
                array_min = a[j];
                arrray_min_index = j;
            }
        }

        total_swaps++;
        std::swap(a[i], a[arrray_min_index]);
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

    selectionSort(a, n);
    for(int i=0; i<n; i++)
        std::cout << a[i] << " ";
}
