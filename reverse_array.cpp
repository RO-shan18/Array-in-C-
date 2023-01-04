/* Programmer =  Roshan Mehra
Purpose = Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101
Date = 16/11/2022 */

#include<iostream>
using namespace std;

// bruteforce approach
/*void reversearray(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}*/

// Pro approach
void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    reversearray(arr, 5);
    printarray(arr, 5);

    return 0;
}