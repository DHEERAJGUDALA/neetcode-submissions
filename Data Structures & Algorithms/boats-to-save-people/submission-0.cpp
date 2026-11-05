class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int s=0,e=people.size()-1;
        int ans=0;
        while(s<=e){
            if(people[s]+people[e] <= limit){
                ans++;
                s++,e--;
            }
            else {
                ans++;
                e--;
            }
        }
        return ans;
    }
};