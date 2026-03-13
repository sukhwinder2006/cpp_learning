#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &a,int x){
int in=0;
int fin=a.size()-1;
int k=-1;
while((in<=fin)&&(k==-1)){
    int mid=(in+fin)/2;
    if(a[mid]==x){
        k=mid;
    }else if(a[mid]>x){
        fin=mid-1;
    }else{
        in=mid+1;
    }
}
return k;


}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    sort(a.begin(), a.end());
    int x;
    cin>>x;
    int m= search(a,x);
    if(m!=-1){
        cout<<"found and index is "<<m<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}