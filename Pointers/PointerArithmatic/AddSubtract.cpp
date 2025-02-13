#include<iostream>
#include<vector>
using namespace std;

int main(){
  
//   int a=10;
//   int *ptr= &a;

//   cout << ptr << endl;
// //ptr++;
//   ptr = ptr + 2;
//   cout<< ptr << endl; //+4 bytes for integer
  int arr[] = {1, 2, 3, 4, 5};

  cout << *arr << endl;
  cout << *(arr+1) << endl;
  cout << *(arr+2) << endl;
  cout << *(arr+3) << endl;
  return 0;
}