// push back and pop back;

#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<float> vec;
  
  cout << "size = "<< vec.size() << endl;

  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  vec.emplace_back(3644);
  
  
  
  cout << "after push back size = "<< vec.size() << endl;
  cout << "after push back capacity = "<< vec.capacity() << endl;
//Capacity of the vectors are being double after every previous capacity filled.

  

  cout<< "front = " << vec.front() <<endl;
  cout << "back =" << vec.back() << endl;


  return 0;
}