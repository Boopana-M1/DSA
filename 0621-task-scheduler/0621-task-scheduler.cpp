class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mpp;
        priority_queue<int>pq;
        int cycle = n+1;
        for(char ch:tasks)
        {
            mpp[ch]++;
        }
        for(auto& num:mpp)
        {
            pq.push(num.second);
        }
        int time = 0;

        while(!pq.empty())
        {
            int i=0;
            vector<int>temp;
            while(i<cycle && !pq.empty())
            {
                int cnt = pq.top();
                pq.pop();
                cnt--;
                if(cnt>0)
                {
                    temp.push_back(cnt);
                }
                i++;
                time++;
            }
            for(int num:temp)
            {
                pq.push(num);
            }
            if(pq.empty())break;
            time+=(cycle-i);

        }
        return time;
    }
};