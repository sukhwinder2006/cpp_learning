/*OtterZ set up a battle with n
 monsters in order to increase his combat power. Each monster has a combat power ai
 and OtterZ has a combat power of c
. He has k
 flip flops and can perform the following operations:

Kill an alive monster i
 if ai≤c
; then c
 becomes c+ai
.
Throw a flip flop at an alive monster i
; the flip-flop will be broken and the monster will become angrier, then ai
 becomes ai+1
.
Help OtterZ obtain the maximum possible c
 after the battle.
Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains three integers n
, c
 and k
 (1≤n≤100
, 0≤c,k≤109
).

The second line contains n
 integers a1,a2,…,an
 (0≤ai≤109
).

Output
For each test case, output an integer — the maximum possible combat power.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        int n;
        long long c,k;
        cin >> n >> c >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
       
        for(int i=0;i<n;i++){
            if(a[i]<=c){
                if(k>0){
                    if(a[i]+k<=c){
                        c=c+a[i]+k;
                        k=0;
                    }else{
                        k=k+a[i]-c;
                        c=c+c;
                       
                    }
                }else{
                    c=c+a[i];
                }


            }
        }
        cout<<c<<endl;
    }
}
