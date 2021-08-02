class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
         int i=0,j=0;
           while(i<n && j<m){
                if(arr1[i]<=arr2[j]){
                    i++;
                }else{
                    swap(arr1[i],arr2[j]);
                    for(int k=j+1;k<m;k++){
                        if(arr2[k]<arr2[k-1])swap(arr2[k],arr2[k-1]);
                    }
                    
                    i++;
                }
            }
        for(int i=0;i<m;i++){
            arr1[n+i]=arr2[i];
        }
    }
};
