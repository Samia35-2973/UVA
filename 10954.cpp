#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    cin>>N;
    while(N!=0){
        priority_queue<long long int,vector<long long int>,greater<long long int> >q;
        long long int sum=0;
        for(long long int i=0;i<N;i++){
            long long int x;
            cin>>x;
            q.push(x);
        }
        for(long long int i=q.size();i>1;i--){
            long long int cost=0;
            cost += q.top();
            q.pop();
            cost += q.top();
            q.pop();
            sum+=cost;
            q.push(cost);
            //cout<<a<<" "<<b<<" "<<sum<<" "<<q.top()<<endl;
        }
        cout<<sum<<endl;
        fflush(stdout);
        cin>>N;
    }
}
