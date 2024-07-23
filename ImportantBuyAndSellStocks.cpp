#include <iostream>
#include <cmath>
using namespace std;

// O(n^2) Time complexity

// int maxProfitGenerated(int prices[], int size){
//     int maxProfit = 0;
//     for(int i=0; i<size-1; i++){
//         for(int j=i+1; j<size; j++){
//             int currentProfit = prices[j]-prices[i];
//             if(currentProfit > maxProfit){
//                     maxProfit=currentProfit;
//             }
//         }
//     }

//     return maxProfit;
// }


//O(n) time complexity my way (best way)
// int maxProfitGenerated(int prices[], int size){
//     int buyPrice = prices[0], sellingPrice, maxProfit = 0, profit=0;
//     for(int i=1; i<size; i++){
//         if(prices[i-1]<buyPrice){
//             buyPrice = prices[i-1];
//         }
//         sellingPrice = prices[i];
//         profit = sellingPrice - buyPrice;
//         if(profit>maxProfit){
//             maxProfit = profit;
//         }
//     }
//     return maxProfit;
// }


//Another way
// int maxProfitGenerated(int prices[], int size){
//     int buyPrice = INT_MAX, sellPrice, maxProfit = 0, profit;
//     for(int i=0; i<size; i++){
//         if(buyPrice<prices[i]){
//             profit = prices[i] - buyPrice;
//             if(profit>maxProfit){
//                 maxProfit = profit;
//             }
//         }else{
//             buyPrice = prices[i];
//         }
//     }
//     return maxProfit;
// }


int maxProfitGenerated(int *prices, int size){
    int profit=0;
    int buyPrice = prices[0];
    int sellPrice = 0;
    int maxProfit = 0;
    for(int i=1; i<size; i++){
        if(buyPrice > prices[i-1]){
            buyPrice = prices[i-1];
        }
        sellPrice = prices[i];
        profit = sellPrice - buyPrice;
        if(profit>maxProfit){
            maxProfit = profit;
        }
    }
    return profit;
}

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4, 10};
    int size = sizeof(prices)/sizeof(prices[0]);
    cout<<"Maximum Profit: "<<maxProfitGenerated(prices, size);
}