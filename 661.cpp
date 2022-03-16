#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main()
{
    //startTheEngine();
    int n,m,c,t=0;
    while(1){
        cin>>n>>m>>c;
        if(t!=0) printf("\n");
        if(n==0 && m==0 && c==0) break;
        int max = 0, a[n],sum=0;
        for(int i=0;i<n;i++) cin>>a[i];
        map<int, int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(mp[x]!=1) {
                mp[x]++;
                sum += a[x-1];
                //cout<<a[x-1]<<" "<<sum<<" "<<max<<endl;
            }
            else {
                mp[x]--;
                sum -= a[x-1];
                //cout<<a[x-1]<<" "<<sum<<" "<<max<<endl;
            }
            if(sum>max) max = sum;
            
        }
        printf("Sequence %d\n", t+1);
        if(max>c){
            printf("Fuse was blown.\n");
        }
        else{
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", max);
        }
        t++;
        mp.clear();
    }
    return 0;
}