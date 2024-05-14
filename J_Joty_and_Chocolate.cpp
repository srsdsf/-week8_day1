//jegula overlap kore nai segula niye matha betha nai
//jei colur a color korle beshi chocolate pavo sei color ay color korbo
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    return __gcd(a,b);
}
long long lcm(long long a,long long b)
{
    return ((a/gcd(a,b))*b);
}
int main()
{
    long long  n,a,b,p,q,ans=0,overlap;
    cin>>n>>a>>b>>p>>q;  //a diye koita indx divisible b diye koita indx divisible
    ans+=((n/a)*p);  //jotogula a diye divisible oto gualr jonno p ta choloate considder korchci
    ans+=((n/b)*q);

    overlap=(n/lcm(a,b)); //lcm korle koita val por por overlap korche seta bujhe jabo
    ans-=(overlap*(p+q));  //ans ar sate oi 3 ta biyog kore dibo   6  12  18
    ans+=(overlap*(max(p,q)));  //jeta diye colour korle beshi cholate pabo seta nibo

    cout<<ans<<endl;
}