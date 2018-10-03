#include<iostream>
#include<stdlib.h>
using namespace std;
struct student{

	int data;
	student *link;
}*top;

void push(){
  int item;
  cout<<"enter the element: ";
  cin>>item;
  student* temp=new student();
  temp->data=item;
  temp->link=top;
  top=temp;
}

void pop(){
	student* temp;
	if(top==NULL)
{
	cout<<"underflow "<<endl;
	return;
}
	temp=top;
	top=top->link;
	free(temp);
}

void display(){
 student* temp=top;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->link;
   }
  cout<<endl<<endl;
}

int main(){

 top=NULL;
 int x,k,n;
 while(1){
	cout<<"select from the following "<<endl;
	cout<<"1. pushing elements into stack"<<endl;
	cout<<"2. pop out the elements"<<endl;
	cout<<"3.display the stack"<<endl;
	cout<<"4. exit"<<endl;
    cin>>k;
	switch(k){
	  	case 1:push();
		       break;
		case 2:pop();
			break;
		case 3:display();
			break;
		case 4:return(0);
		default: cout<<"incorrect choice "<<endl;
    }
      
  }
  return(0);
}
