// I/P => arr[5] = {0,1,0,1,1};
// O/P => NumZero = 2 , NumOne = 3;
          


#include <iostream>
using namespace std;

void counting(int arr[] , int size){
  int numZero = 0;
  int numOne = 0;

  for(int i = 0; i < size; i++){
    if(arr[i] == 0){
      numZero++;
    }
    else{
      numOne++;
    }
  }

  cout<<"Number of zeroes are: "<<numZero<<endl;
  cout<<"Number of ones are: "<<numOne<<endl;
  
}

int main() {
  int arr[5] = {0,1,0,1,1};

  counting(arr, 5);
}
