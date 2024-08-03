#include <iostream>
#include<climits>
using namespace std;

int printg(int arr[],int n){
    if(n==0){
        return n;
    }
    for(int i=0; i<=n; i++){
        for(int j=i; j<=n; j++){
            for(int k=i; k<j; k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}
int dav(int arr[] , int n){
    int max= INT_MIN;
    for(int i=0; i<=n; i++){
        for(int j=i; j<=n; j++){
            int sum = 0;
            for(int k=i; k<j; k++){
                sum += arr[k];
            }
            cout<<endl;
            if(max<sum){
                //for printing the max subarry also you just need to add two var suppose wi & wj 
                //and after max=sum; wi=i; & wj=j; then print before cout<<max;
                max = sum;
            }
        }
    }
    //like for(i=wi;i<=wj;i++){cout<<a[i]}--that's all 
    cout<<max;
}
int main() {
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    
    printg(a,n);
    dav(a,n);
    return 0;
}
 