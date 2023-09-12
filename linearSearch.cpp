#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int len){
    for (int i=0; i<len; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int result = linearSearch(arr, 7, 9);
    if (result == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found at pos: " << result+1;
    }
    return 0;
}