#include<bits/stdc++.h>
using namespace std;

int check( int A[3][3]){
	int i,j,c1=0,c2=0,a='*';
	int t;
	t=char(a);
	for(i=0;i<3;i++){
	c1=0;c2=0;
	for(j=0;j<3;j++)
	if(A[i][j]==0) c1++;
	else if(A[i][j]==t) c2++;
	if(c2==3 || c1==3)
	return 1;
      }

      	for(i=0;i<3;i++){
	c1=0;c2=0;
	for(j=0;j<3;j++)
	if(A[j][i]==0) c1++;
	else if(A[j][i]==t) c2++;
	if(c2==3 || c1==3)
	return 1;
      }
    
	
	if(A[0][0]==0 && A[1][1]==0 && A[2][2]==0)
	return 1;
	else if(A[0][0]==t && A[1][1]== t && A[2][2]==t)
	return 1;
	else if(A[0][2]==0 && A[1][1]==0 && A[2][0]==0)
	return 1;
	else if(A[0][2]==t && A[1][1]==t && A[2][0]==t)
	return 1;
	return 0;
	
}
int main(){
	cout<<"\n\n";
	cout<<"\t\t\t\t   ****** WELCOME TO MDC. GAMING CENTRE ******\n\n";
	cout<<"\t\t\t\t\t&&&&&&&&&  TIC TOC TAC  &&&&&&&&&&\n";
	int ch;
	
	
	cout<<"\nEnter the names of the players !!\n";
	char p[20],q[20];
	cout<<"1. ";
	gets(p);
	cout<<"\n2. ";
	gets(q);
	cout<<"\nBecause "<<p<<" "<<" was the first one to register, hence will commence First and we would like to allot '0' for his movements as a TOKEN OF LOVE  :P :P\n";
	int choice=0,choice2,jk='*';
	//cin>>choice;
	int flag2;
	flag2=0;
	if(choice==0) choice2=char(jk);
	else choice2=0;
	int A[3][3],i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++) A[i][j]=-1; 
	int flag=0,inp;
	int x;
	int c;
	for(c=1;c<=9 && flag2!=1;c++){
		if(flag==0) cout<<"\n"<<p<<"'s turn !! \n";
		else cout<<"\n"<<q<<"'s turn !! \n";
		cin>>inp;
		if(flag==0) x=choice;
		else x=char(choice2);
	
		if(inp==1){i=0; j=0;
		}else if(inp==2){i=0; j=1;
		}else if(inp==3){i=0; j=2;
		}else if(inp==4){i=1; j=0;
		}else if(inp==5){i=1; j=1;
		}else if(inp==6){i=1; j=2;
		}else if(inp==7){i=2; j=0;
		}else if(inp==8){i=2; j=1;
		}else if(inp==9){i=2; j=2;
		}
		
		A[i][j]=x;
		
		if(check(A)==1){
			if(flag==0) cout<<"\n\t\t"<<p<<" won !!";
			else cout<<"\n\t\t\t"<<q<<" won  !!";
			cout<<" CONGRATULATIONS !! ";
			if(flag==0) cout<<"\n"<<q<<" Better luck next time :p";
			else cout<<"\n"<<p<<" Better luck next time :P";
			cout<<"\n\n########################################################################################################################";
			 flag2=1; }
			if(c%2==0) flag=0;
			else flag=1;
			if(c==9) {
			cout<<"OHH!! BOTH OF YOU WIN ! EQUALLY TALENTED ! HEINNN ??";
			cout<<"\n\n########################################################################################################################";
		}}
		}
	

