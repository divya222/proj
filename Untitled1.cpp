#include<iostream>
using namespace std;
int main(){
	int n;
	string word;
	string sentence;
	cin>>n;
	/***for(int i=0;i<n;i++){
		getline(cin,s);
	}***/
	while (getline(cin, word) && word != "q")
	{
	    sentence += word + " ";
	}
}
