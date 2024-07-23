#include <bits/stdc++.h> 
using namespace std;


int findMinimumCost(string str) {
  if(str.length()%2 != 0){
    return -1;
  }
  stack<char> s;
  int ans = 0;
  for(int i=0; i<str.length(); i++){
    if(str[i] == '{'){
      s.push(str[i]);
    } else {
        if (!s.empty() && s.top() == '{'){
          s.pop();
        }
        else{
          s.push(str[i]);
        }
    }
  }

  int a=0, b=0;
  while (!s.empty()) {
    if (s.top() == '}') {
        a++;
    } else {
        b++;
    }
    s.pop();
  }

  ans = (a+1)/2 + (b+1)/2;
  return ans;

}

int main(){
  string str = "{{}}}}";
  int ans = findMinimumCost(str);
  cout<<ans;
}