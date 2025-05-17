class Solution {
public:
    bool isIsomorphic(string s, string t) {
            int hashArray[256] = {0};
            int hashArray2[256] = {0};

            for(int i = 0; i < s.size(); i++){
                if(hashArray[s[i]] > 0 && hashArray[s[i]] != t[i] ||
                 hashArray2[t[i]] > 0 && hashArray2[t[i]] != s[i] ){
                    return false;
                }
                hashArray[s[i]] = t[i];
                hashArray2[t[i]] = s[i];
            }

            return true;
    }
};