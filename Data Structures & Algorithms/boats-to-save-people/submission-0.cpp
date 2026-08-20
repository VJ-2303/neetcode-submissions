class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int i = 0, j = people.size() - 1;
        int boats = 0;

        int curr = 0;

        while (i <= j) {
            int curr = people[j--];
            boats++;
            if(curr + people[i] <= limit) {
                i++;
            }
        }
        return boats;
    }
};