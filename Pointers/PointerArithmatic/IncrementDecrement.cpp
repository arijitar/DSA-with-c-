#include<iostream>
#include<vector>
using namespace std;

int main(){
  
  int a=10;
  int *ptr= &a;

  cout << ptr << endl;
//ptr++;
  ptr--;
  cout<< ptr << endl; //+4 bytes for integer
  return 0;
}