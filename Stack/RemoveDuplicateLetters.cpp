string removeDuplicateLetters(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> lastIndex(26);
        for(int i=0; i<s.length(); i++){
            int ind =  s[i]-'a';
            lastIndex[ind] = i;
        } 
        vector<bool> visited(26, false);
        string result="";

        for(int i=0; i<s.length(); i++){
            int ch = s[i]-'a';
            if(!visited[ch]){
                while(result.length()>0 && result.back()>s[i] && lastIndex[result.back()-'a'] > i){
                    visited[result.back() -'a']=false;
                    result.pop_back();
                }
                result.push_back(s[i]);
                visited[s[i]-'a']=true;
            }
        }
        return result;
    }