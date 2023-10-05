#include <iostream>
using namespace std;

class list{
    public:
        int data;
        list* next;
    list(int x){
        data=x;
        next=NULL;
    }
};

    void display(list* head){
        list* curr= head;

        while(curr!=NULL){
            cout<<curr->data<<"->";
            curr=curr->next;
        }
        cout<<"NULL"<<endl;
    }

    void insert(list* &head,int size){
        list* curr= head;
        int i=0;
        while(i <size){
            int x;
            cin>>x;
            curr->next= new list(x);
            curr=curr->next;
            i++;
        }
        head=head->next;

    }

    void groupodd(list* &head, int size){

        list *curr=head;
        list *temp=head;
        list *tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        size=size/2;
        for(int i=0;i<size;i++){
            temp=curr->next;
            curr->next=curr->next->next;
            tail->next=temp;
            tail=temp;
            curr=curr->next;
        }
        tail->next=NULL;

    }

int main(){

    int size;
    cin>>size;

    list* head= new list(1);
    insert(head,size);
    display(head);
    groupodd(head,size);
    cout<<"after groupping odd: "<<endl;
    display(head);

    
}
