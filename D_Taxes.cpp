#include<bits/stdc++.h>
using namespace std;
bool Prime(int n)
{
    if(n==1)
    {
        return false;
    } 
    for(int i=2; i*i<=n; i++)
    {  
       if(n%i==0)
       {
        return false;
       } 
    }
    return true;
}
int main()
{
    int  n;
    cin>>n;
    if(Prime(n))
    {
        cout<<"1"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"2"<<endl;
    }
    else
    {
        if(Prime(n-2))
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
    
}