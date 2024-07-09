class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double totalWaitTime = 0;
        int currentTime = 0;

        for(auto &time : customers){
            int arrivalTime = time[0];
            int cookTime = time[1];

            if(arrivalTime > currentTime) currentTime = arrivalTime;
        

        int waitTime = currentTime + cookTime - arrivalTime;
        totalWaitTime += waitTime;

        currentTime += cookTime;
        }
    return totalWaitTime/n;
    }
};