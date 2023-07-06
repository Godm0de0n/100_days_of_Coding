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
        set<int> s;
        s.insert(l1);
        s.insert(l2);
        s.insert(l3);
        s.insert(l4);
        s.insert(d2);
        s.insert(d1);
        if (l1==0 || l2==0 || l3==0 || l4==0 || d1==0 || d2==0){

            return false;
        }
        if (s.size()==2) {
            return true;
        } else {
            return false;
        }
    }
};