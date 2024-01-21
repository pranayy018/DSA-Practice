#include <iostream>
using namespace std;

void extremePrint(int arr[], int n){
  int left = 0;
  int right = n-1;

  for(int i =0 ;i<n;i++){
    while(left<right){
      cout<<arr[left++]<<" ";
      cout<<arr[right--]<<" ";
    }
  }

}

int main() {
  int arr[8] = {1,2,3,4,5,6,7,8};
  extremePrint(arr, 8);
}
