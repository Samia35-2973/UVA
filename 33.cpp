#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void startTheEngine(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}
int lcslen = 0,fg=0;
int dp[MAX][MAX];

int lcs(string str1, string str2, int len1, int len2, int i, int j)
{
  int &ret = dp[i][j];
  if (i==len1 || j==len2)
    return ret = 0;
  if (ret != -1)
    return ret;

  ret = 0;
  if (str1[i] == str2[j])
    ret = 1 + lcs(str1, str2, len1, len2, i+1, j+1);
  else
    ret = max(lcs(str1, str2, len1, len2, i+1, j),
        lcs(str1, str2, len1, len2, i, j+1));
  return ret;
}

void printAll(string str1, string str2, int len1, int len2, char data[], int indx1, int indx2, int currlcs)
{
  if (currlcs == lcslen && fg==0)
  {
    data[currlcs] = '\0';
    puts(data);
    fg=1;
    return;
  }
  if (indx1==len1 || indx2==len2 && fg==0)
    return;
  for (char ch='a'; ch<='z' && fg==0; ch++)
  {
    bool done = false;

    for (int i=indx1; i<len1 && fg==0; i++)
    {
      if (ch==str1[i])
      {
      for (int j=indx2; j<len2 && fg==0; j++)
      {
        if (ch==str2[j] && dp[i][j] == lcslen-currlcs  && fg==0)
        {
          data[currlcs] = ch;
          printAll(str1, str2, len1, len2, data, i+1, j+1, currlcs+1);
          done = true;
          break;
        }
      }
      }
      if (done)
        break;
    }
  }
}
void prinlAllLCSSorted(string str1, string str2)
{
  int len1 = str1.length(), len2 = str2.length();
  memset(dp, -1, sizeof(dp));
  lcslen = lcs(str1, str2, len1, len2, 0, 0);
  char data[MAX];
  printAll(str1, str2, len1, len2, data, 0, 0, 0);
}
int main()
{
  startTheEngine();
  int t;
  cin>>t;
  for(int cc=0;cc<t;cc++){
    fg=0;
    string str1,str2;
    cin>>str1>>str2;
    printf("Case %d: ", cc+1);
    prinlAllLCSSorted(str1, str2);
  }
  return 0;
}
