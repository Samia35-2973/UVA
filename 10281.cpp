#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    //startTheEngine();
    char s[50];
    int prevH,prevM,prevS,v=0,h,m,sec;
    double prevdur=0.0,sum=0.0;
    //scanf(" %[^\n]", s);
    //sscanf(s, "%d:%d:%d %d", &prevH, &prevM, &prevS, &v);
    //prevdur = prevH+((prevM+(prevS/60.0))/60.0);
    while(scanf(" %[^\n]", s)!=EOF){
        sscanf(s, "%d:%d:%d", &h, &m, &sec);
        double dur = h+((m+(sec/60.0))/60.0);
        double dif = (dur - prevdur)*v;
        sum+=dif;
        prevdur = dur;
        if(strlen(s)>8) sscanf(s+8, "%d", &v);
        if(strlen(s)==8) printf("%s %.2lf km\n", s, sum);
    }
    return 0;
}
