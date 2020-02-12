#include <iostream>
	#include <iomanip>
	#include <cstdlib>
using namespace std;
const int MAX_TOSSES=100000;
void rollDie(int array[],int tosses);
void findSum(int tosses,int arrayDice1[],int arrayDice2[],int arrayTossSum[]);
void tossCount(int tosses,int arrayTossSum[],int possibleTossSum[]);
void display(int tosses,int possibleTossSum[]);
int main()
{
	int tosses,index=0,array[MAX_TOSSES],arrayDice1[MAX_TOSSES],arrayDice2[MAX_TOSSES],arrayTossSum[MAX_TOSSES],possibleTossSum[MAX_TOSSES];
	char yN;
	yN='y';
	srand(100);
	do{
		do{

			cout<<"Enter number of tosses : ";
			cin>>tosses;


		}while(tosses>=100000&&tosses<=1);


		cout<<"Total number of tosses = "<<tosses<<endl;
		rollDie(array,tosses);
		for(int i=1; i<tosses; i++) {
			arrayDice1[i]=array[i];
		}
		rollDie(array,tosses);
		for(int i=1; i<tosses; i++) {
			arrayDice2[i]=array[i];
		}
		findSum(tosses,arrayDice1,arrayDice2,arrayTossSum);
		tossCount(tosses,arrayTossSum,possibleTossSum);
		display(tosses,possibleTossSum);
		cout<<"Do another simulation? (y or n):";
		cin>>yN;
	}while(yN=='y'||yN=='Y');
	return 0;
}
void rollDie(int array[],int tosses){
	int i;
	for(int i=1; i<=tosses; i++) {

		array[i]=(1+(rand()%6));
	}
}
void findSum(int tosses,int arrayDice1[],int arrayDice2[],int arrayTossSum[]){
	for(int i=1; i<=tosses; i++) {
		arrayTossSum[i]=arrayDice1[i]+arrayDice2[i];
	}
}
void tossCount(int tosses,int arrayTossSum[],int possibleTossSum[]){
	for(int i=1; i<tosses; i++) {
		if(arrayTossSum[i]==2) {
			++possibleTossSum[2];
		}else if(arrayTossSum[i]==3) {
			++possibleTossSum[3];
		}else if(arrayTossSum[i]==4) {
			++possibleTossSum[4];
		}else if(arrayTossSum[i]==5) {
			++possibleTossSum[5];
		}else if(arrayTossSum[i]==6) {
			++possibleTossSum[6];
		}else if(arrayTossSum[i]==7) {
			++possibleTossSum[7];
		}else if(arrayTossSum[i]==8) {
			++possibleTossSum[8];
		}else if(arrayTossSum[i]==9) {
			++possibleTossSum[9];
		}else if(arrayTossSum[i]==10)
		{++possibleTossSum[10];}else if(arrayTossSum[i]==11)
		{++possibleTossSum[11];}else if(arrayTossSum[i]==12)
		{++possibleTossSum[12];}
		else{   cout<<"Go Away I broke it!!!";}
	}
}
void display(int tosses,int possibleTossSum[])
{
	double probab[13];
	for(int i=2; i<13; i++) {probab[i]=0;
		                 probab[i]=static_cast<double>(possibleTossSum[i])/static_cast<double>(tosses);}
	cout<<setw(20)<<"Toss"<<setw(20)<<"Count"<<setw(20)<<"Probability\n";
	for(int i=2; i<13; i++) {cout<<setw(20)<<i<<setw(20)<<possibleTossSum[i]<<setw(20)<<probab[i]<<endl;}
}
