#include<iostream>
using namespace std;


//linked list node
struct node{
    int info;
     node *link;
};
//global variables
 //to count the number of nodes in linked list
 node *start = NULL; //root node
 node *current = NULL; //for currentorary purpose
 node *newnode = NULL; //for new node 
//  node *prev= NULL;
 
int count=0;
void createNode(){
    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->link = NULL;
    cout<<"Enter the value\t";
    cin>>newnode->info;
}
void insert();
void insertbeg(); //this will insert the node at begining
void insertend(); //this will insert the node at end
void insertrand();
void deletebeg(); //this will delete the node at begining
void deleteend(); //this will delete the node at end
void deleterand(); 
void traverse();
void deletenode();
void search();
void showcount();
void reverse();
// int middle();
int main(){
    int op;
    do{
        cout<<"\n1 for insert\n2 for delete\n3 for display\n4 for search\n5 for displaying number of nodes\n6 for reversing the linked list\n7 for middle element\n0 for exit\n";
        cin>>op;
        switch(op){
            case 1:
                //insert function
                insert();
                break;
            case 2:
                //delete function
                deletenode();
                break;
            
            case 3:
                //display function
                traverse();
                break;
            
            case 4:
                //search function
                search();
                break;

            case 5:
                //show number of nodes
                showcount();
                break;
            case 6:
            //to reverse the linked list
            reverse();
            break;
            // case 7: 
            // middle();
           
            // break;
            case 0:
                exit(0);break;

            default:
                cout<<"\nPlease enter valid input\n";

        }
    }while(op != 0);
    return 0;
}

// int middle(){
//     node *fast=start,*slow=start;
//     if(fast->link!=NULL && fast!=NULL){
//     fast=fast->link->link;
//     slow=slow->link;
//     }
//     return slow->info;

// }
void insert(){
    int op;
    cout<<"\n1 for insert at begining\n2 for insert at end\n3 for insert at random position\n";
    cin>>op;
    switch(op){
        case 1:
            insertbeg();
            break;
        case 2:
            insertend();
            break;
        case 3:
            insertrand();
            break;
        default:
            cout<<"\nPlease enter valid insert operation\n";
    }
    count++;
}
void insertbeg(){
createNode();
newnode->link=start;
start=newnode;
}

void insertrand(){
    
    int pos;
if(start==NULL)
cout<<"no nodes is entered";
else{
cout<<"at what postion you want to entered";
cin>>pos;}
if(pos==1){
    insertbeg();
 } else if(pos==count+1){
    insertend();
 }else if (pos>1&&pos<=count)
    {
      createNode();
      current=start;
      for(int i=1;i<pos-1;i++)
   {   current=current->link;
   }
   newnode->link=current->link;
   current->link=newnode;
   
    }
    else{
   cout<<"please enter valid position\n";
   }
}
void insertend(){
    createNode();
    if(start==NULL){
    start=newnode;
   }
    else{
        current==start;
while(current->link!=NULL)
{
    current=current->link;
}
    current->link=newnode;

}
}
void deletenode(){
    int op;
    cout<<"\n1 for delete at begining\n2 for delete at end\n3 for delete at random position\n";
    cin>>op;
    switch(op){
        case 1:
            deletebeg();
            break;
        case 2:
            deleteend();
            break;
        case 3:
            deleterand();
            break;
        default:
            cout<<"\nPlease enter valid delete operation\n";
    }
    count--;
}
void deletebeg(){
if(start==NULL)
cout<<"no node to delete";
else
    {
    current=start;
    start=start->link;
    free(current);
    }
}

void deleteend(){
    if(start==NULL)
    cout<<"no node to delete";
    else{
        node *prev=NULL;
    prev=start ;
    while(current->link!=NULL)
    { prev=current;
     current=current->link;

    }
    free(current);
    prev->link=NULL;
}
}
void deleterand(){
    int pos;
    cout<<"entered the postion you want to delete ";
    cin>>pos;
if(start==NULL)
cout<<"no node is inserted ";
else if(pos==1)
    deletebeg();
    else if(pos==count)
    deleteend();
    else if(pos>1&&pos<=count)
    {  current=start;
      node*prev=start;
        for(int i=1;i<=pos-1;i++)
    {   prev=current;
        current=current->link;
}
prev->link=current->link;
free(current);
    }


}
void traverse(){
if(start==NULL)
cout<<"linked list is empty";
else{
    current=start;
    cout<<"all nodes in linked list are:\n";
while(current->link!=NULL)
{
 cout<<"\t"<<current->info;
 current=current->link;

}
cout<<"\t"<<current->info;
}
}
void showcount(){
    cout<<"number of nodes is "<<count;
}
void search(){
    int pos=1,value;
if(start==NULL)
cout<<"no nodes is present";
else 
{
cout<<"enter the value of the node:";
cin>>value;
current=start;

while(current->link != NULL){
            if(current->info == value){
                cout<<"\n"<<value<< "is found at"<< pos <<"postion";
                break;
            }
            current = current->link;
            pos++;
        }
        if(current->info == value && current->link == NULL){
            cout<<"\n"<<value<<"is found at" <<pos<< "postion";
        }
        else if(current->link == NULL){
            cout<<"\n"<<value<<" is not found in the linked list\n";
        }


}
}
void reverse(){
    node *prev=NULL;
    node *next=NULL;
     current=start;  

    while(current->link!=NULL){
     next=current->link;   
     current->link=prev;
     prev=current;
     current=next;
    }
    current->link=prev;
    start=current;
    cout<<"Linked list has been reversed";
    }
