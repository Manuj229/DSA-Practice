#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

int MaxDifference(int n, int arr[])
{
    int max_diff = INT_MIN;
    int min_val = arr[0];
    for(int i=1;i<n;i++){
        max_diff = max(max_diff, arr[i]-min_val);
        min_val = min(min_val, arr[i]);
    }
    return max_diff;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<MaxDifference(n, arr);
}