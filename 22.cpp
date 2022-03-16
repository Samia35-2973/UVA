#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}
int numberOfDivisors(int n){
  int cnt=0;
  for(int i=1;i*i<=n;++i){
    if(n%i==0) {
      if((n/i)==i) cnt++;
      else cnt+=2;
    }
  }
  return cnt;
}
bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.second==b.second){
    return a.first>b.first;
  }
  return a.second<b.second;
}

int main()
{
  startTheEngine();
  vector<pair<int,int>>v;
  for(int i=1;i<=1000;++i){
    int totalDivisors = numberOfDivisors(i);
    v.push_back({i,totalDivisors});
  }
  sort(v.begin(),v.end(),cmp);
  //for(int i=0;i<1000;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
  int t;
  cin>>t;
  for(int cc=0;cc<t;cc++){
    int n;
    cin>>n;
    cout<<"Case "<<cc+1<<": "<<v[n-1].first<<endl;
  }
  return 0;
}