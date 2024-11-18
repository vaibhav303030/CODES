#include<iostream>
using namespace std;
class music{
  public:
    int year,duration;
    string name,alb_name;
    music *next,*temp,*prev;
    void accept();
    void display();
    void update();
    void remove();
    void search();
}*start=NULL,*End=NULL,s;

void music::accept()
{
music *newnode=new music;
cout<<"\nEnter music details:";
cout<<"\nEnter name,album name,released year,duration:";
cin>>newnode->name>>newnode->alb_name>>newnode->year>>newnode->duration;
newnode->next=newnode->prev=NULL;
 if(start==NULL)
 {
  start=newnode;
 }
 else{
  temp=start;
  while(temp->next!=NULL)
  {
  temp=temp->next;
  }
   temp->next=newnode;
   newnode->prev=temp;
   End=temp;
  
 }
}

void music::display()
{
 temp=start;
 while(temp!=NULL)
{
 cout<<"\n"<<temp->name<<"\t"<<temp->alb_name<<"\t"<<temp->year<<"\t"<<temp->duration;
 temp=temp->next;
 }
}

void music::update()
{
 string title;
 cout<<"\nEnter title:";
 cin>>title;
 temp=start;
 while(temp!=NULL)
 {
   if(temp->name==title)
   {
   cout<<"\nEnter music name,album,year  and duration:";
   cin>>temp->name>>temp->alb_name>>temp->year>>temp->duration;
   break;
   }
  temp=temp->next;
 }
}


void music::remove()
{
 music *p;
 string title;
 cout<<"\nEnter title:";
 cin>>title;
 temp=start;
 while(temp!=NULL)
 { if(temp->name==title)
   {
   cout<<"\n"<<temp->name<<"\t"<<temp->alb_name<<"\t"<<temp->year<<"\t"<<temp->duration;
   break;
   temp=temp->next;
   } 
   p=temp;
 p->next=temp;
 delete p;
 }
}

void music::search()
{
 string title;
 cout<<"\nEnter title:";
 cin>>title;
 temp=start;
 while(temp!=NULL)
 {
   if(temp->name==title)
  cout<<"\n"<<temp->name<<"\t"<<temp->alb_name<<"\t"<<temp->year<<"\t"<<temp->duration;
  temp=temp->next;
 }
}

 int main()
 {
 int ch;
 do{
 cout<<"\n1.Accept music details\n2.Display music details\n3.Update music details\n4.Remove music details\n5.search music details";
 cout<<"\nEnter choice:";
 cin>>ch;
 switch(ch)
 {
  case 1:
  s.accept();
  break;
  
  case 2:
  s.display();
  break;
  
  case 3:
  s.update();
  break;
  
  case 4:
  s.remove();
  break;
  
  case 5:
  s.search();
  break;
 }
  }while(ch!=0);
   return 0;
 }