class Solution {
public:
    string convertToBase7(int num) {
        string a="";
        string b="";
        if(num==0){
            return "0";
        }
        if(num<0){
            num=-num;
            a="-";
        }
        while(num>0){
            b=to_string(num%7)+b;
            num=num/7;
        }
        return a+b;
    }
};