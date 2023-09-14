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

    list* insert(list* &head, int size ){  
        list* curr=head;
        for(int i=0;i<size-1;i++){  //size-1 since head is already initialized
            int x;
            cin>>x;
            curr->next= new list(x);
            curr=curr->next;
        }
        return curr;
        

    }

    void display(list* head,int size){
        list* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }

    void rotate(list* &head,list* &tail, int k){
        list *temp= tail;

        for(int i=0;i<k;i++){
            temp=tail;
            temp->next= head;
            head =head->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }

int main(){

    int k,size; 
    cout<<"Enter size of linked list: ";
    cin>>size;
    cout<<endl<<"Enter value of k: ";
    cin>>k;


    list *head = new list(0);
    list *tail= insert(head,size);
    display(head,size);
    rotate(head,tail,k);
    cout<<"After Rotating: "<<endl;
    display(head,size);
}
