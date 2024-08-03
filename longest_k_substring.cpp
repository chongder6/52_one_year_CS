//sliding window
#include<iostream>
#include<cstring>
using namespace std;

void slide(char a[], int k){
    int len = -1;
    int freq[26] = {0};
    int i=0;
    int count = 0;

    for(int j = 0; a[j] != '\0'; j++){
        freq[a[j]-'a']++;
        if(freq[a[j]-'a']==1){
            count++;
        }
        while(count>k){
            freq[a[i]-'a']--;
            if(freq[a[i]-'a']==0){
                count--;
            }
            i++;
        }
        if(count==k){
            len = max(len,j-i+1);
        }
    }
cout<<k<<len;
}
int main(){
    char c[1000];
    cin.getline(c,1000);
    int key;
    cin>>key;
    slide(c,key);
}