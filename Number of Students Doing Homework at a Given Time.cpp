class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int students=0;
        for(int i=0;i<startTime.size();i++){
            if((queryTime<endTime[i] && queryTime>startTime[i])||queryTime==endTime[i]||queryTime==startTime[i])
                students++;
        }
        return students;
    }
};
