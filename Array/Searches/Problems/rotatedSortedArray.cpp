#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target) {
       int st = 0;
       int end = nums.size()-1;

       while(st<=end){
         int mid = st + (end-st)/2;
         if(nums[mid]==target){
            return true;
         }
         if(nums[st]==nums[mid]&& nums[mid]==nums[end]){
           ++st;
           --end;
         }
         else if(nums[st] <= nums[mid]){ //left sorted
            if(nums[st] <= target && target <= nums[mid]){
               end=mid-1;
            }else{
                st=mid+1;
            }
         }
         else { //right sorted
            if(nums[mid] <= target && target <= nums[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
          }
        }
    return false;
    }
int main(){
  vector<int> arr1 = {1,0,1,1,1};//output idx
  int tar1 = 0;
  
  cout<< search(arr1, tar1)<<endl;

  vector<int>arr2 = {2,5,6,0,0,1,2};
  int tar2 = 3;
  cout<< search(arr2, tar2)<<endl;
}