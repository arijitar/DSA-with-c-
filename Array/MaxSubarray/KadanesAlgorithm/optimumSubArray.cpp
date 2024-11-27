#include<iostream>
#include<vector>
using namespace std;

int main(){
int n = 7;
int maxSum = 0;
int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};

for(int st = 0; st<n; st++){
  int currSum = 0;
  for(int end=st; end<n; end++){
      currSum += arr[end];
      maxSum = max(currSum, maxSum);
      if(currSum < 0){
         currSum = 0;
      }
  }
}
cout << "max subarray sum = " << maxSum << endl;
return maxSum;
}