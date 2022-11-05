#include <queue>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <vector<int>> heap;
        vector<vector<int>> v(k);
        for(int i = 0;i < points.size();i++){
            int x = points[i][0], y = points[i][1];
            heap.push({x*x + y*y, x, y});
            if(heap.size() > k){
                heap.pop();  
            }
        }
        for(int i= 0;i<k;i++){
            vector<int> top = heap.top();
            heap.pop();
            v[i] = {top[1], top[2]};
        }
        return v;
    }
};