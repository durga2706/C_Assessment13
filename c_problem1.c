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
    struct student *head = NULL;
    struct student *newnode;
    struct student *ptr;
    while (1)
    {
        newnode = (struct student *)malloc(sizeof(struct student));
        printf("Enter ID : ");
        scanf("%d", &newnode->id);
        if (newnode->id == -1)
        {
            free(newnode);
            break;
        }
        printf("Enter Maths Mark : ");
        scanf("%d", &newnode->Maths);
        printf("Enter Science Mark : ");
        scanf("%d", &newnode->Science);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }
    printf("\nStudent Details\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("\nID : %d\n", ptr->id);
        printf("Maths : %d\n", ptr->Maths);
        printf("Science : %d\n", ptr->Science);

        ptr = ptr->next;
    }

    return 0;
}
