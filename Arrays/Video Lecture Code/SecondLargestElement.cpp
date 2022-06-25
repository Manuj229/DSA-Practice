#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

bool ifArrSorted(int n, int arr[])
{
    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i<j){
        if(arr[i]<=arr[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool res = ifArrSorted(n, arr);
    res==1?cout<<"true":cout<<"false";
}