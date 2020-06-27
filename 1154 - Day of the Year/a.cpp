class Solution {
public:
    int dayOfYear(string& date) {
        stringstream ss(date);
        int year, month, day;
        ss >> year;
        ss.ignore(1);
        ss >> month;
        ss.ignore(1);
        ss >> day;
        bool isVis = false;;
        vector<int> monthsNo = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> monthYes = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            isVis = true;
        }
        int sum = 0;
        if (isVis) {
            for (int i = 0; i < month - 1; ++i) {
                sum += monthYes[i];
            }
            sum += day;
            return sum;
        } else {
            for (int i = 0; i < month - 1; ++i) {
                sum += monthsNo[i];
            }
            sum += day;
            return sum;
        }
    }
};
