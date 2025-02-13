#include<iostream>
#include<vector>
using namespace std;



int main(){
vector<int> vec={1, 2, 3, 4, 5} ;
//Erase TC(O(n))

vec.erase(vec.begin()+2);

//insert TC(O(n))

vec.insert(vec.begin(),3);

//Clear

vec.clear();
for(  int num : vec ) {
  cout << num << endl;
}
cout << endl;
// Empty

cout << "is empty: " << vec.empty() << endl;
return 0;
}

