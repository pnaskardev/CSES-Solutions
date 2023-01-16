#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
const unsigned int MOD=1000000007;
void solve();
int calc(vector<int>&dp,int n);
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
    vector<int>dp(n+1,0);
    cout<<calc(dp,n)<<endl;
}

int calc(vector<int>&dp,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    else
    {
        int counter=0;
        for(int i=1;i<=6;i++)
        {
            if(n-i>=0)
            {
                (counter+=calc(dp,n-i))%=MOD;
            }
        }
        dp[n]=counter;
    }
    return dp[n];
}