char nonrepeatingCharacter(string S)
    {
       unordered_map<char, int> charFreq;
       queue<char> q;
       
       for(int i=0; i<S.size(); i++){
           char ch = S[i];
           charFreq[ch]++;
            q.push(ch);    
           
           while(!q.empty()){
               if(charFreq[q.front()]>1){
                   q.pop();
               } else {
                   break;
               }
           }
       }
       if(!q.empty()){
           return q.front();
       }
       return '$';
       
    }