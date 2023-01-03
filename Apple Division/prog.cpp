#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int calc(int index,vector<int> arr, int box1sum,int box2sum);
int32_t main(void)
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<min(calc(1,arr,0+arr[0],0),calc(1,arr,0,0+arr[0]))<<endl;
    // cout<<calc(0,arr,0+arr[0],0)<<endl;
    // cout<<calc(0,arr,0,0+arr[0])<<endl;
}
int calc(int index,vector<int> arr, int box1sum,int box2sum)
{
    // cout<<box1sum<<" "<<box2sum<<endl;
    if(index==(int)arr.size())
    {
        return abs(box1sum-box2sum);
    }  
    
    int sum1=calc(index+1,arr,box1sum+arr[index],box2sum);
    int sum2=calc(index+1,arr,box1sum,box2sum+arr[index]);
    // cout<<sum1<<" "<<sum2<<endl;
    return min(sum1,sum2);
}