/*
For example, imagine you have a set of servers that handle requests for a web application. The key to load balancing is using the hash value of a client's IP address or a request ID to determine which server should handle the request. The hash function is typically designed so that the data is evenly distributed across the servers, ensuring that no single server is overloaded. Write a program of a load balancing system
*/
#include<iostream>
using namespace std;
int main(){
	int key,serv,hashvalue;
	string choise;
	cout<<"Enter no. of servers:";
	cin>>serv;
	while(1){
		cout<<"Do you wish to find server no. (Y/N):";
		cin>>choise;
		if(choise=="N"||choise=="n"){
			break;}
		else{
			cout<<"Enter client key:";
			cin>>key;
			hashvalue=key%serv;
			cout<<"Your request is sent to server no."<<hashvalue+1<<endl;
			};
		}
	return 0;
	}
