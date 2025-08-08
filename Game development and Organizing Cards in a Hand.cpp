/*write a game development program that implements the Bubble Sort algorithm.The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.*/
#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter No. of scores:";
	cin>>size;
	int player1[size],player2[size];
	cout<<"Enter scores for first player,"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Enter score of level "<<i+1<<":";
		cin>>player1[i];
	};
	cout<<"Enter scores for second player,"<<endl;
	for(int i=0;i<size;i++){
			cout<<"Enter score of level "<<i+1<<":";
			cin>>player2[i];
		};
	for(int i=size;i>0;i--){
		for(int j=0;j<i-1;j++){
			int temp=0;
			if(player1[j]<player1[j+1]){
				temp=player1[j];
				player1[j]=player1[j+1];
				player1[j+1]=temp;
			};
		};
	};
	for(int i=size;i>0;i--){
		for(int j=0;j<i-1;j++){
			int temp=0;
			if(player2[j]<player2[j+1]){
				temp=player2[j];
				player2[j]=player2[j+1];
				player2[j+1]=temp;
			};
		};
	};
	cout<<"Scores for player 1 are:";
	for(int i=0;i<size;i++){
		cout<<player1[i]<<"\t";
	};
	cout<<endl;
	cout<<"Scores for player 2 are:";
		for(int i=0;i<size;i++){
			cout<<player2[i]<<"\t";
		};
	cout<<endl;
	if(player2[0]==player1[0]){
		cout<<"The game ends in a tie"<<endl;
	}
	else if(player1[0]>player2[0]){
		cout<<"Player 1 Wins!!!!"<<endl;
	}
	else{
		cout<<"Player 2 Wins!!!!"<<endl;
	};
  return 0;
};

/*Application: When playing card games, players often use an approach similar to insertion sort to  organize their cards.
They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence.
Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort*/
#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter total No. of cards in hand:";		//inputting size of array
	cin>>size;
	int cards[size];
	for(int i=0;i<size;i++){				//inputting elements of array
		cout<<"Enter No. on the cards in hand  (1 for Ace,11 for Jack,12 for Queen,13 for King):";
		cin>>cards[i];
	};
	for(int i=1;i<size;i++){				//sorting array
		int j=i-1;
		int temp=cards[i];
		while(j>=0 &&temp<cards[j]){
			cards[j+1]=cards[j];
			j--;
		}
		cards[j+1]=temp;
		cout<<"Array after "<<i<<" iteration is:";		//printing array for each iteration
		for(int l=0;l<size;l++){
			cout<<cards[l]<<",";
		}
		cout<<"\n";
	}
	cout<<"Cards after sorting are:"<<endl;		//printing final array
			for(int l=0;l<size;l++){
				cout<<cards[l]<<",";
			}
			cout<<"\n";
	return 0;
};
