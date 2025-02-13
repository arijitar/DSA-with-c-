#include<iostream>
#include<vector>
using namespace std;



int main(){
vector<int> vec={1, 2, 3, 4, 5};

//vec.begin(), vec.end()

cout << "vec.begin: " << *(vec.begin()) << endl;
cout << "vec.end: " << *vec.end() << endl;

//Iterator
vector<int>::iterator it;
for(it = vec.begin(); it!=vec.end(); it++){
  cout << *(it) << endl;
}

//Reverse Iterator
//vector<int>::reverse_iterator itr; //auto is the alternative of this syntax that automatically understand the syntax without define it individually 
for(auto itr = vec.rbegin(); itr!=vec.rend(); itr++){
  cout << *(itr) << endl;
}
return 0;
}