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
		long long n,m;
		cin>>n>>m;
		long long v = (n*m)/3;
		long long v2 = (n*m)%3;
		if(v2!=0) cout<<v+1<<endl;
		else cout<<v<<endl;
	}
	return 0;
}

