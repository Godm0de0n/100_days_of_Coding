class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); ++i) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());

        double time = 0;
        int fleets = 0;
        int carCount = cars.size();

        for (int i = 0; i < carCount; i++) {
            int p = cars[i].first;
            int s = cars[i].second;

            double current_time = static_cast<double>(target - p) / s;

            if (time < current_time) {
                time = current_time;
                fleets++;
            }
        }
        return fleets;
    }
};