#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long c)
{
    if(b==0) return 1;
    long long res = binpow(a,b/2,c);
    if(b%2) return res*res*a%c;
    else return res*res%c;
}
int main()
{
    long long a,b,c;
    while(scanf("%lld %lld %lld", &a, &b, &c)!=EOF){
        long long z = binpow(a,b,c);
        printf("%lld\n", z);
    }
    return 0;
}
