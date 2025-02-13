// 'at' function

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec;

  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  vec.push_back(55);

  cout << vec.at(1) << endl;
  cout << vec.at(3) << endl;

  return 0;
}