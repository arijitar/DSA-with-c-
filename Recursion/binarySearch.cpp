#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int> arr, int target,int st, int end){
   int mid = st+ (end-st)/2;

  if(target > arr[mid]){
    return recBinarySearch(arr, target, mid+1, end);
  }
  else if(target < arr[mid]){
    return recBinarySearch(arr, target, st, mid-1);
  }
  else{
    return mid;
  }
  return -1;
}

int main(){
  vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //output idx
  int tar1 = 12;
  cout<<recBinarySearch(arr1, tar1, 0, 7)<<endl;

  vector<int>arr2 = {-1, 0, 3, 5, 9, 12};
  int tar2 = 5;
  cout<<recBinarySearch(arr2, tar2, 0, 6)<<endl;
}