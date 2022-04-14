class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        int elem = first;
        res.push_back(elem);
        for(int i = 0; i<encoded.size(); i++){
            elem = encoded[i] ^ elem;
            res.push_back(elem);
        }
        return res;
    }
};