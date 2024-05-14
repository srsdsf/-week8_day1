#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n==1)
    {
        return false;
    } 
    for(long long i=2; i*i<=n; i++)
    {
       
       if(n%i==0)  //i  ta n ar jonno divisible ki na
       {
        return false;
       } 
    }
    return true;
}
bool isPerfectSquare(long long n)
{
    long long x=sqrtl(n);
    return (x*x)==n;  //jemon 30 ar rooot 5 kintu 5 ke 5 dara gunon korle 30 hobe na
}
int main()
{
    int  n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int  i=0; i<n; i++)
    {
        //square root korer porei to dekhtechi prime ki prime na and ata perfect square ki na
        if(isPrime(sqrtl(a[i])) && isPerfectSquare(a[i]))  //2 ta conditoin e jodi true hoy
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}