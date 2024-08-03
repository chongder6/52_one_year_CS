// A mathematical version using local maxima and local minima will be uploaded soon

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sell_buy(int arr[], int size){
    int profit = 0;

    for(int i= 1; i<size; i++){
        if(arr[i] > arr[i-1]){
            profit += (arr[i]- arr[i-1]);
    
        }
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    cout<<sell_buy(array, n)<<endl;

    return 0;
}
