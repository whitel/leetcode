class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length() - 1;
        int len2 = num2.length() - 1;
        int add = 0;
        string ans = "";
        while(len1 >= 0 || len2 >= 0 || add != 0) {
            int x = len1 >= 0 ? num1[len1] - '0' : 0;
            int y = len2 >= 0 ? num2[len2] - '0' : 0;
            int result = x + y + add;
            ans.push_back('0' + result % 10);
            add = result / 10;
            len1--;
            len2--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
