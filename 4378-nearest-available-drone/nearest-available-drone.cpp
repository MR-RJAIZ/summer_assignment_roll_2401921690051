#include<cmath>
#include<climits>

using namespace std;

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mindist = INT_MAX;
        int bestidx = -1;

        int targetX = target[0];
        int targetY = target[1];

        for(int i = 0; i < drones.size(); ++i){
            int droneX = drones[i][0];
            int droneY = drones[i][1];
            int range = drones[i][2];

            int crntdist = abs(droneX - targetX) + abs(droneY - targetY);

            if(crntdist <= range && crntdist < mindist){
                mindist = crntdist;
                bestidx = i;
            }
        }
        return bestidx;
    }
};