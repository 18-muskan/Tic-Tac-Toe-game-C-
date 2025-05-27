//Muskan Ejaz 024
#include<iostream>
using namespace std;

int r,c;
bool draw =false;
char turn='X';
char  a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void display()
{
system("cls");
cout<<"  T I C  T A C  T O E  G A M E  "<<endl;
cout<<"       P L A Y E R 1[X]"<<endl;
cout<<"       P L A Y E R 2[0]"<<endl;
cout<<endl;
cout<<"\t  "<<a[0][0]<<"   |  "<<a[0][1]<<"   |  "<<a[0][2]<<"  "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t______|______|______"<<endl;
cout<<"\t  "<<a[1][0]<<"   |  "<<a[1][1]<<"   |  "<<a[1][2]<<"   "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t______|______|______"<<endl;
cout<<"\t  "<<a[2][0]<<"   |  "<<a[2][1]<<"   |  "<<a[2][2]<<"  "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t      |      |      "<<endl;
cout<<"\t      |      |      "<<endl;
}
void playerturn()
{
int choice ;
if(turn=='X')
{
cout<<"P L A Y E R 1[X] turn :";
}
if(turn=='0')
{
cout<<"P L A Y E R 2[0]turn :";
}
cin>>choice;
switch (choice){
case 1:
r=0;c=0; 
break ;
case 2:
r=0;c=1;
 break ;
case 3:
r=0;c=2; 
break ;
case 4:
r=1;c=0; 
break ;
case 5:
r=1;c=1; 
break ;
case 6:
r=1;c=2;
 break ;
case 7:
r=2;c=0; 
break ;
case 8:
r=2;c=1; 
break ;
case 9:
r=2;c=2; 
break ;
default:
cout<<"invalid choice"<<endl;
break;
}
if(turn=='X' && a[r][c] != 'X' && a[r][c] != '0') {
a[r][c]='X';
turn ='0';
}
else if(turn=='0' && a[r][c] != 'X' && a[r][c] != '0') {
a[r][c]='0';
turn ='X';
}
else 
{
cout<<"ALREADY FILLED"<<endl;
cout<<"TRY AGAIN ?_?"<<endl;
playerturn();
}
}
bool checkwin()
{
for(int i=0;i<3;i++) {
if(a[i][0]==a[i][1] && a[i][0]==a[i][2] || a[0][i]==a[1][i] && a[0][i]==a[2][i])
return false ;
}

if(a[0][0]==a[1][1] && a[0][0]==a[2][2] || a[0][2]==a[1][1] && a[0][2]==a[2][0])
return false ;

for(int i=0;i<3;i++) {
for(int j=0;j<3;j++) {
if( a[i][j]!='X' && a[i][j]!='0')
return true ;
}  }
draw = true ;
return false;
}
int main()
{
while(checkwin()) {
display();
playerturn();
checkwin();
}
if(turn =='X' && draw == false)
cout<<"PLAYER 2[X] W I N S !! CONGRATULATIONS  "<<endl;
else if(turn =='0' && draw ==false)
cout<<"PLAYER 1[0] W I N S !! CONGRATULATIONS "<<endl;
else
cout<<"GAME DRAW!!"<<endl;
return 0;
}
