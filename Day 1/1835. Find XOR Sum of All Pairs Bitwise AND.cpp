class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int m =0,n =0 ;
        for (int i=0;i<arr1.size();i++){
            m = m ^ arr1[i];
        }
        for (int j=0;j<arr2.size();j++){
            n = n ^ arr2[j];
        }
        return (m & n);
    }
};