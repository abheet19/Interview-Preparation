#include <queue>
class KthLargest {
    priority_queue<int,vector<int>,greater<int>> pq;        //min heap
    int k;
    
    
public:
    KthLargest(int k, vector<int>& nums) {      //constructor for class 
        this->k=k;
        
        for(int i=0;i<k;i++){               //push k elements to min heap
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(pq.top()<nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
            
        }
                            //at end of this loop only k elements remain in the loop
     }
    
    int add(int val) {
        if(pq.size()< k)
            pq.push(val);
        
        else if(pq.top()<val){
            pq.pop();
            pq.push(val);
        }
        
        if(pq.size()==k){
            return pq.top();
        }
        else {
            return -1;
        }
        
        
    }
};


