class Solution {
    private:
        static bool compare(vector<int>a, vector<int> b){
            return a[1]>b[1];
        }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int totalUnits = 0, i = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        while (truckSize>0 && i<boxTypes.size()){
            
            // if current boxes is <= truckSize, that means we can take the entire current box
            if(boxTypes[i][0] <= truckSize){
                totalUnits += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            
            // if current boxes is > truckSize, we can only take a fraction from the current boxes
            else{
                
                int canTakeBoxes = truckSize;
                truckSize -= canTakeBoxes; // here truckSize = 0 
                totalUnits += canTakeBoxes * boxTypes[i][1]; 
            }
            
            // iterate the loop
            i++;
    }
        return totalUnits;
    }
};