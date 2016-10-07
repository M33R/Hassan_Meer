#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
struct Team{
	string playerName[11];
};
class Cricket{
	private:
		Team Pakistan;
		Team India;
		int pakPlayersScore[11],IndplayersScore[11];
		int paktotalScore;
		int indtotalScore;
		float overs;
		int extras;
		bool pl1Status;
		int tossResult;
		string PLayingTeam;
		int tossDecision;
		int score;
		int oLoop,bLoop;
		int firstPlayer,SecondPlayer,Bowler;
		int out;
		public:
			Cricket(){
			Pakistan.playerName[0]="Shehzad";
			Pakistan.playerName[1]="hafeez";
			Pakistan.playerName[2]="Malik";
			Pakistan.playerName[3]="AKmal";
			Pakistan.playerName[4]="Sharjeel";
			Pakistan.playerName[5]="Afridi";
			Pakistan.playerName[6]="ANwar";
			Pakistan.playerName[7]="Sami";
			Pakistan.playerName[8]="Irfan";
			Pakistan.playerName[9]="Wahab";
			Pakistan.playerName[10]="AMir";
			
			
			India.playerName[0]="Dhawan";
			India.playerName[1]="Rohit";
			India.playerName[2]="Kohli";
			India.playerName[3]="Rahane";
			India.playerName[4]="Yuvraj";
			India.playerName[5]="Pandey";
			India.playerName[6]="Dhoni";
			India.playerName[7]="Patel";
			India.playerName[8]="Nehra";
			India.playerName[9]="Bumra";
			India.playerName[10]="Irfan Pathan";
			overs=extras=tossResult=tossDecision=out=0;
			for(int i=0;i<11;i++){
				pakPlayersScore[i]=0;
			}
			for(int i=0;i<11;i++){
				IndplayersScore[i]=0;
			}
			firstPlayer=0;
			SecondPlayer=1;
			Bowler=10;
			paktotalScore=indtotalScore=0;
	}
	void Toss()
	{
		system("color 2f");
		srand(time(NULL));
		tossResult=rand()%2;
		if(tossResult==0){
			tossDecision=rand()%2;
			if(tossDecision==0){
				cout<<"\t\t\n\nPakistan has won the toss and elected to bat first\n";
				PLayingTeam="Pakistan";
			}
			else{
				cout<<"\t\t\n\nPakistan has won the toss and elected to bowl first\n";
				PLayingTeam="India";
			}
		}
		else{
			tossDecision=rand()%2;
			if(tossDecision==0){
				cout<<"\t\t\n\nIndia has won the toss and elected to bat first\n";
				PLayingTeam="India";
			}
			else{
				cout<<"\t\t\n\nIndia has won the toss and elected to bowl first\n";
				PLayingTeam="Pakistan";
			}
		}
		Sleep(3000);
	}
	void showTeams(){
		system("color f2");
		cout<<"\n\n\t\t\t\tTeam Pakistan\n";
		for(int i=0;i<11;i++)
		{
			cout<<"\t\t\t"<<Pakistan.playerName[i]<<endl;
		}
		Sleep(3000);
		system("cls");
		system("color f1");
		cout<<"\n\n\t\t\t\tTeam India\n";
		for(int i=0;i<11;i++)
		{
			cout<<"\t\t\t"<<India.playerName[i]<<endl;
		}
		Sleep(3000);
	}
	void play()
	{
		system("cls");
		if(PLayingTeam=="Pakistan"){
			cout<<"\n\n\t\t\t\tOpeners\n\n";
			cout<<"\t\t\t"<<Pakistan.playerName[0]<<endl;
			cout<<"\t\t\t"<<Pakistan.playerName[1];
			Sleep(3000);
			system("cls");
			cout<<"\n\n\t\t\t\t"<<India.playerName[10]<<" will attack...\n\n";
		}
		else{
			cout<<"\n\n\t\t\t\tOpeners\n\n";
			cout<<"\t\t\t"<<India.playerName[0]<<endl;
			cout<<"\t\t\t"<<India.playerName[1];
			Sleep(3000);
			system("cls");
			cout<<"\n\n\t\t\t\t"<< Pakistan.playerName[10]<<" will attack...\n\n";
		}
		Sleep(3000);
		cout<<"\n\n\t\t\tGet ready the match is going to start.\n";
		system("cls");
		for(int i=10;i>=1;i--){
			cout<<"\n\n\n\n\n\n\t\t\t\t\t"<<i;
			
			Sleep(1000);
			system("cls");
		}
		cout<<"\n\n\n\n\n\n\t\t\t\t\tLETS PLAY\n";
		Sleep(3000);
			system("cls");
			
		//match started
		for(oLoop=1;oLoop<=5;oLoop++){
			for(bLoop=1;bLoop<=6;bLoop++){
				score=rand()%9+1;
				scoring();
				showCurrent();
				Sleep(2000);
				system("cls");
			}
			swapBatsman();
			changeBowler();
			Sleep(2000);
				system("cls");
		}
		
	}
	void swapBatsman(){
		if(pl1Status==true)
			pl1Status=false;
		else
			pl1Status=true;	
	}
	void changeBowler(){
		if(PLayingTeam=="Pakistan")
		{
			
			cout<<"\n\n\t\t\t"<<Pakistan.playerName[--Bowler];
		}
			
		else
			cout<<"\n\n\t\t\t"<<India.playerName[--Bowler];
	}
	void showCurrent()
	{
		if(PLayingTeam=="Pakistan"){
			if(pl1Status==true)
			{
				cout<<"\n\n\n\t\t\t"<<Pakistan.playerName[firstPlayer]<<"*\t\t"<<pakPlayersScore[firstPlayer]<<endl;
				cout<<"\t\t\t"<<Pakistan.playerName[SecondPlayer]<<"\t\t"<<pakPlayersScore[SecondPlayer]<<endl;
			}
			else{
					cout<<"\n\n\n\t\t\t"<<Pakistan.playerName[firstPlayer]<<"\t\t"<<pakPlayersScore[firstPlayer]<<endl;
				cout<<"\t\t\t"<<Pakistan.playerName[SecondPlayer]<<"*\t\t"<<pakPlayersScore[SecondPlayer]<<endl;
			
			}
			cout<<"\n\t\t\t"<<paktotalScore<<"/"<<out<<"\t\t\t\t\t over : "<<overs<<endl;
		}
		else{
			if(pl1Status==true)
			{
				cout<<"\n\n\n\t\t\t"<<India.playerName[firstPlayer]<<"*\t\t"<<IndplayersScore[firstPlayer]<<endl;
			cout<<"\t\t\t"<<India.playerName[SecondPlayer]<<"\t\t"<<IndplayersScore[SecondPlayer]<<endl;
		
			}
			else{
				cout<<"\n\n\n\t\t\t"<<India.playerName[firstPlayer]<<"\t\t"<<IndplayersScore[firstPlayer]<<endl;
			cout<<"\t\t\t"<<India.playerName[SecondPlayer]<<"*\t\t"<<IndplayersScore[SecondPlayer]<<endl;
		
			}
			cout<<"\n\t\t\t"<<indtotalScore<<"/"<<out<<"\t\t\t\t\t over : "<<overs<<endl;
	
				
			}
	}
	void scoring(){
		switch(score){
			case 1:
			cout<<"One run has been taken\n";
			swapBatsman();
			break;
			case 2:
			cout<<"One run has been taken\n";
			
			break;
			case 3:
			cout<<"One run has been taken\n";
			swapBatsman();
			break;
			case 4:
			cout<<"One run has been taken\n";
			
			break;
			case 5:
			cout<<"One run has been taken\n";
			swapBatsman();
			break;
			case 6:
			cout<<"One run has been taken\n";
			
			break;
			case 7:
			cout<<"No ball";
			bLoop--;		
				break;
			case 8:
			cout<<"Wide ball";
			bLoop--;
			break;
			case 9:
			system("color e2");
			cout<<"Wonderfull delivery took the batsman out of the pitch\n";
			
			break;
		}
		calcScore();
	}
	void calcScore(){
		if(PLayingTeam=="Pakistan")
		{
			if(pl1Status==true)
				pakPlayersScore[firstPlayer]+=score;
			else
				pakPlayersScore[SecondPlayer]+=score;
			paktotalScore+=score;
		}
		else
		{
			if(pl1Status==true)
				pakPlayersScore[firstPlayer]+=score;
			else
				pakPlayersScore[SecondPlayer]+=score;
			indtotalScore+=score;
		}
	}
};
int main(){
	
	Cricket match;
	match.Toss();
	match.showTeams();
	match.play();
}