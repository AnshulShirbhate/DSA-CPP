// #include <iostream>
// #include <cmath>
// using namespace std;

// int trappedRainWater(int height[], int size){
//     //calculate left max boundaries - array
//     int leftMax[size];
//     leftMax[0] = height[0];
//     for(int i=1; i<size; i++){
//         leftMax[i] = max(height[i], leftMax[i-1]);
//     } 

    
//     //calculate right max boundaries - array
//     int rightMax[size];
//     rightMax[size-1] = height[size-1];
//     for(int i=size-2; i>=0; i--){
//         rightMax[i] = max(height[i], rightMax[i+1]);
//     }


//     int trappedWater = 0;

//     for(int i=0; i< size; i++){
//         int waterLevel = min(leftMax[i], rightMax[i]);
//         trappedWater += waterLevel - height[i];
//     }

//     return trappedWater;

// }

// int main(){
//     int height[] = {4, 2, 0, 6, 3, 2, 5};
//     int size = sizeof(height)/sizeof(height[0]);
//     cout<<"Trapped Water: "<<trappedRainWater(height, size);
// }



#include <iostream>
#include <cmath>
using namespace std;

int trappedRainWater(int height[], int size){
    int leftMax[size];
    leftMax[0] = height[0];
    for(int i=1; i<size; i++){
        leftMax[i] = max(height[i], leftMax[i-1]);
    }

    int rightMax[size];
    rightMax[size-1] = height[size-1];
    for(int i=size-2; i>=0; i--){
        rightMax[i] = max(height[i], rightMax[i+1]);
    }

    int trappedWater = 0;
    for(int i=0; i<size; i++){
        int waterLevel = min(leftMax[i], rightMax[i]);
        trappedWater += waterLevel - height[i];
    }                                               

    return trappedWater;
}

int main(){
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(height)/sizeof(height[0]);
    cout<<"The amount of rainwater trapped is: "<<trappedRainWater(height, size); 
}