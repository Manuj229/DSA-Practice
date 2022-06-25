#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

void reverseArray(int n, int arr[])
{
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

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

    reverseArray(n, arr);

    for(auto x: arr){
        cout<<x<<" ";
    }
}