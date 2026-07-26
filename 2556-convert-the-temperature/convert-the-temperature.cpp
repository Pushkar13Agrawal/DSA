class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelv= celsius + 273.15;
        double Faren = celsius * 1.80 + 32.00;
        return {kelv,Faren};
    }
};