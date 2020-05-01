class Solution {
public:
    typedef pair<int,char> p;
    
    
    string frequencySort(string s) {
       unordered_map<char,int> map;
       for(int i = 0 ; i < s.length() ;i++) {      //store frq in hashmap
            map[s[i]]++;
        }
        
        priority_queue<p> pq;                   //PQ of type pair <int,char>  comparison on 
        unordered_map<char,int>:: iterator i;           //basis of 1st char
        for(i=map.begin();i!=map.end();i++){
            pair<char,int> p=*i;
            pq.push({p.second,p.first});        //PQ contains every ele with its freq
            
        }
        string ans="";
        
        while(!pq.empty()) {					//simply append to the o/p string
            pair<int,char> p = pq.top();		//append the p.second part as it contains the char
            pq.pop();
            while(p.first--) {					//append till freq of that char becomes 0
                ans += p.second;
            }
        }
        
        return ans;				//return the string
        
        
    }
};
