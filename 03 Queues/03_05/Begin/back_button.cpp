#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<string> back_stack;
	string temp;

	while(temp!="exit"){
		cout<<"[1] Visit URL   [2] Back"<<endl;
		cin>>temp;
		if(temp=="exit")
			break;	
	}
	return 0;
}



