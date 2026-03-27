/*You are given an integer array a
 of length n
.

For each index i
, find the maximum number of indices j
 such that j>i
 and |ai−k|>|aj−k|
, over all possible integer values of k
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤5000
).

The second line contains n
 integers a1,a2,…,an
 (−109≤ai≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 5000
.

Output
For each test case, output n
 integers denoting the answer.*/
 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int l=0;l<n;l++){
        int x;
        cin >> x;
        vector<int>a(x);
        for(int j=0;j<x;j++){
    cin >> a[j];
        }
        for(int i=0;i<x;i++){
            int greater=0;
            int lower=0;
            for(int j=i;j<x;j++){
                if(a[j]>a[i]){
                    greater++;
                }else if(a[j]<a[i]){
                    lower++;
                }
                
            }
            cout << max(greater,lower) << " ";

        }
        cout << '\n';
    }

}