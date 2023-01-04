/* Programmer =  Roshan Mehra
Purpose = Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to different arrays and are not at the same index. Here 1<size<101
Date = 16/11/2022  */

#include<iostream>
using namespace std;

int minimumsum(int arr1[], int n, int arr2[], int m){
    int min1 = arr1[0], min2 = arr2[0], minisum;
    for(int i=1; i<=n; i++){
        if(arr1[i]<min1){
            min1 = arr1[i];
        }
    }

    for(int i=1; i<=m; i++){
        if(arr2[i]<min2){
            min2 = arr2[i];
        }
    }

    return minisum = min1 + min2;
}

int main(){
    int arr1[] = {5,7,6,8,9};
    int arr2[] = {8,2,3,4,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"Minimum sum: "<<minimumsum(arr1, size1, arr2, size2);

    return 0;
}