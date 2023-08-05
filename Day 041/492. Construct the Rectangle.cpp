class Solution {
public:
    vector<int> constructRectangle(int area) {
        int m = sqrt(area);
        int n;
        vector<int> a;
        for(int i = m;i >0;i--){
            if (area % i ==0){
                n=i;
                break;
            }
        }
        a.push_back(area/n);
        a.push_back(n);
        return a;
    }
};