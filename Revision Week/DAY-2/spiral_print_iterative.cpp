#include <bits/stdc++.h>
using namespace std;
void spiralPrint(vector<vector<int> > &v,int row,int col){
	int RowStart=0;
    int RowEnd=row-1;
    int ColStart=0;
    int ColEnd=col-1;
    int count=0;
    
     while(count<row*col)//while all the elements are printed
   {
     for(int j=ColStart;count!=row*col && j<=ColEnd;j++)
     {
       cout<<v[RowStart][j]<<" ";
       count++;
     }
     RowStart++;
     for(int i=RowStart;count!=row*col && i<=RowEnd;i++)
     {s
       cout<<v[i][ColEnd]<<" ";
       count++;
     }
     ColEnd--;
     for(int j=ColEnd;count!=row*col && j>=ColStart;j--)
     {
       cout<<v[RowEnd][j]<<" ";
       count++;
     }
     RowEnd--;
     for(int i=RowEnd;count!=row*col && i>=RowStart;i--)
     {
       cout<<v[i][ColStart]<<" ";
       count++;
     }
     ColStart++;
     
   }
}
int main() {
	int row,col;
	cout<<"Enter number of rows"<<endl;
	cin>>row;
	cout<<"Enter number of columns"<<endl;
	cin>>col;
	
	vector<vector<int> > v(row);					//vector of vectors
	cout<<"Enter vector/array elements"<<endl;
	for(int i=0;i<row;i++){							//i/p of 2-d vector
		for(int j=0;j<col;j++){
			int val;
			cin>>val;
			v[i].push_back(val);
		}
	}
	
	    spiralPrint(v, row, col);
}
    
