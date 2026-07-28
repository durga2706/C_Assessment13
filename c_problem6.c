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
    struct student *top = NULL;
    struct student *newnode, *ptr;
    int choice;
    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display Stack");
        printf("\n4.Exit");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            newnode = (struct student *)malloc(sizeof(struct student));
            printf("Enter ID : ");
            scanf("%d",&newnode->id);
            printf("Enter Maths : ");
            scanf("%d",&newnode->Maths);
            printf("Enter Science : ");
            scanf("%d",&newnode->Science);
            newnode->next = top;
            top = newnode;
            printf("Data Pushed Successfully\n");
        }
        else if(choice == 2)
        {
            if(top == NULL)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                ptr = top;
                printf("\nDeleted Record\n");
                printf("ID : %d\n",ptr->id);
                printf("Maths : %d\n",ptr->Maths);
                printf("Science : %d\n",ptr->Science);
                top = top->next;
                free(ptr);
            }
        }
        else if(choice == 3)
        {
            if(top == NULL)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                ptr = top;
                printf("\nStack Elements\n");
                while(ptr != NULL)
                {
                    printf("\nID : %d",ptr->id);
                    printf("\nMaths : %d",ptr->Maths);
                    printf("\nScience : %d\n",ptr->Science);
                    ptr = ptr->next;
                }
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }
    return 0;
}
