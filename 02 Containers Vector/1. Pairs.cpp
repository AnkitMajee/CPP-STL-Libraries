#include <bits/stdc++.h>
using namespace std;
int main() {
  // Basic allocation of Pairs
  pair<int,int> p={1,3};              // its store any number of variable in pair
  cout<<p.first<<" "<<p.second;      
  //p.first =1 ,p.second=3
  
  
  // Nesting of pairs
  pair<int,pair<int,int>> p={1,{2,3}};
  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;  
  //p.first=1 p.second.first=2 p.second.second=3
  
  // Pair as Array
  pair<int,int> arr[]={{1,2},{2,3},{3,4}};
            // Indexing  0     1     2 
  cout<<arr[1].second;  // output= 3

  pair<int,string>p;
  // Two way to make a pair
  p=make_pair(2,"ABC");
  cout<<p.first<<" "<<p.second<<endl;
  p={2,"ABC"};
  cout<<p.first<<" "<<p.second<<endl;
  
  // Copying element by reference
  pair<int , string>&p1=p;
  p1.first=3;
  cout<<p.first<<" "<<p.second<<endl;
  
  pair<int ,int>parray[3];
  parray[0]={1,2};
  parray[1]={3,4};
  parray[2]={5,6};
  
  for(int i=0; i<3 ;++i){
  	cout<<parray[i].first<<" "<<parray[i].second<<endl;
  }
  
  //Runtime input of a element
  
  cin>>p.first>>p.second;
  cout<<p.first<<" "<<p.second<<endl;


  return 0;
}






//Goto tools > Editor Option > Snippets >Default Source Code

