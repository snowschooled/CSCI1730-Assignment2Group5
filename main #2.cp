#include <cstring>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
int getCompSelection();
int getUserSelection(int& uRollParameter);
void playResults(int cRollParameter,int uRollParameter);
void finalResults(int userTotParameter,int CompTotParamater,int tieParameter);
int main()
{int theNumber,comp,user,cRoll,uRoll,userTot,compTot;
char yN;
yN='y';
srand(time(NULL));
cout<<"It's time to play ROCK, PAPER, SCISSORS!\n";
do{cRoll=getCompSelection();
cout<<"What is your play?\n";
getUserSelection(uRoll);
playResults(cRoll,uRoll);
cout<<endl;
cout<<"Play again? (y or n):";
cin>>yN;

}while(yN=='y'||yN=='Y');


return 0;
}
int getCompSelection(){int roll;
roll=(1+(rand()%3));
return(roll);
}
int getUserSelection(int& uRollParameter){cout<<"Rock (1), Paper (2), Scissors(3):";
cin>>uRollParameter;
}
void playResults(int cRollParameter,int uRollParameter){
	int compTot=0,userTot=0,tie=0;
	string r="rock", p="paper", s="scissors",
	uRollS,cRollS;
	if((cRollParameter==uRollParameter+1)||(cRollParameter==uRollParameter-2)){
		compTot=+1;
	}
	else if((uRollParameter==cRollParameter+1)||(uRollParameter==cRollParameter-2)){
		userTot=+1;
	}
	else{
		tie=+1;
	}
	if(cRollParameter==1){
	cRollS=r;
	}
	else if(cRollParameter==2){
		cRollS=p;
	}else if(cRollParameter==3){
		cRollS=s;
	}
	if(uRollParameter==1){
		uRollS=r;
	}
	else if(uRollParameter==2){
		uRollS=p;
	}
	else if(uRollParameter==3){
		uRollS=s;
	}else{cout<<"There is a mistake in here and it is only my fault.";
	cerr;
	}
	cout<<"You played "<<uRollS<<" and I played "<<cRollS<<endl;
if(userTot<=compTot){
	cout<<"I win\n";
}
else if(userTot>=compTot){
	cout<<"You win\n";
	}
else{cout<<"The play was a tie\n";
}
}
void finalResults(int userTotParameter,int compTotParameter,int tieParameter){cout<<"Final results of our match:\n";
cout<<"You won "<<userTotParameter<<" time(s).\n";
cout<<"I won "<<compTotParameter<<"time(s)\n";
cout<<"There were "<<tieParameter<<"ties.\n";
cout<<"Bye,bye...\n";
}
