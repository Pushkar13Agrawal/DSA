class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int LandFirst = INT_MAX;
        int WaterFirst = INT_MAX;
        int land_water = INT_MAX;
        int water_land = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            LandFirst = min(LandFirst, landStartTime[i] + landDuration[i]);
        }

        for (int i = 0; i < waterStartTime.size(); i++) {
            WaterFirst = min(WaterFirst, waterStartTime[i] + waterDuration[i]);
            land_water = min(land_water, max(waterStartTime[i], LandFirst) +
                                             waterDuration[i]);
        }

        for (int i = 0; i < landStartTime.size(); i++) {
            water_land = min(water_land, max(WaterFirst, landStartTime[i]) +
                                             landDuration[i]);
        }
        
        return min(land_water,water_land);
    }
};