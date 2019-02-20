// Dictionary project


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>

struct dict
 {
  char w[30];
  char m[50];
  };
  dict d[80]={
	      "Abolish","        to end",
	      "Obedient","dutifull",
	      "Enthusiasm","passionate or great interest",
	      "Frustation","disappointment",
	      "Generous","noble minded",
	      "Prodigal","wastefully extravagent",
	      "Scarce","        deficient in quantity",
	      "Fancy","        imagine or to see in someone's mind",
	      "Apoint","        assign a duty or responsibility",
	      "Entertain","Amusement or joy"

	      };
int count=10;
int i;

void find_words(dict b[])
{
 char s[30];
 int flag=0;
 cout<<"\nEnter the word to be searched for::";
 gets(s);
 for(i=0;i<count;i++)
  {
   if(strcmp(s,b[i].w)==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
   { cout<<"\nWORD FOUND";
  cout<<"\nMeaning of the word is ::"<<b[i].m;}

if(flag==0)
cout<<"\nSORRY,Word not found";
}

void add_word(dict e[])
{
 cout<<"\nEnter the word to be added::";
 gets(e[count].w);
 cout<<"\nEnter meaning::";
 gets(e[count].m);
 count++;
}

void display_all(dict c[])
{
  cout<<"\nWORD\t\t\tMEANING";
  for(i=0;i<count;i++)
   cout<<"\n"<<c[i].w<<"\t\t"<<c[i].m<<"\n";

}
int main()
 {
 char c;
 int ch;
 clrscr();
 cout<<"\n\tTHIS IS THE PROJECT FOR THE SOURCE CODE MANAGEMENT LAB";
 cout<<"\n\t-------------------------------------------------";
 do
 {
 cout<<"\n\n \t\t\tDICTIONARY MENU";
 cout<<"\n\t\t\t---------------\n";
 cout<<"\n** FIND A WORD";
 cout<<"\n** ADD A NEW WORD";
 cout<<"\n** DISPLAY ALL";
 cout<<"\n** EXIT";
  cout<<"\n\n* Enter your choice::";
  cin>>ch;
  if(ch==1)
  find_words(d);
  if(ch==2)
  add_word(d);
  if(ch==3)
  display_all(d);
  if(ch==4)
 { cout<<"So,program over";
  exit(0);
 }
 cout<<"\n\nDo you want to enter more(y/n)::";
 cin>>c;
 }while(c=='y');
return 0;
 getch();
}
