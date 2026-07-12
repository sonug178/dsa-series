class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
    int s =stoi(endTime.substr(6,8))-stoi(startTime.substr(6,8));
   int m = (stoi(endTime.substr(3,5))-stoi(startTime.substr(3,5)))*60;
   int h = (stoi(endTime.substr(0,2))-stoi(startTime.substr(0,2)))*3600;
   int t = s + m + h;
   
   return t;
    }
};