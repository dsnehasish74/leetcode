class Solution {
public:
    void reverseString(vector<char>& s) {
        /************ Recursion *********************
        if(s.size()==0)return;
        char temp=s[0];
        s.erase(s.begin()+0);
        
        reverseString(s);
        s.push_back(temp);
        
        ********************************************/
        
        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-i-1]);
        }
        
       
    }
};
