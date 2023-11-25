#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int c=0;
	int j;
	for(int i=s.length()-1;i>=0;i--){
		int k=s[i]-32;
		if(k!=0){
			j=i;
			break;
		}
	}
	for(int i=j;i>=0;i--){
		int k=s[i]-32;
		if(k==0){
			break;
		}
		c+=1;
	}
	cout<<c;
	return 0;
}
