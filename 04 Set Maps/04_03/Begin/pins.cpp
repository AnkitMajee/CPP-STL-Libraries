// Landmark Pins
// map usage example


#include <iostream>
#include <map>

using namespace std;

int main(){
	map<> pins;
	int temp=0;
	string str;
	pair<> p;
	
	cout<<"Inserting...\n";
	while(temp>=0){
		cout<<"Enter key: ";
		getline(cin,str);
		temp=stoi(str);
		if(temp>=0){
			p.first=temp;
			cout<<"Enter name: ";
			getline(cin,str);
			p.second=str;
			this_map.insert(p);
		}
	}
	
	cout<<"{   ";
	for(auto it = this_map.begin(); it!=this_map.end();it++)
		cout << it->first << "->" << it->second << "   ";
	cout<<"}\n";
		
	return 0;
}









