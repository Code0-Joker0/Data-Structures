/*In a multi-user environment, printers often use a circular queue to manage print jobs. Each print job is added to the queue, and the printer processes them in the order they arrive. Once a print job is completed, it moves out of the queue, and the next job is processed, efficiently managing the flow of print tasks. Implement the Printer Spooler system using a circular queue without using built-in queues.*/
#include <iostream>
using namespace std;
class Printer{
private:
	int rear=-1,front=0,maxlen=10,count=0;
    string token[10];
public:
	void Enqueue(string t);
	void Dequeue();
	bool isEmpty();
	bool isFull();
};
void Printer::Dequeue(){
	if (isEmpty())
    {
        cout<<"No Prints Present\n";
        return;
    }
    else if(!isEmpty()){
		cout<<"Print of "<<token[front]<<" is Ready to Collect\n";
		token[front]="";
        front=(front+1)%maxlen;
        count--;
	};
};
void Printer::Enqueue(string t){
	if(!isFull()){
		rear=(rear+1)%maxlen;
        token[rear]=t;
        count++;
		cout<<"Print Added to Queue\n";
	};
};
bool Printer::isFull(){
	if(count==maxlen){
		cout<<"Queue is full, please process tokens first\n";
		return 1;
	}
	else{
		return 0;
	};
};
bool Printer::isEmpty(){
	if(count==0){
		cout<<"Queue is empty, please issue token first\n";
		return 1;
	}
	else{
		return 0;
	};
};
int main(){
	Printer shop;
	int choice=0;
    string name;
	while(choice!=3){
		cout<<"--------------Welcome to Printing Press--------------"<<endl;
		cout<<"1)Issue Print\n";
		cout<<"2)Process Print\n";
		cout<<"3)Exit\n";
		cout<<"Enter Choice Number:";
		cin>>choice;
		if(choice==0){
			cout<<"Please Enter Choice Correctly";
			break;
		}
		else if(choice==1){
			cout<<"Enter Print Name:";
			cin>>name;
			shop.Enqueue(name);
		}
		else if(choice==2){
			shop.Dequeue();
		};
	};
	cout<<"Gooddbye,Come Again!!!!!!!\n";
	return 0;
};
