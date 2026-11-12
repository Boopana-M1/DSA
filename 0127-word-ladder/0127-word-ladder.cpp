class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& list) {
      queue<pair<string,int>>q;
      unordered_set<string>s(list.begin(),list.end());
      if(s.find(end)==s.end())return 0;
      q.push({begin,1});
      s.erase(begin);
      while(!q.empty())
      {
        string word = q.front().first;
        int level = q.front().second;
        q.pop();
        if(word == end)return level;
        for(int i=0;i<word.size();i++){
            char org = word[i];
            for(char c='a';c<='z';c++)
            {
                if(c==org)continue;
                word[i]=c;
                if(s.find(word)!=s.end())
                {

                    s.erase(word);
                    q.push({word,level+1});
                }
            }
            word[i]=org;
        }
       
      }
return 0;
    }
};