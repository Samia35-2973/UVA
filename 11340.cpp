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
		long long k;
		cin>>k;
		vector<pair<char,long long>>paidCharacter;
		for(long long i=0;i<k;i++){
			char c;
			long long cost;
			cin>>c>>cost;
			paidCharacter.push_back({c,cost});
		}
		long long m;
		double sum=0.0;
		cin>>m;
		string s;
		getline(cin,s);
		for(long long i=0;i<m;i++){
			getline(cin,s);
			long long len = s.size();
			for(long long j=0;j<len;j++){
				for(long long k=0;k<paidCharacter.size();k++){
					if(s[j]==paidCharacter[k].first){
						//cout<<sum<<" "<<s[j]<<" "<<paidCharacter[k].first<<endl;
						sum+=paidCharacter[k].second;
						break;
					}
				}
			}
			//cout<<s<<endl;
		}
		//cout<<sum<<endl;
		double money = sum/100.0;
		printf("%.2lf$\n", money);
	}
	return 0;
}
/*
1
2
a 1
b 2
2
For extended ascii code (128 ~ 255), if you use char in C, it is signed.
char occupies 1 byte (8 bit) in most machines, that is, -128 ~ 127
Thus, for extended ascii code, like À È Û, char will exceed it bound, and get undefined results.

0.09$

//use dummy getline
*/