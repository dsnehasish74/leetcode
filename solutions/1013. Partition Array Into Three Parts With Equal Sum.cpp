class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(auto it: arr){
            sum+=it;
        }
        
        if(sum%3!=0)return false;
        int c=0;
        sum/=3;
        int s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            if(s==sum){
                s=0;
                c++;
            }
        }
        
        return c>=3;
    }
};
