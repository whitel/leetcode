class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int res = 0;
        unordered_set<int> buf;
        for(int x = 0; x < n; x++) {
            int cnt = 0;
            for(int y = x; y < n; y++) {
                if(buf.count(s[y]) == 0) {
                    buf.insert(s[y]);
                    cnt++;
                } else {
                    res = max(res, cnt);
                    buf.clear();
                    break;
                }
                if(cnt != 0 && y == n - 1) {
                    res = max(res, cnt);
                }
            }
        }
        return res;
    }
};
