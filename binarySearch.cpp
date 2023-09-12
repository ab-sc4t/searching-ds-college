#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int l, int r){
    while(l<=r){
        int m = (l+r)/2;
        if (arr[m] == key){
            return m;
        }
        if (arr[m] < key){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int result = binarySearch(arr, 3, 0, 8);
    if (result==-1){
        cout << "Element not found.";
    }
    else{
        cout << "Element found.";
    }
    return 0;
}