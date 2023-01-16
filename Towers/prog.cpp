#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int ans=0;
    multiset<int>s;
    for(auto i:arr)
    {
        auto it =s.upper_bound(i);
        // If no tower has been found create one
        if(it==s.end())
        {
            s.insert(i);
        }
        else
        {
            // since one tower has been found 
            // update the value of that tower
            s.erase(it);
            s.insert(i);
        }
    }
    cout<<s.size()<<endl;
}