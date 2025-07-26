#include <bits/stdc++.h>

// Better Solution (Hashmap)
// vector<int> majorityElement(vector<int> v) {
// 	map<int,int> mp;
// 	for(int i:v){
// 		mp[i]++;
// 	}
// 	int cond = v.size()/3;
// 	vector<int> ans;
// 	for(auto i: mp){
// 		if(i.second>cond){
// 			ans.push_back(i.first);
// 		}
// 	}
// 	return ans;
// }


// Optimal Solution (Boyer Moores Voting Algorithm)
#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	int ele1=INT_MIN, ele2=INT_MIN;
	int count1=0, count2=0;
	for(int i=0; i<v.size(); i++){
		if(count1 == 0 && v[i] != ele2){
			ele1=v[i];
			count1=1;
		} else if(count2 == 0 && v[i] != ele1){
			ele2 = v[i];
			count2=1;
		} else if(v[i] == ele1){
			count1++;
		} else if( v[i] == ele2){
			count2++;
        } else {
                count1--;
                count2--;
        }  
	}
	count1=0;
	count2=0;
	for(int i=0; i<v.size(); i++){
		if(v[i] == ele1)count1++;
		if(v[i] == ele2)count2++;
	}
	int cond = v.size()/3;
	if(count1>cond && count2>cond){
		return {ele1, ele2};
	}else if(count1>cond)
                return {ele1};
	else
                return {ele2};
}