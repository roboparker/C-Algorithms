class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;

        for(vector<int> interval : intervals)
        {
            if(merged.empty())
            {
                merged.push_back(interval);
                continue;
            }

            if(merged.back()[1] < interval[0])
            {
                merged.push_back(interval);
                continue;
            }

            merged.back()[1] = max(merged.back()[1], interval[1]);
        }

        return merged;
    }
};
