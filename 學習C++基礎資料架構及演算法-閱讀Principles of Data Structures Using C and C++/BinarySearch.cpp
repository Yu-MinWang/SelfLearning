#include <iostream>

//binary search to find the index of the first value that is greater than or equal to x
//a[] = array
//n = size of array a
//if every element is smaller than x, return n
int binarySearch(int a[], int x, int n){
    int l = 0, r = n;

    while(r-l>1){
        int mid = (l+r)/2;
        if(a[mid]<x)
            l = mid;
        else
            r = mid;
    }

    return r;
}

int main(){
    int a[20] = {8, 10, 34, 40, 49, 55, 60, 76, 89, 107, 109, 116, 123, 137, 145, 147, 154, 187, 188, 191};

    int ans = binarySearch(a, 100, 20);
    std::cout << a[ans] << "\n";
}
