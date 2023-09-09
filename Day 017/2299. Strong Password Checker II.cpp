class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8){
            return 0;
        }
        bool l=0,u=0,d=0,sp=0;
        for(int i=0;i<password.size();i++){
            if(i+1<password.size() && password[i]==password[i+1]){
                return false;
            }
            if(password[i]>='A' && password[i]<='Z'){
                u=1;
            }
            else if(password[i]>='a' && password[i]<='z'){
                l=1;
            }
            else if(password[i]>='0' && password[i]<='9'){
                d=1;
            }
            else {
                sp=1;
            }
        }
    return (l & u & d & sp);
    }
};