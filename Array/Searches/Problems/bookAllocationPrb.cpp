#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int stu=1, pages=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(pages+arr[i]<=maxAllowedPages){
            pages += arr[i];
        }else{
            stu++;
            pages=arr[i];
        }
    }
    return stu > m ? false : true;
}
int allocateBooks(vector<int> &arr, int n, int m) {
    // code here
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans = -1;
    int st=0, end = sum; //ranges of possible answers
    
    while(st<=end){
        int mid=st + (end-st)/2;
        
        if(isValid(arr,n,m,mid)){//left
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
  vector<int> arr = {22, 23, 67};
  int n=3, m=1;

  cout<< allocateBooks(arr,n,m)<< endl;
  return 0;
}