#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve(int n);
int32_t main(void)
{
    static int n;
    cin>>n;
    solve(n);
}
void solve(int n)
{
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    else if(n%2==0)
    {
        n=n/2;
        solve(n);
        return;
    }
    else if(n%2!=0)
    {
        n=(n*3)+1;
        solve(n);
        return;
    }
    return;
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int n;
// void cal(int n)
// {
//     cout<<n<<" ";
//     if(n==1)
//     {
//         return;
//     }
//     else if(n%2==0)
//     {
//         n=n/2;
//         cal(n);
//         return;
//     }
//     else if(n%2!=0)
//     {
//         n=(n*3)+1;
//         cal(n);
//         return;
//     }
//     return;
// }


// int main(void)
// {
//     int temp;
//     cin>>temp;
//     n=temp;
//     cal(n);
// }