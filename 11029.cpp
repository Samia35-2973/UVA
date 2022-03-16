#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b)
{
    if(b==0) return 1;
    long long res = binpow(a,b/2);
    if(b%2) return res*res*a;
    else return res*res;
}
string anytodec(long long n, long long base)
{
    string s="";
    while(n!=0){
        long long rem=n%base;
        n/=base;
        if(rem>=0 && rem<=9){
            s+=rem+'0';
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long n,k, z, base=10;
        string s="";
        scanf("%lld %lld",&n, &k);
        z = binpow(n,k);
        s+=anytodec(z,base);
        long long len = s.length();
        cout<<s[0]<<s[1]<<s[2]<<"..."<<s[len-3]<<s[len-2]<<s[len-1]<<endl;
    }
    return 0;
}
