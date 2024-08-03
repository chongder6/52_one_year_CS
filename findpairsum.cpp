#include<iostream>
using namespace std;

////simple approach
int main(){
    int sum;
    cin>>sum;
    int a[]={12,10,4,18};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
}

//two pointer approach --here our main approach is to remove that nested loop
#include<iostream>
using namespace std;

int main(){
    int sum,i=0;
    cin>>sum;
    int a[]={0,1,4,6,8,10,14,16,20,23,30};
    int n=sizeof(a)/sizeof(int);
    int j=n-1;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    while(i<j){
        if(a[i]+a[j]==sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>sum){
            j--;
        }
        else if(a[i]+a[j]<sum){
            i++;
        }
    }
}