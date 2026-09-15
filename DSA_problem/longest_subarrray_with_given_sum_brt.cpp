#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int max_size=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s+=arr[k];
            }
            if(s==sum){
                max_size=max(max_size,j-i+1);
            }

        }
    }
    if(max_size==0){
        cout<<"No subarray found";
    }
    else{
        cout<<max_size;
    }
}