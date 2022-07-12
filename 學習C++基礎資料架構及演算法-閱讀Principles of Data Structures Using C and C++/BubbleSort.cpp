#include <iostream>
#include <algorithm>

void swap_int(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void bubbleSort(int a[], int n){
    bool sorted = false;

    while(!sorted){
        int swaps = 0;

        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                swap_int(a[i], a[i+1]);
                swaps++;
            }
        }

        if(swaps==0)
            sorted = true;
    }
}

int main(){
    int a[30];
    for(int i=0; i<30; i++)
        a[i] = i;
    std::random_shuffle(a, a+30);

    for(int i=0; i<30; i++)
        std::cout << a[i] << " ";
    std::cout << "\n";

    bubbleSort(a, 30);
    for(int i=0; i<30; i++)
        std::cout << a[i] << " ";
}
