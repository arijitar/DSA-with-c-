#include<iostream>

using namespace std;

void changeArr(int arr[], int sz){
  for(int i=0; i<sz; i++){
    arr[i] = 2*arr[i];
  }
}


int main(){
   int arr[] = {1, 2, 4, 5};
   int n = 4;

   changeArr(arr,n);
   for(int i=0; i<n; i++){
     cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
}