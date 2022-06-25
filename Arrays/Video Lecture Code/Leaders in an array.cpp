#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>>

//what are leaders in an array?
// Leader is an element where none of the other element is greater then it in its right vicinity. 
// Note : this program prints them in reverse order. 

void LeadersInAnArray(int n, int arr[])
{
    int temp = arr[n-1];
    cout<<temp<<" ";
    for(int i=n-1;i>=0;i--){
        if(arr[i]>temp){
            cout<<arr[i]<<" ";
            temp = arr[i];
        }
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

    LeadersInAnArray(n, arr);
}