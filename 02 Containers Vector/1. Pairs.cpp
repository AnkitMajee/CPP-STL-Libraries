#include <bits/stdc++.h>
using namespace std;
int main() {

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

