/* Programmer =  Roshan Mehra
Purpose = Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
Date = 16/11/2022  */

#include<iostream>
using namespace std;

void count(int arr[], int n){
    int count_even=0,count_odd=0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"No. of even elements in the array: "<<count_even<<endl<<"No. of odd elements in the array: "<<count_odd<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    count(arr,5);

    return 0;
}