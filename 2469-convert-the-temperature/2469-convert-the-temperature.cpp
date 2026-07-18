class Solution {
public:
    vector<double> convertTemperature(double celsius) {
    double F =(celsius*1.8) + 32;
    double K = celsius + 273.15;
    vector<double>temp;
    temp.push_back(K);
    temp.push_back(F);
    return temp; 
    }
};