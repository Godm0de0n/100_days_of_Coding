class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol=(long long)(length)*(long long)(width)*(long long)(height);

			bool a= (vol>=1000000000 || (length>=10000 || width>=10000 || height>=10000));
			bool b= mass>=100;

			if(a && b){
				return "Both";
			}
			else if(a){
				return "Bulky";
			}
			else if(b){
				return "Heavy";
			}
			else{
				return "Neither";
			}
    }
};