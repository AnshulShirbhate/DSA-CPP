#include<bits/stdc++.h>
using namespace std;

int binarySearch(int x){
        int start=0, end=x;
        long long int mid = start + (end-start)/2;
        int ans;
        while(start<=end){
            long long int square = mid*mid;
            if(square == x){
                return mid;
            } else if(square > x){
                end = mid-1;
            } else {
                ans = mid;
                start = mid+1;
            }
             mid = start + (end-start)/2;
        }
        return ans;
    }

    double morePrecision(int x, int tempSol, int precision){
        double factor = 1;
        double ans = tempSol;

        for(int i=0; i<precision; i++){
            factor /= 10;
            for(double j=ans; j*j <= x; j+=factor){
                ans = j;
            }
        }
        return ans;
    }


    int main(){
        int x = 8;
        int ans = binarySearch(x);
        double ans2 = morePrecision(x, ans, 3);
        cout<<"Square root of "<<x<<" is: "<<ans2;
    }