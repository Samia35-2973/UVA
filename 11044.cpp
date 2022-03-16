#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main()
{
	//startTheEngine();
	long long t;
	cin>>t;
	while(t--){
		long long n,m,cnt=0;
		cin>>n>>m;
		for(long long i=3;i<=n;i+=3){
			for(long long j=3;j<=m;j+=3){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
