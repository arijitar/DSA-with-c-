#include <iostream>
using namespace std;

int main(){
  int nums[]= {5, 15, 22, -15, 14, 24};
  int size = sizeof(nums) / sizeof(nums[0]);

  int smallest;
  int largest =  nums[0];

  for(int i=0; i<size; i++){
    // smallest = min(nums[i], smallest);
    largest = max(nums[i], largest);
    if(nums[i] < smallest){
      smallest = nums[i];
    }
  }

  cout << "smallest = " << smallest << endl;
  cout << "largest = " << largest << endl;
  return 0;
}