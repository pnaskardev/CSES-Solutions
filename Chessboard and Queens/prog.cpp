#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int leftDiagonal[15],rightDiagonal[15],row[7];
char chess [8][8];
static int counter=0;
void place(int index); 
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
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>chess[i][j];
        }
    }
    place(0);
    cout<<counter<<endl;
}
void place(int j)
{
    if(j==8)
    {
        counter++;
        return;
    }
    for(int i=0;i<8;i++)
    {
        if(chess[i][j]=='.' && leftDiagonal[i-j+7]==0 && rightDiagonal[i+j]==0 && row[i]==0 )
        {
            leftDiagonal[i-j+7]=1;
            rightDiagonal[i+j]=1;
            row[i]=1;
            place(j+1);
            leftDiagonal[i-j+7]=0;
            rightDiagonal[i+j]=0;
            row[i]=0;
        }
    }
}