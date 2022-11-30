class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map <int, int> map;
        
        for(int i = 0;i < n ;i++){
            map[arr[i]]++;
        }
        unordered_set<int> s;
        
        for(auto x: map){
            if(s.count(x.second)){
                return false;
            }
            s.insert(x.second);
        }
       return true; 
    }
};