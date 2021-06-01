class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
​
/**************************First Method***************************************
    
        int row=-1;
        for(int i=0;i <(int)matrix.size();i++){
            if(target>=matrix[i][0])row=i;
        }
        if(row==-1)return false;
        int start=0,end=(int)matrix[0].size()-1;
        while(start<=end){
            int mid=end-(end-start)/2;
            if(matrix[row][mid]==target)return true;
            else if(matrix[row][mid]<target)start=mid+1;
            else end=mid-1;
        }
        
        return false; 
​
*******************************************************************************/
        
        int m=matrix.size(),n=matrix[0].size();
        int start=0,end=n*m-1;
        
        while(start<=end){
            int mid=end-(end-start)/2;
            int mid_ele=matrix[mid/n][mid%n];
            
            if(mid_ele==target)return true;
            else if(mid_ele<target)start=mid+1;
            else end=mid-1;
            
        }
        
        return false;
    }
};
​
