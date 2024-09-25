class Solution {
public:
    class Trie{
        public:
        Trie* container[26];
        int count=0;

        void insert(string &s,Trie* root){
            Trie* temp=root;
            int n=s.length();
            for(int i=0;i<n;i++){
                if(temp->container[s[i]-'a']==NULL){
                    temp->container[s[i]-'a']=new Trie();
                }
                temp=temp->container[s[i]-'a'];temp->count++;
            }
            return;
        }

        int search(string &s,Trie* root){
            Trie* temp=root;
            int n=s.length(),current=0;
            for(int i=0;i<n;i++){
                temp=temp->container[s[i]-'a'];
                if(temp->count==1){
                    return current+n-i;
                }
                current+=temp->count;
            }
            return current;
        }
    };

    vector<int> sumPrefixScores(vector<string>& words) {
        int n=words.size();
        vector<int>answer;
        Trie trie;
        Trie* root=new Trie();
        for(int i=0;i<n;i++){
            trie.insert(words[i],root);
        }
        for(int i=0;i<n;i++){
            answer.push_back(trie.search(words[i],root));
        }
        return answer;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();