#include<iostream>
using namespace std;
// created 3X3 matrix for tic tac toe ===> 
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;                 // row of the matrix
int column;              // column of the matrix
char token='X';
bool tie= false;         
 string n1="";
 string n2="";

void functionOne () {         // <=== first function created for tic tac toe game structure
  
 

 // create structure
 cout<<"   |     |   \n";
 cout<<" "<<space[0][0]<<" | "<<space[0][1]<<"   | "<<space[0][2]<<"  \n";
 cout<<"___|_____|___\n";
 cout<<"   |     |   \n";
  cout<<" "<<space[1][0]<<" | "<<space[1][1]<<"   | "<<space[1][2]<<"  \n";
 cout<<"___|_____|___\n";
 cout<<"   |     |   \n";
  cout<<" "<<space[2][0]<<" | "<<space[2][1]<<"   | "<<space[2][2]<<"  \n";
 cout<<"   |     |   \n";
}


void functionTwo() {         //  <======== second function created for to show cross & circle==> X and O in perticular boxes

int digit;                         // created for user input 1 to 9
if(token=='X')                
{
  cout<<n1<<" ==> please enter : ";      // first cross ==> X will run for 1sr player
  cin>>digit;
}

if(token=='O')
{
  cout<<n2<<" ==> please enter : ";         // second circle ==> O will run for 2nd player
  cin>>digit;
}

if(digit==1)                   // this represent if input value is 1 then 1st box display X or O
{
  row=0;
  column=0;
}

if(digit==2)                   // this represent if input value is 2 then 2nd box display X or O
{
  row=0;
  column=1;
}


if(digit==3)                      // this represent if input value is 3 then 3rd box display X or O
{
  row=0;
  column=2;
}

if(digit==4)                     // this represent if input value is 4 then 4th box display X or O
{
  row=1;
  column=0;
}

if(digit==5)                  // this represent if input value is 5 then 5th box display X or O
{
  row=1;
  column=1;
}

if(digit==6)                        // this represent if input value is 6 then 6th box display X or O
{
  row=1;
  column=2;
}

if(digit==7)                      // this represent if input value is 7 then 7th box display X or O
{
  row=2;
  column=0;
}

if(digit==8)                            // this represent if input value is 8 then 8th box display X or O
{
  row=2;
  column=1;
}

if(digit==9)                          // this represent if input value is 9 then 9th box display X or O
{
  row=2;
  column=2;

}else if(digit<1||digit>9)               // if no value enterd by user in btn 1 to 9 than it will show error
{
  cout<<"Invail Input  plz enter valid value !!!"<<endl;

}

  // if their is any unused space in structure nor X and nor O then 
if(token=='X'&& space[row][column] !='X'&& space[row][column]  !='O')
{
space[row][column]='X';     // asign ==> X in 1st then next will ==> O in 2 nd
token='O';
}
else if(token=='O'&& space[row][column] !='X'&& space[row][column]  !='O')
{
  space[row][column]='O';
token='X';
}
else{
  cout<<"there is no empty space!"<<endl;
  
 // functionTwo();
}
functionOne();
}
bool functionThree()    // 3rd function created for it will check vertical and horizontal X or O 
{
  for(int i=0;i<3;i++)
  {
    if(space[i][0]==space[i][1]&&space[i][0]==space[i][2]|| space[0][i]==space[1][i]&& space[0][i]==space[0][i]==space[2][i])
    return  true;
  }
  if(space[0][0]==space[1][1]&&space[1][1]==space[2][2] || space[0][2]==space[1][1]&&space[1][1]==space[2][0])
  return true;

for(int i=0;i<3;i++)      // it will check game going on or not  if their is a space it means game is running 
{
  for(int j=0;j<3;j++)
  {
    if(space[i][j] !='X'&& space[i][j]!='O')
    {
      return false;
    }
  }
}
tie=true;
return false;

}

int main()
{                     // user details 
 cout<<"Enter the name of the first player: \n";
 getline(cin, n1);
 cout<<"Enter the name of second player: \n";
 getline(cin, n2);

 cout<<n1<<" is  1st player so he/she will play first \n";
 cout<<n2<<" is 2nd player so he /she will play second \n";


   while (!functionThree())    /// calling funtion line by line 

   {
    functionOne();
    functionTwo();
    functionThree();

   }
  if(token =='X'&& tie==false)     // condition 1st player for win 
  {
    cout<<n2<<" Wins !!"<<ends;
  }
  else if(token =='O'&&tie==false)            // condition 2nd player for win 
  {
    cout<<n1<<" Wins !!"<<endl;
  }
  else{                                       // condition for draw 
    cout<<"Its a draw!"<<endl;
  }
}