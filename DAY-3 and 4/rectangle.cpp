#include <bits/stdc++.h>
using namespace std;
template <typename T>
class point{
	public:
	T x;
	T y;
	
	point(T x,T y){
		this->x=x;
		this->y=y;
	}
	
};
bool overlap(point<int> l1, point<int> r1, point<int> l2, point<int> r2) { 
    // If one rectangle is on left side of other 
    if (l1.x > r2.x || l2.x > r1.x) 
        return false; 
  
    // If one rectangle is above other 
    if (l1.y < r2.y || l2.y < r1.y) 
        return false; 
  
    return true; 
}


  

int main() 
{ 
    point<int> l1(0,10),r1(10,0);
    point<int> l2(5,5),r2(15,0); 
    if (overlap(l1, r1, l2, r2)) 
        cout<<"Rectangles Overlap"; 
    else
        cout<<"Rectangles Don't Overlap"; 
}

