//Lecture 61: C++ placement series time 1:12 hour
#include<bits/stdc++.h>
using namespace std;


int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	int deficit = 0;
	int start = 0;
	int balance = 0;

	for(int i=0; i<N; i++){
		balance += petrol[i] - distance[i];
		if(balance < 0){
			deficit += balance;
			start = i+1;
			balance = 0;
		}
	}

	if(deficit + balance >= 0){
		return start;
	}else{
		return -1;
	}
}


int main(){
    vector<int> petrol = {1, 10, 3};
    vector<int> distance = {5, 3, 4};
    int size = petrol.size();
    int ans = firstCircularTour(petrol, distance, size);
    cout<<ans;
}