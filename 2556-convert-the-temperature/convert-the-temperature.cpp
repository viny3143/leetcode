class Solution 
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double>vec;
        double kel = celsius + 273.15;
        vec.push_back(kel);
        double fah = celsius * 1.80 + 32.00;
        vec.push_back(fah);
        return vec;
    }
};