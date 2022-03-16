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
    scanf("%lld", &t);
    string s;
    getline(cin,s);
    for(long long cc=0;cc<t;cc++){
        getline(cin,s);
        string s3="";
        s3+=s;
        istringstream isStream(s);
        string s1,s2;
        while(isStream>>s1)
        {
            if(s1==".-") s2.push_back('A');
            else if(s1=="-...") s2.push_back('B');
            else if(s1=="-.-.") s2.push_back('C');
            else if(s1=="-..") s2.push_back('D');
            else if(s1==".") s2.push_back('E');
            else if(s1=="..-.") s2.push_back('F');
            else if(s1=="--.") s2.push_back('G');
            else if(s1=="....") s2.push_back('H');
            else if(s1=="..") s2.push_back('I');
            else if(s1==".---") s2.push_back('J');
            else if(s1=="-.-") s2.push_back('K');
            else if(s1==".-..") s2.push_back('L');
            else if(s1=="--") s2.push_back('M');
            else if(s1=="-.") s2.push_back('N');
            else if(s1=="---") s2.push_back('O');
            else if(s1==".--.") s2.push_back('P');
            else if(s1=="--.-") s2.push_back('Q');
            else if(s1==".-.") s2.push_back('R');
            else if(s1=="...") s2.push_back('S');
            else if(s1=="-") s2.push_back('T');
            else if(s1=="..-") s2.push_back('U');
            else if(s1=="...-") s2.push_back('V');
            else if(s1==".--") s2.push_back('W');
            else if(s1=="-..-") s2.push_back('X');
            else if(s1=="-.--") s2.push_back('Y');
            else if(s1=="--..") s2.push_back('Z');
            else if(s1=="-----") s2.push_back('0');
            else if(s1==".----") s2.push_back('1');
            else if(s1=="..---") s2.push_back('2');
            else if(s1=="...--") s2.push_back('3');
            else if(s1=="....-") s2.push_back('4');
            else if(s1==".....") s2.push_back('5');
            else if(s1=="-....") s2.push_back('6');
            else if(s1=="--...") s2.push_back('7');
            else if(s1=="---..") s2.push_back('8');
            else if(s1=="----.") s2.push_back('9');
            else if(s1==".-.-.-") s2.push_back('.');
            else if(s1=="--..--") s2.push_back(',');
            else if(s1=="..--..") s2.push_back('?');
            else if(s1==".----.") s2.push_back(39);
            else if(s1=="-.-.--") s2.push_back('!');
            else if(s1=="-..-.") s2.push_back('/');
            else if(s1=="-.--.") s2.push_back('(');
            else if(s1=="-.--.-") s2.push_back(')');
            else if(s1==".-...") s2.push_back('&');
            else if(s1=="---...") s2.push_back(':');
            else if(s1=="-.-.-.") s2.push_back(';');
            else if(s1=="-...-") s2.push_back('=');
            else if(s1==".-.-.") s2.push_back('+');
            else if(s1=="-....-") s2.push_back('-');
            else if(s1=="..--.-") s2.push_back('_');
            else if(s1==".-..-.") s2.push_back('"');
            else if(s1==".--.-.") s2.push_back('@');
        }
        //cout<<s2[32]<<endl;
        long long  j=0,i=0;
        printf("Message #%lld\n", cc+1);
        while(i<s3.size()){
            if(s3[i]==' '){
                cout<<s2[j];//<<" "<<j<<endl;
                j++;
                if(j==s2.size()) break;
                if(s3[i+1]==' '){
                    printf(" ");
                    i++;
                }
            }
            i++;
        }
        if(j!=s2.size()) cout<<s2[s2.size()-1];
        if(cc!=t-1) printf("\n\n");
        else printf("\n");
    }
    return 0;
}
/*
4
    .    .   
    .    .
.         .
         .

*/
