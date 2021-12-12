// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
​
class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        int firstBad=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool isBadResult = isBadVersion(mid);
            
            if(isBadResult==true){
                firstBad=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        return firstBad;
    }
};
