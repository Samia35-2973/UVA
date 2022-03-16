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
	while(cin>>s){
		if(s[0]>=65 && s[0]<=90){
			int sum=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='I'){
					if(s[i+1]=='X'){
						sum+=9;
						i++;
					}
					else if(s[i+1]=='V'){
						sum+=4;
						i++;
					}
					else sum++;
				}
				else if(s[i]=='V') sum+=5;
				else if(s[i]=='X'){
					if(s[i+1]=='C'){
						sum+=90;
						i++;
					}
					else if(s[i+1]=='L'){
						sum+=40;
						i++;
					}
					else sum+=10;
				}
				else if(s[i]=='L') sum+=50;
				else if(s[i]=='C'){
					if(s[i+1]=='M'){
						sum+=900;
						i++;
					}
					else if(s[i+1]=='D'){
						sum+=400;
						i++;
					}
					else sum+=100;
				}
				else if(s[i]=='D') sum+=500;
				else if(s[i]=='M') {
					sum+=1000;
				}
			}
			cout<<sum<<endl;
		}
		else{
			string s1[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
			string s2[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C"};
			string s3[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM", "M"};
			string s4[] = {"", "M", "MM", "MMM"};
			string s5="";
			istringstream isString(s);
			int n;
			isString>>n;
			s5+=(s4[n/1000]+s3[(n%1000)/100]+s2[((n%1000)%100)/10]+s1[n%10]);
			cout<<s5<<endl;
		}
	}

	return 0;
}
