class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int p = sqrt(total);
        if (total== p*p){
            return p;
        }
        else{
            return -1;
        }
    }
};