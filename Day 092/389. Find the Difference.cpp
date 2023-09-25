class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        for(auto x:t){
            if(m.find(x)==m.end()){
                return x;
            }
            if(m[x]>1){
                m[x]--;
            }
            else{
                m.erase(x);
            }   
        }
        return '1';
        
    }
};