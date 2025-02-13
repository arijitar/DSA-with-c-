#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
  for(int i = 0; i < n; i++){
    if(arr[i] == target) { 
       return i; //FOUND
    }
  }
  return -1; //NOT FOUND
}

int main(){
 int arr[] = {4, 2, 7, 8, 1, 2, 5};
 int n = 7;
 int target = 5;

 cout << linearSearch(arr, n, target) << endl;
 return 0;
}

// TIME COMPLEXITY OF LINEAR SEARCH IS = O(n) which represents it is linear.