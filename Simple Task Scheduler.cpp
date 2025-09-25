/*Write a program that implements a simple task scheduler using a singly linked list. Each
 node in the linked list represents a task with its priority and execution time. Tasks are
 scheduled based on their priority, with higher priority tasks being executed first.*/
#include <iostream>
#include <string>
using namespace std;
class List{
private:
    string tskname;
    int exetime;
public:
	int priority;
    List *nxt;
    void display();
    List(string n,int p,int e);
};
List::List(string n,int p,int e){
        tskname=n;
        priority=p;
        exetime=e;
        nxt=NULL;
    };
void List::display(){
        cout<<"\n\nThe Name of task is:"<<tskname<<endl;
        cout<<"The Priority of task is:"<<priority<<endl;
        cout<<"The Execution Time of task is:"<<exetime<<endl;
    }
int main(){
    List *head=NULL;
    List *temp=NULL;
    List *pre=NULL;
    List *curr=NULL;
    string tn;
    int n,extime,pri;
    cout<<"Enter Number of tasks:";
    cin>>n;
    for(int i=0;i<n;i++){
			cout<<"Enter Name of task:";
			cin>>tn;
			cout<<"Enter Priority of task(from 10):";
			cin>>pri;
			cout<<"Enter Execution Time of task:";
			cin>>extime;
			if(head==NULL){
				head=new List(tn,pri,extime);
			}
			else{
				temp=new List(tn,pri,extime);
				pre=head;
				curr=head->nxt;
				if(head->priority<temp->priority){
						temp->nxt=head;
						head=temp;
					}
				else{
					while(curr!=NULL&&curr->priority>temp->priority){
							pre=curr;
							curr=curr->nxt;
						};
						pre->nxt=temp;
						temp->nxt=curr;
				};
			};
			
	};
cout<<"\n\n\n";
cout<<"-----------Task List------------"<<endl;
	curr=head;
	while(curr!=NULL){
		curr->display();
		curr=curr->nxt;
	};
};
