class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int value1 = 0;
            int value2 = 0;
            if (s[i] == 'I') {
                value1 = 1;
            } else if (s[i] == 'V') {
                value1 = 5;
            } else if (s[i] == 'X') {
                value1 = 10;
            }  else if (s[i] == 'L') {
                value1 = 50;
            } else if (s[i] == 'C') {
                value1 = 100;
            } else if (s[i] == 'D') {
                value1 = 500;
            } else if (s[i] == 'M') {
                value1 = 1000;
            }
            if (s[i+1] == 'I') {
                value2 = 1;
            } else if (s[i+1] == 'V') {
                value2 = 5;
            } else if (s[i+1] == 'X') {
                value2 = 10;
            }  else if (s[i+1] == 'L') {
                value2 = 50;
            } else if (s[i+1] == 'C') {
                value2 = 100;
            } else if (s[i+1] == 'D') {
                value2 = 500;
            } else if (s[i+1] == 'M') {
                value2 = 1000;
            }
            if (i != s.size()-1) {
                if (value1 < value2) {
                    sum -= value1;
                } else {
                    sum += value1;
                }
            } else {
                sum += value1;
            }
        }
        return sum;
    }
};
