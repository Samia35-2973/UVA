#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void startTheEngine(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main()
{
    //startTheEngine();
    string s;
    //getline(cin,s);
    while(getline(cin, s)){
        string s1="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
        ll sz = s.size(), n = s1.size();
        for(ll i=0;i<sz;i++){
            for(ll j=0;j<n;j++){
                if(s[i]==s1[j]){
                    cout<<s1[j-1];
                    break;
                }
                else if(s[i]==' ') {
                    printf(" ");
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}