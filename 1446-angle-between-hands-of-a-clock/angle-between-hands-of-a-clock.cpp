class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angleMin=minutes* 360/60;
        double angleHour=hour*30 + minutes*0.5;
        double ans=abs(angleMin-angleHour);
        ans=min(ans,360-ans);
        return ans;
    }
};