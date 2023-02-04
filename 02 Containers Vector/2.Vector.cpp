#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

// Print the output of the vector
void printVec(vector<int>v){
	cout<<"Size-> "<<v.size()<<endl;
	for(int i=0; i<v.size();++i){   // v.size() TC-> O(1)
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

// Print the output of the vector string
void printVec1(vector<string>v){
	cout<<"Size-> "<<v.size()<<endl;
	for(int i=0; i<v.size();++i){   // v.size() TC-> O(1)
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main() {
 vector<int> v;
 int n;
 cin>>n;                    // number of string required 
 for(int i=0;i<n;i++){
 	int x;
 	cin>>x;
 	v.push_back(x);  // v.push_back TC-> O(1) pushing element into the vector
 }
 printVec(v);
 
 
// ##########################################################################################
// push_back()  and pop_back() funtion use

 vector<int> vv(10, 5); // v(creating memory size of 10 unit , allocating 5 to each)
 vv.push_back(7);      // pushing 7 at the end of the vector
 printVec(vv);
 
 vv.pop_back();    // Removing 7 from the vector
 printVec(vv);
 
 //*****************************************************************************************
 // Copying a vector
 
 vector<int>v2=v;  // TC->O(n) be carefull while copying a vector
 v2.PB(4);         // Copying vector v at v2 and pushing 4 into it 
 printVec(v2);
 printVec(v);
 
 // Print string in a vector
 vector<string>vs;

 cin>>n;
 for(int i=0; i<n; ++i){
 	string s;
 	cin>>s;
 	vs.PB(s);
 }
 printVec1(vs);
  return 0;
}






//Goto tools > Editor Option > Snippets >Default Source Code

