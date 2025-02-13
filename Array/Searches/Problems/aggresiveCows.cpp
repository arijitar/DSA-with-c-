#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// check if it is possible to arrange k cows with keeping atleast 'gap' distance between them
bool solve(int gap, int k, vector<int>&arr){
  int prev = arr[0];
  k--;
  for(int i = 1; i<arr.size(); ++i){
      if(arr[i]-prev>=gap){
          k--;
          prev = arr[i];
      }
      if(k==0){return true;}
  }
  return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
  sort(stalls.begin(),stalls.end());
  int n = stalls.size();

  int l = 1;  // min possible distance.. 0 is min possible logically if all cows placed at the same place.
              // So we initialize our ans = 0 since it is min possible
  int r = stalls[n-1]-stalls[0];   // this is max possible distance 

  int ans = 0;
  while(l<=r){
      int m = l+(r-l)/2;

      // check if it is possible to arrange k cows with keeping atleast 'm' distance between them
      if(solve(m,k,stalls)){
          ans = m;
          l = m+1;
      }
      else{
          r = m-1;
      }
  }
  return ans;
}

int main(){
  
  vector<int> arr = {1,2,8,4,9};
  int N=5, C=3;

  cout<< aggressiveCows(arr,C)<< endl;
  return 0;
}