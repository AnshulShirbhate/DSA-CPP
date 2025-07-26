vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int repeating=-1;
    int missing=-1;
    int n=a.size();
    int hasharr[n+1] = {0};
    for(int i=0; i<a.size(); i++){
        hasharr[a[i]]++;
    }

    for(int i=1; i<=n; i++){
        if(hasharr[i] == 2)repeating=i;

        if(hasharr[i] == 0)missing=i;

        if(missing != -1 && repeating != -1)break;
    }
    return {repeating, missing};
   
}