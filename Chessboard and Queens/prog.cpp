#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
char chess [8][8];
static int counter=0;
void place(int i); 
bool check(int i,int j);
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
bool check(int i,int j)
{
    // check the columns if there is any queen or not
    for(int k=0;k<i;k++)
    {
        if(chess[k][j]=='Q')
        {
            return false;
        }
    }

    // check the left side of the diagonal
    for(int k=i,l=j;k>=0 && l>=0;k--,l--)
    {
        if(chess[k][l]=='Q')
        {
            return false;
        }
    }

    // check the right side of the diagonal
    for(int k=i,l=j;k>=0 && l<8;k--,l++)
    {
        if(chess[k][l]=='Q')
        {
            return false;
        }
    }
    
    return true;
}
void place(int i)
{
    // if i==8 then we have reached at the end of the board 
    // and we need to return
    if(i==8)
    {
        // cout<<counter<<endl;
        counter++;
        return;
    }
    for(int j=0;j<8;j++)
    {
        // check if queen is already placed in this position
        if(chess[i][j]=='*' || !check(i,j))
        {
            continue;
        }
        // simce the conditions above are not true
        // queen can be placed here 
        chess[i][j]='Q';
        // after placing the queen 
        // go to the next row and try to place the queen
        place(i+1);
        // no matter what happens if the queen can be placed or not
        // we should clear the current current position so that
        // the queen can be moved and other combinations
        // other combinations can be explored 
        chess[i][j]='.';


    }
}
