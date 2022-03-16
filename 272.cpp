#include <bits/stdc++.h>
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
	int fg=0;
	while(getline(cin,s)){
		int n = s.size();
		for(int i=0;i<n;i++){
			if(s[i]==34 && fg==0){
				printf("``");
				fg=1;
			}
			else if(s[i]==34 && fg==1){
				printf("''");
				fg=0;
			}
			else cout<<s[i];
		}
		printf("\n");
	}
	return 0;
}
for(long long i=0;i<n;i++){
				for(long long j=0;j<v.size();j++){
					if(a[i]!=500 && a[i]==v[j].first && v[j].second==1){
						v[j].second--;
					}
					else if(a[i]!=500 && a[i]!=v[j].first) a[i]++;
				}
			}