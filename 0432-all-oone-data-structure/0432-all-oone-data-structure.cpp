class AllOne {
public:
    unordered_map<string,int> ump;
    AllOne() {}
    
    void inc(string key) {
        if(ump.find(key)!=ump.end()) ump[key]++;
        
        else ump[key]=1;
    }
    
    void dec(string key) {
        if(ump[key]==1) ump.erase(key);
        
        else ump[key]--;
    }
    
    string getMaxKey() {
        if(ump.size()==0) return "";
        int maxi=INT_MIN;
        string ans="";
        for(const auto& k:ump){
            if(k.second>maxi){
                maxi=k.second;
                ans=k.first;
            }
        }
        return ans;
    }
    
    string getMinKey() {
        if(ump.size()==0) return "";
        int mini=INT_MAX;
        string ans="";
        for(const auto& k:ump){
            if(k.second<mini){
                mini=k.second;
                ans=k.first;
            }
        }
        return ans;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */