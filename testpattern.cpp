#include<iostream>
using namespace std;


 bool isCircularSentence(string sentence) {
        char start = sentence[0];
        char end = sentence[sentence.length()-1];
        if(start != end)return false;

        char before=sentence[0];
        char after = sentence[sentence.length()-1];
        for(int i=1; i<sentence.length(); i++){
            if(i<sentence.length() && sentence[i+1] == ' '){
                before=sentence[i];
                after = sentence[i+2];
                if(before != after){
                    return false;
                }
            }
            // if(sentence[i-1] == ' '){
            //     after=sentence[i];
            //     cout<<endl<<before<<" "<<after;
            //     if(before != after){
            //         return false;
            //     }
            // }
        }
        return true;
    }
int main(){
   string test = "ab a a";
   cout<<isCircularSentence(test);
}