#include<iostream>
using namespace std;

struct node
{
    int info;
    node *link;
    node *back;
};
    node* start=NULL;
    
    node* current=NULL;
    node* newnode=NULL;

    int count=0;
void createnode();
void insert();
void deletenode();
void traverse();
void search();
void showcount();
void insertbeg();
void insertend();
void insertrand();
void deletebeg();
void deleteend();
void deleterand();

void createnode(){

    newnode=(node*)malloc(sizeof(node));
    newnode->link=NULL;
    newnode->back=NULL;
    cout<<"Enter the value ";
    cin>>newnode->info;    
}
int main(){
int op;
    do{
        cout<<"\n1 for insert\n2 for delete\n3 for display\n4 for search\n5 for displaying number of nodes\n0 for exit\n";
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
            
            case 0:
                exit(0);

            default:
                cout<<"\nPlease enter valid input\n";

        }
    }while(op != 0);


return 0;
}
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
    createnode();
newnode->link=start;
start=newnode;
cout<<"Node has been inserted";
}
void insertend(){
    createnode();
    node* end=NULL;
    current=start;
    while(current->link!=NULL){
        current=current->link;
    }
current->link=newnode;
end=newnode;
cout<<"Node has been inserted";
}
void insertrand(){
createnode();
    int pos;
    cout<<"At what postion you want to entered: ";
    cin>>pos;
    current=start;
    if(pos==1){
        insertbeg();
    }else if (pos==count+1)
    {
        insertend();
    }
else if(pos>1&&pos<=count){
for(int i=1;i<pos-1;i++){
    current=current->link;
}
    newnode->link=current->link;
    current->link=newnode;

}
cout<<"Node has been inserted";
}
void deletenode(){
    int op;
    cout<<"\n1 for delete starting node\n2 for delete last node\n3 for delete random position node\n";
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
    }
    count--;
}
void deletebeg(){
    current=start;
    start=start->link;
    free(current);
    cout<<"node has been deleted";

}
void deleteend(){
    current=start;
    node*prev=NULL;
    node*end=NULL;
while(current->link != NULL)
{   prev=current;
    current=current->link;
}
prev->link=NULL;
end=prev;
free(current);
cout<<"node has been deleted";
}
void deleterand(){
int pos;
cout<<"enter the postion where you want to delete: ";
cin>>pos;
    node*prev=NULL;
    current=start;
    if(pos==1){
        deletebeg();
    }else if (pos==count)
    {
      deleteend();
    }
    else if(pos>1 && pos<count)
    { for(int i=1;i<pos;i++)
    {
        prev=current;
        current=current->link;
    }
       prev->link=current->link;
       free(current);
}
cout<<"node has been deleted";
}
void traverse(){
current=start;
while(current->link!=NULL)
{
cout<<"\t"<<current->info;
    current=current->link;
}
cout<<"\t"<<current->info;
}
void search(){
    int value;
    int pos=1;
cout<<"Enter the value to search: ";
cin>>value;
    current=start;
    while(current->link!=NULL){
        if(current->info==value){
            cout<<"value found at " <<pos<< "postion";
            break;
        }
        current=current->link;
        pos++;
    }
    if(current->info == value && current->link == NULL){
            cout<<"\t"<<value <<"is found at"<< pos <<"postion";
        }
        else if(current->link == NULL){
            cout<<value << "is not found in the linked list";
        }
}
void showcount(){
    cout<<"The number of node in linked list is: "<<count;
}
