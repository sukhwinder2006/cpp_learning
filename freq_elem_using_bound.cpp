#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];

}sort(a.begin(),a.end());
int x;
cin>>x;
int in=lower_bound(a.begin(),a.end(),x)-a.begin();
int fin=upper_bound(a.begin(),a.end(),x)-a.begin();
if(in==fin){
    cout<<"Element not found"<<endl;    
}else{
    cout<<"Element found and frequency is "<<fin-in<<endl;


}}