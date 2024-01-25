class Solution {
public:
    void rotate(vector<int>& arr, int d ) {

        int n = arr.size();

        if(n==0 ){
            return;
        }

        d = d % n;

        if( d == 0){
            return;
        }

        vector <int> temp(d);

        for(int i = n-d ; i<n ;i++){
            temp[i-(n-d)] = arr[i];
        };

        for(int i = n-d-1 ;i >=0 ;i--){
            arr[i+d] = arr[i];
        }

        for(int i =0 ;i< d;i++){
            arr[i] = temp[i];
        }
        
    }
};
