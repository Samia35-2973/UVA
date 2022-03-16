#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}
int main()
{
  startTheEngine();
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int tiger, d;
        double  pp;
        cin>>tiger>>d;
        if(tiger == 0)
           printf("Case %d: 1\n",i+1);
        else if(tiger!=0 && tiger%2!=0) printf("Case %d: 0\n",i+1);
        else if(tiger!=0 && tiger%2 == 0){
            pp= 1.0/(tiger+1.0);
            printf("Case %d: %lf\n",i+1, pp);
        }
    }
  return 0;
}