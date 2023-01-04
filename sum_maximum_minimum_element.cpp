/* Programmer =  Roshan Mehra
Purpose = Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101
Date = 16/11/2022 */

#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int min = arr[0], max = arr[0], sum;

    for(int i=1; i<n; i++){
         if(min>arr[i]){
            min = arr[i];
         }
    }

    for(int i=1; i<n; i++){
         if(max<arr[i]){
            max = arr[i];
         }
    }

    sum = max+min;
    return sum;
}

int main(){
    
    int arr[5] = {1,2,3,4,5};
    cout<<"Sum of a maximum and minimum element: "<<sum(arr, 5);

    return 0;
}