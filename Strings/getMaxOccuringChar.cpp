char getMaxOccuringChar(string str)
    {
        unordered_map<char, int> mp;
        unordered_map<char, int> ::iterator it;
        unordered_map<char, int> ::iterator maxim;
        for(int i = 0; i< str.length(); i++){
            mp[str[i]]++;
        }
        int max = INT_MIN;
        it = mp.begin();
        while(it != mp.end()){
            if(max < it->second){
                maxim = it;
                max = it->second;
            }
            it++;
        }
        return maxim->first;
    }
