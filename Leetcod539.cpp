class Solution {
public:
    int findMinDifference(vector<string>& timePoints) { 
        //step1 : convert time string into minutes integer value
        vector<int>minutes;

        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i]; // ith index pr jo string pdi hai timepoints array wo nikal li

            int hours = stoi(curr.substr(0,2) ); // current string k shuru k do (hour) wale 2 no nikal liye or string kpo integer mh convert krdiya
            int minuts=stoi( curr.substr(3,2)); //  3rd index sey start kro or do charcter utha liye
            int totalMinutes = hours*60 + minuts;
            minutes.push_back(totalMinutes); // minutes wali array meh total minutes daal diye ab array mh bs minutes bache hoyenge 
        }

        //Step2: Sort
        sort(minutes.begin(), minutes.end());

        //stsep3: differnec and calculate min diff
        int mini = INT_MAX;
        int n=minutes.size();

        for(int i=0; i<n-1; i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini, diff); //difference or mini mh jo chota hoga return hojayega

        }
        //something missing yehi rh jata hai  basss
        int lastDiff = (minutes[0] + 1440) - minutes[n-1]; 
        mini =min(mini, lastDiff);

        return mini;
    }
};
