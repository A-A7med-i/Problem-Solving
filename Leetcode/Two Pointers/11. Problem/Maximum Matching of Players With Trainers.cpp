#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int count = 0;

        int playerPtr  = 0;
        int trainerPtr = 0;


        while (playerPtr  < players.size() && trainerPtr < trainers.size()) {

            if (players[playerPtr ] <= trainers[trainerPtr]) {
                count++;
                playerPtr ++;
                trainerPtr++;
            }

            else
                trainerPtr++;
        }

        return count;
    }
};
