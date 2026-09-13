class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
        vector<double> vec(2);
        double kelvin = celsius +273.15;
        double fahrenheit = (celsius*1.80)+32.00;
        vec[0]=kelvin;
        vec[1]=fahrenheit;
        return vec;
    }
};