#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};
int main()
{
    struct student *head = NULL, *temp, *newnode, *ptr;
    int i, choice, search;
    for(i = 1; i <= 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));
        printf("Enter ID : ");
        scanf("%d", &newnode->id);
        printf("Enter Maths : ");
        scanf("%d", &newnode->Maths);
        printf("Enter Science : ");
        scanf("%d", &newnode->Science);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    while(1)
    {
        printf("\n1.Insert Entry");
        printf("\n2.Display List");
        printf("\n3.Exit");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("Enter ID after which insert : ");
            scanf("%d",&search);
            ptr = head;
            while(ptr != NULL && ptr->id != search)
            {
                ptr = ptr->next;
            }
            if(ptr == NULL)
            {
                printf("ID Not Found\n");
            }
            else
            {
                newnode = (struct student *)malloc(sizeof(struct student));
                printf("Enter New ID : ");
                scanf("%d",&newnode->id);
                printf("Enter Maths : ");
                scanf("%d",&newnode->Maths);
                printf("Enter Science : ");
                scanf("%d",&newnode->Science);
                newnode->next = ptr->next;
                ptr->next = newnode;
                printf("Inserted Successfully\n");
            }
        }
        else if(choice == 2)
        {
            ptr = head;
            while(ptr != NULL)
            {
                printf("\nID : %d",ptr->id);
                printf("\nMaths : %d",ptr->Maths);
                printf("\nScience : %d\n",ptr->Science);
                ptr = ptr->next;
            }
        }
        else if(choice == 3)
        {
            break;
        }
        else
        {
            printf("Invalid Choice");
        }
    }
    return 0;
}
