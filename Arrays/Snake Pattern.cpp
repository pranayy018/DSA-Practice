class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        
        vector<int> ans;
        
        for(int row =0 ; row< matrix.size() ;row++){
            if(row &1){
                for(int col = matrix[0].size()-1 ; col>=0 ;col--){
                    ans.push_back(matrix[row][col]);
                }
            }
            else{
                for(int col =0 ;col< matrix[0].size() ;col++){
                    ans.push_back(matrix[row][col]);
                }
            }
        } 
        return ans;
    }
};
