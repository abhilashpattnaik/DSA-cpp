#include<stdio.h>

struct node
{
    int data;
    struct node* next;

};

int main(){

    bool flag = true;
    int choice1 ,choice2;
    struct node* head = NULL;
    

    while(flag){
        printf("Enter your Choice:\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");

        scanf("%d",&choice1);
        if(choice1==1){

        }
        else if ((choice2==2) && (head!=NULL))
        {
            /* code */
        }
        else{
            printf("Wrong choice!! Enter Choice again :)\n")
        }
        

    }

    return 0;
}