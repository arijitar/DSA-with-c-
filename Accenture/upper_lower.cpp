#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;

  int upr_cnt = 0;
  int lwr_cnt = 0;

  for(int i=0; i<s.length(); i++){
    if(s[i]>=65 and s[i]<=90)
       upr_cnt++;
    if(s[i]>=97 and s[i]<=122)
      lwr_cnt++;
  }
  if(lwr_cnt>upr_cnt){
    for(int i=0; i<s.length(); i++){
      if(s[i]>=65 and s[i]<=90){
        s[i]=s[i]+32;
      }
    }
  }

  if(upr_cnt>lwr_cnt){
    for(int i=0; i<s.length(); i++){
     if(s[i]>=97 and s[i]<=122){
        s[i]=s[i]-32;
    }
  }
}
 cout<<s<<endl;
}
