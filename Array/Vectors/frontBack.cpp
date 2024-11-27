// front and back;

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec;
  
  cout << "size = "<< vec.size() << endl;

  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  vec.push_back(55);
  
  cout << "after push back size = "<< vec.size() << endl;

  cout<< vec.front() <<endl;
  cout<< vec.back() <<endl;

  return 0;
}