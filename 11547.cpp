#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main()
{
	//startTheEngine();
	int t;
	cin>>t;
	while(t--){
		long long n, val;
		cin>>n;
		val = ((((((n*567)/9)+7492)*235)/47)-498);
		string s = to_string(val);
		long long ss = s.size();
		cout<<s[ss-2]<<endl;
	}
	return 0;
}
