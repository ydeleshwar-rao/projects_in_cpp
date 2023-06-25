#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//created class for storing data
class Library{
  public:
    int id;
    char name [100];
    char author[100];
    char student[100];
    int price;
    int pages;
};
int main(){
  Library lib[20];
  int input=0;
  int count=0;
  while(input!=3)
  {
    // instruction for exicuting task

    cout<<"Enter 1 to input details like id,name,auther,student,price,pages"<<endl;
    cout<<"Enter 2 to display details"<<endl;
    cout<<"Enter 3 to quit"<<endl;
    cin>>input;
// switch case used for taking inputs from user step by step=>
    switch (input)
    {
      // case 1 => helpes to take input from user 
    case 1:
    start :
    cout<<"Enter Book Id"<<endl;
    cin>>lib[count].id;
    cout<<"Enter Book Name"<<endl;          
     cin.getline(lib[count].name,100,',');                                                                 //cin>>lib[count].name;
    cout<<"Enter Book author"<<endl;
    cin.getline(lib[count].author,100,',');   
     cout<<"Enter Book student name"<<endl;
    cin.getline(lib[count].student,100,',');                                                                    //cin>>lib[count].student;
    cout<<"Enter Book price"<<endl;
    cin>>lib[count].price;
    cout<<"Enter Book pages"<<endl;  
     cin>>lib[count].pages;
    count++;
        break;
        // case 2 used for show output (user details)  from case 1 
        case 2:
        for(int i=0;i<count;i++){
            cout<<"BookId : "<<lib[i].id<<endl;
            cout<<"BookName : "<<lib[i].name<<endl;
            cout<<"BookStudent : "<<lib[i].student<<endl;
            cout<<"Bookprice : "<<lib[i].price<<endl;
            cout<<"Bookpages : "<<lib[i].pages<<endl;
                
        }break;
        // case 3 used for exit from task
        case 3:
        exit(0);
        break;
        default:
        cout<<"you have entered worng value"<<endl;
        goto start;
    }


  }
}
