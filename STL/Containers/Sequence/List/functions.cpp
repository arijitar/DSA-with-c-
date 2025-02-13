#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> l;
  
/*Push_back
  Push_front */
  l.push_back(1);
  l.push_back(2);
  l.push_front(3);
  l.push_front(5);

/* Size, erase, clear, begin, end, rbegin, rend, insert, front, back are all the functions exist in list.*/
  for(int val: l){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}

/*Lists are also sequential containers like vectors and internally implemented as doubly linked list. Because of doubly linked-list there are front operations as well as back operations.e.g. 1.push_back & push_front. 2.emplace_back & emplace_front. 3. pop_back & pop_front.*/