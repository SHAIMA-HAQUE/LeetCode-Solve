class MyCalendarThree {
public:
    map<int, int>m;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int count=0;
        int res=0;
        for(auto it: m){
            count+=it.second;
            res=max(res, count);
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */