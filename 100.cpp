#include <bits/stdc++.h>
using namespace std;
void startTheEngine(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

int main()
{
	//startTheEngine();
	int i,j;
	while(cin>>i>>j){
		//cout<<"e"<<endl;
		int cnt=0, max=0,p,q;
		if(i<=j){
			p=i;
			q=j;
		}
		else{
			p=j;
			q=i;
		}
		for(int r=p;r<=q;r++){
				cnt=1;
				int m = r;
				//cout<<m<<" "<<cnt<<endl;
				while(1){
					if(m==1) break;
					if(m%2==0){
						m=m/2;
					}
					else m=(3*m)+1;
					cnt++;
					//cout<<m<<" "<<cnt<<endl;
				}
				if(cnt>max) max = cnt;
			}
		printf("%d %d %d\n", i,j,max);
	}
	return 0;
}