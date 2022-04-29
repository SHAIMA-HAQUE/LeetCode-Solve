class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size()+1;
        int allxor = 0;
        for(int i = 1;i<=n;i++){
            allxor ^= i;
        }
        int oddEncodedXor = 0;
        for (int i = 1; i < n; i += 2) {
            oddEncodedXor = oddEncodedXor ^ encoded[i];
        }
        int firstElement = allxor ^ oddEncodedXor;
        vector<int> res = {firstElement};
        for (int el : encoded) {
            res.push_back(res.back() ^ el);
        }
        return res;
    }
};