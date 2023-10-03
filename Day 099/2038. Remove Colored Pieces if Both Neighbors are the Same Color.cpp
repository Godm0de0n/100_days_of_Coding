class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        if(n<3){
            return false ; 
        }
        int countA = 0;
        int countB = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            if(i-start+1==3){
                if(colors[i]==colors[start] and colors[start]==colors[start+1] and colors[start]=='A'){
                    countA++;
                }
                else if(colors[i]==colors[start] and colors[start]==colors[start+1] and colors[start]=='B'){
                    countB++;
                }    
                start++;
            } 
        }
        if(countA<=countB) return false;
        return true;
    }
};