// I/P => arr[5] = {1,2,3,4,10};
// O/P => max = 10;


#include <iostream>
using namespace std;

void findMax(int arr[], int n){
  int max = INT8_MIN;

  for(int i =0;i<n;i++){
    if(arr[i]> max){
      max = arr[i];
    }
  }
  
  cout<<"Maximum number in the array is "<<max<<endl;
}

int main() {
  int arr[5] = {1,2,3,4,10};
  findMax(arr, 5);
}
