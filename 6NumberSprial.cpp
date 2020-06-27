#include<bits/stdc++.h>
using namespace std;

int main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
long long int testCase; cin>>testCase;
while(testCase--){
	long long int row,column,solution;
    cin>>row>>column;
    if(row==column) solution = row*row + 1- row;
    else{
    	long long int greaterOne = row>column?row:column;
    	if(greaterOne&1){
    		if(column == greaterOne) solution = column*column - (row -1);
    		else solution = (row-1)*(row-1) + column;
    	}
    	else{
    		if(column == greaterOne) solution = (column-1)*(column-1) + row;
    		else solution = row*row - (column - 1);
    	}
    }
    cout<<solution<<"\n";
    
}
}
