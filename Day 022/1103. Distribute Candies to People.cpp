class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> a(num_people,0);
        int i =0;
        while(candies != 0){
            a[i%num_people]+=min(i+1,candies);
            candies-=min(i+1,candies);
            i++;
        }
        return a;
    }
};