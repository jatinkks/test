#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct nodea{
int data;
struct nodea *next;
};
struct nodeb{

int data;
struct nodeb *down;
struct nodea* l;

};
struct nodeb* head,* use;
void ins(int y)
{
int x,a,b,c;
cout<<"hi use";
struct nodea * temp,* current; 
temp=(struct nodea *)malloc(sizeof(struct nodea));
temp->data=y;
temp->next=NULL;

if (use->l==NULL)
{
	use->l=temp;
	current=temp;
	cout<<"yes                              ";
	
}
else
{current=use->l;
	while(current->next!=NULL)
		current=current->next;
	current->next=temp;
	current=temp;

}
cout<<current->data;
}
void insert(int y)
{
int x,a,b,c,spe;
struct nodeb * temp,* current, *use; 
temp=(struct nodeb *)malloc(sizeof(struct nodeb));
temp->data=y;
temp->l=NULL;
temp->down=NULL;
use=temp;
if (head==NULL)
{
	head=temp;
	current=temp;
	
}
else
{current=head;
	while(current->down!=NULL)
		current=current->down;
	current->down=temp;
	current=temp;
	

}
cout<<"enter number of sub-nodes";
cin>>x;
for(a=0;a<x;a++)
{

		cout<<"Enter data in sub-nodes";
		cin>>spe;
		ins(spe);
		
}

}
int main() 
{
		int i,j,k,x,y;
	head=NULL;
	cout<<"Enter no of node";
	cin>>x;
	for(i=0;i<x;i++)
	{
		cout<<"enter data in main node";
		cin>>y;
		insert(y);

	}
} 