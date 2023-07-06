class Solution {

public:
    int cal(vector<int>& p1, vector<int>& p2) {
        return pow((p1[0] - p2[0]),2) + pow((p1[1] - p2[1]),2);
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int l1 = cal(p1, p2);
        int l2 = cal(p2, p3);
        int l3 = cal(p3, p4);
        int l4 = cal(p4, p1);
        int d1 = cal(p1, p3);
        int d2 = cal(p2, p4);

        if (l1 == l2 && l2 == l3 && l3 == l4 && d1 == d2 && l1 != 0 && d1 != 0) {
            return true;
        } else {
            return false;
        }
    }
};