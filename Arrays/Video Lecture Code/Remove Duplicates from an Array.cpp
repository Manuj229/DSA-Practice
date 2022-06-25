#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

vector<int> removedDuplicates(int n, int arr[])
{
    vector<int> res;
    int first = 0;
    res.push_back(arr[first]);
    int temp = -1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[first]){
            first++;
        }
        else{
            res.push_back(arr[i]);
            first++;
        }
    }
    return res;

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

    vector<int> vec;
    vec = removedDuplicates(n, arr);


    for(auto x:vec){
        cout<<x<<" ";
    }
}