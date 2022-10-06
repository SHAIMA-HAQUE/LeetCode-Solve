class TimeMap {
public:
    map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        mp.clear();
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp){
        if(!mp[key].size()) return "";
        int l=0,r=mp[key].size()-1,mid;
        string ans="";
        while(l<=r){
            mid=l+(r-l)/2;
            if(mp[key][mid].first==timestamp) return mp[key][mid].second;
            if(mp[key][mid].first>timestamp) r=mid-1;
            else l=mid+1,ans=mp[key][mid].second;
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */