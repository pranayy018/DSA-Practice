#include<iostream>
#include<vector>

using namespace std;

int firstOccurence(vector<int>arr, int target){
  int s = 0;
  int e = arr.size() - 1;

  int ans = -1;

  int mid = s +(e-s)/2;

  while(s<=e){
    if(arr[mid] == target){
      ans = mid;
      e = mid - 1;
    }
    else if(target > arr[mid]){
        s= mid+1;
    }
    else{
        e= mid-1;
    }
    
    mid = s+(e-s)/2;
    
  }
  return ans;
  
}


int lastOccurence(vector<int> a , int target){
    int s = 0;
    int e = a.size() -1;
    
    int ans = 1;
    
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(a[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid] > target){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

  vector<int> a {1,2,5,5,5,6,7};
  int target = 5;

  int index = firstOccurence(a, target);
  int index2 = lastOccurence(a, target);
  
  cout<<index<<endl;
  cout<<index2<<endl;
  
}
