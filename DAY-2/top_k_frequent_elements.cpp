class Solution {
public:
    typedef pair<int,int> p;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
            unordered_map<int,int> map;
       for(int i = 0 ; i < nums.size() ;i++) {      //store frq of nos. in hashmap
            map[nums[i]]++;
        }
        
        vector<int> ans;
        
        priority_queue<p> pq;          //max heap
        
        unordered_map<int,int>:: iterator i;          
        for(i=map.begin();i!=map.end();i++){
            
            pair<int,int> p=*i;                 //here p.second contains freq and p.first 
            pq.push({p.second,p.first});        //contains corr. number to that
            
            if(pq.size() > map.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
     }
    
        return ans;
    }
};
