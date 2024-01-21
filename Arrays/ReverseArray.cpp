// I/P => arr[8] = {1,2,3,4,5,6,7,8};
// O/P => 8,7,6,5,4,3,2,1;

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
  int left = 0;
  int right = n-1;

  for(int i =0 ;i<n;i++){
    while(left<right){
      swap(arr[left++], arr[right--]);
    }
  }

  for(int i =0 ;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  int arr[8] = {1,2,3,4,5,6,7,8};

  reverseArray(arr, 8);
}
