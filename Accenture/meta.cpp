#include<bits/stdc++.h>
using namespace std;

int Count_Meta(int N){
int count = 0;
for(int i=1; i<=N; i++){
  if(i%1==0 && i%2==0 && i%4==0 && i%8==0 && i%10!=0){
    count++;
  }
}
return count;
}

int main(){
  int n;
  cin>>n;

  int ans = Count_Meta(n);
  cout<<ans;
  return 0;
}