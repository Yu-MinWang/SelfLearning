#include <iostream>
#include <algorithm>

void bubbleSort(int a[], int n){
    bool sorted = false;
    long long comparison = 0, total_swaps = 0;

    while(!sorted){
        int swaps = 0;

        for(int i=0; i<n-1; i++){
            comparison++;
            if(a[i]>a[i+1]){
                std::swap(a[i], a[i+1]);
                swaps++;
                total_swaps++;
            }
        }

        if(swaps==0)
            sorted = true;
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

    bubbleSort(a, n);
    for(int i=0; i<n; i++)
        std::cout << a[i] << " ";
}

