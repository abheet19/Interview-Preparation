#include <cmath>
class Solution {
public:
     typedef pair <float,int> p;        //definition of pair class
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
         
        vector<vector<int>> ans;        //vector of vector 
        priority_queue<p,vector<p>,greater<p>> pq;      //PQ containing pairs 
        
        for(int i=0;i<points.size();i++){           //push distances with indexes
            
            int x=points[i][0];
            int y=points[i][1];
            
            float distance=sqrt(x*x+y*y);
            pair <float,int> p;
            p.first=distance;
            p.second=i;
            
            pq.push(p);
        }
        
        for(int i=0;i<K;i++){               //push min distance points from min heap to ans 
            int index=pq.top().second;
            ans.push_back(points[index]);
            pq.pop();
            
        }
        
        return ans;
        
        
        
        
    }
};
