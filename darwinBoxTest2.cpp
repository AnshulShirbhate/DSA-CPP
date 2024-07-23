#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int>> colors(n, vector<int> (3, 0));

//     for(int i=0; i<n; i++){
//         int r, g,b;
//         cin>>r>>g>>b;
//         colors[i][0] = r;
//         colors[i][1] = g;
//         colors[i][2] = b;
//     }

//     for(int i=0; i<n; i++){
//         bool red=false;
//         bool green=false;
//         bool blue=false;
//         int totalColours=0;
//         for(int j=0; j<3; j++){
//             int num = colors[i][j];
//             if(j==0 && num>0){
//                 red=true;
//                 totalColours++;
//             }
//             if(j==1 && num>0){
//                 green=true;
//                 totalColours++;
//             }
//             if(j==2 && num>0){
//                 blue=true;
//                 totalColours++;
//             }
//         }
//         if(red && green){
//             totalColours++;
//         }
//         if(green && blue){
//             totalColours++;
//         }
//         if(red && blue){
//             totalColours++;
//         }
//         cout<<totalColours<<endl;
//     }

// }
