/*Arrival: Customers arrive at the coffee shop and stand in line. Order Processing: The first customer in line gets their order taken, and the barista starts making the coffee.Serving: Once the first customer is served, they leave the queue, and the next customer in line moves forward to be served. Write a program to implement a simple queue*/
#include <iostream>
using namespace std;
class Coffee{
private:
	int rear=-1,front=0,maxlen=4,token[4];
public:
	void Enqueue(int t);
	void Dequeue();
	bool isEmpty();
	bool isFull();
};
void Coffee::Dequeue(){
	if(isEmpty()){
		cout<<"Order of Token "<<token[front]<<" is Ready to Collect\n";
		token[front++]=0;
	};
};
void Coffee::Enqueue(int t){
	if(isFull()){
		token[++rear]=t;
		cout<<"Token Added to Queue\n";
	};
};
bool Coffee::isFull(){
	if(rear==maxlen-1){
		cout<<"Queue is full, please process tokens first\n";
		return 0;
	}
	else{
		return 1;
	};
};
bool Coffee::isEmpty(){
	if(rear==-1){
		cout<<"Queue is empty, please issue token first\n";
		return 0;
	}
	else{
		return 1;
	};
};
int main(){
	Coffee shop;
	int choice=0,tnumber;
	while(choice!=3){
		cout<<"--------------Welcome to Starbucks--------------"<<endl;
		cout<<"1)Issue Token\n";
		cout<<"2)Process Order\n";
		cout<<"3)Exit\n";
		cout<<"Enter Choice Number:";
		cin>>choice;
		if(choice==0){
			cout<<"Please Enter Choice Correctly";
			break;
		}
		else if(choice==1){
			cout<<"Enter Token No.:";
			cin>>tnumber;
			shop.Enqueue(tnumber);
		}
		else if(choice==2){
			shop.Dequeue();
		};
	};
	cout<<"Gooddbye,Come Again!!!!!!!\n";
	return 0;
};
