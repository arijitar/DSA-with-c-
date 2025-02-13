#include<iostream>
#include<deque>
using namespace std;

int main(){
  //Create
  deque<int> d = {1,2,3,4,5};
  
  for(int val:d){
    cout << val << " ";
  }
  cout << endl;

  cout << d[2] << endl;
  return 0;
}

/*Deque also a sequential container which is Double Ended Queue, very similar to a list.It is like dynamic arrays that is why random access is possible in deque. e.g. d[0],d[1] gives the according index values. whereas l[0], l[1] cannot give output.*/