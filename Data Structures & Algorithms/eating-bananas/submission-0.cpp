class Solution {
public:
    long long hoursTakenCalculated(vector<int>& piles, int h)
    {
        long long res = 0;
        for(int i = 0;i<piles.size();i++)
        {
            res = res + ceil((double)piles[i]/h);
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = 1000000000;
        int ans;
        while(start<=end)
        {
            int mid = end + (start-end)/2;
            long long hoursTaken = hoursTakenCalculated(piles,mid);
            if(hoursTaken<=h)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid+1;
            }

        }
        return ans;
    }
};
