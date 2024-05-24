#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

int main(){
    
    int flag = true;
    int val,choice;
    struct Node* head = NULL;

    cout<<"Insertion into Linked List"<<endl;
    cout<<"[currently Linked List is empty]"<<endl;

    void ShowList(struct Node* node){
        while (node!=NULL)
        {
            cout<<node->data<<" --> ";
            node = node->next;

            if(node == NULL)
                cout<<"null"<<endl
        }
        
    }

    while(flag){
        
        cout<<"Enter data to be inserted"<<endl;
        cin>>val;

        cout<<"Choose Option:"<<endl;
        cout<<"1. Insert before head "<<endl;
        cout<<"2. Insert at last (after tail) "<<endl;
        cout<<"3. Insert in between head and tail "<<endl;
        cout<<"4. Exit the code"<<endl;

        cin>>choice;

        if(choice==1)
        {
            if(head==NULL){
                head->data = val;
                head ->next = NULL;
                ShowList(head);
            }
            else{
                struct Node* newNode = new Node;
                newNode->data = val;
                newNode->next = head;
                head = newNode;
                ShowList(head);

            }
        }

        else if (choice==2)
        {
            if(head==NULL){
                head->data = val;
                head ->next = NULL;
                ShowList(head);
            }
            else{
                struct Node* newNode = new Node;
                newNode->data = val;
                newNode->next = NULL;
                struct Node* temp = head;

                while(temp->next!=NULL){
                    temp = temp->next;
                }

                temp->next = newNode;
            }
        }
        else if (choice==3)
        {
            
        }

        else if (choice == 4)
            {flag = false;}

        else
            count<<"Wrong Choice!! Enter Again. "<<endl;
        
        
    }

return 0;
}
