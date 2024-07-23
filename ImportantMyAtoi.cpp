#include<iostream>
#include<string>
using namespace std;

int myAtoi(string s) {
        int ans = 0;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        if (i >= s.size()) {
            return 0;
        }

        for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++) {
            if (ans > INT_MAX / 10 ||
                ans == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10) {
                return INT_MAX;
            } else if (ans < INT_MIN / 10 ||
                       ans == INT_MIN / 10 && s[i] - '0' >= 9) {
                return INT_MIN;
            }

            if(sign == -1){
                ans = ans * 10 - (s[i] - '0');
            }else{
                ans = ans * 10 + (s[i] - '0');
            }
            
        }

        return ans;
    }

    int main(){
        string s = "   -123";
        cout<<myAtoi(s);
    }