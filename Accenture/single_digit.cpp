#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  while(n>=10){
    if(n%2!=0){
      n = floor(n/2);
    }
    else if(n%2==0){
      n = floor((n-2)/2);
    }
  }
  cout<<n<<endl;
  return 0;
}