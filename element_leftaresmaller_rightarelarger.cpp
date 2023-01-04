/* Programmer =  Roshan Mehra
Purpose = Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
Date = 16/11/2022  */

#include<iostream>
using namespace std;

int find(int arr[], int n){
       

    for(int i=1; i<n-1; i++){
         int count=0;
        for(int j=i-1; j>=0; j--){
            if(arr[i]<arr[j]){
                count++;
            }
        }

        for(int j=i+1; j<n-1; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
         if(count==0){
        return arr[i];
        }
    }
   return -1;
}

int main(){
    
    int arr[] = {5,6,2,8,10,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,size);

    return 0;
}