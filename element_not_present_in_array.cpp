/* Programmer =  Roshan Mehra
Purpose = Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.
Date = 16/11/2022  */

#include<iostream>
using namespace std;

void findnumber(int arr[], int n){
    int min = arr[0], max = arr[0];

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

    for(int i=min; i<=max; i++){
       int count=0;
        for(int j=0; j<n; j++){
            if(i==arr[j]){
                count++;
            }
        }
        if(count==0){
            cout<<" Missing number from the range: "<<i;
        }
    }  
}

int main(){
    int arr[] = {3,0,1}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    findnumber(arr,size);
    return 0;
}