#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
char r1,r2;
int c1,c2;
cin>>r1>>c1>>r2>>c2;
int x=r1-'a'+1;
int y=r2-'a'+1;
int w1= abs(x-y)+c1+c2;
int w2=  abs(x-y)+n-c1+1+n-c2+1;
int best_way=min(w1,w2);
cout<<best_way<<endl;
return 0;
}
