//
// Created by Ahmed Sayed Mousse on 12/1/2022.
//

#include <stdio.h>
#include "LinkedList.h"
int main(){
    printf("which Assignment would u like to see. 1&2\n");
    int x1, x2=0, count=0, *dynamic_arr, arr[10];
    scanf("%d", &x1);
    switch (x1) {
        case 1:
            // This Assignment allows the user to use linked lists with the ability to remove nodes.
            printf("To add node enter 0\n");
            printf("To remove node enter 1");
            printf("To print the linked list enter 2\n");
            printf("To exit press 3\n");
            while (1) {
                printf("Your Choice: ");
                scanf("%d", &x1);
                switch (x1) {
                    case 0:
                        printf("Ok Please Enter the number u want to add\n");
                        scanf("%d", &x2);
                        add_node(x2, &head + count);
                        count += 1;
                        break;
                    case 1:
                        printf("Ok Please Enter the number u want to remove\n");
                        scanf("%d", &x2);
                        remove_node(x2);
                        count -= 1;
                        break;
                    case 2:
                        if (count == 0) {
                            printf("The List is Empty\n");
                            break;
                        }
                        for (int i = 0; i < count; i++) {
                            printf("Value %d is : %f", i, (&head + i)->data);
                        }
                        break;
                    case 3:
                        printf("Thank You\n Good Bye");
                        return 0;
                    default:
                        printf("Incorrect entry");
                        break;
                }
            }
        case 2:
            // This Assignment allows the user to use linked lists with the ability to add nodes at certain position.
            printf("To add node enter 0\n");
            printf("To remove node enter 1");
            printf("To print the linked list enter 2\n");
            printf("To exit press 3\n");
            while (1) {
                printf("Your Choice: ");
                scanf("%d", &x1);
                switch (x1) {
                    case 0:
                        printf("Ok Please Enter the number u want to add\n");
                        scanf("%d", &x2);
                        printf("Now Please Enter the number u want to add after\n");
                        scanf("%d", &x1);
                        add_node_before(x2, x1);
                        count += 1;
                        break;
                    case 1:
                        printf("Ok Please Enter the number u want to remove\n");
                        scanf("%d", &x2);
                        remove_node(x2);
                        count -= 1;
                        break;
                    case 2:
                        if (count == 0) {
                            printf("The List is Empty\n");
                            break;
                        }
                        for (int i = 0; i < count; i++) {
                            printf("Value %d is : %f", i, (&head + i)->data);
                        }
                        break;
                    case 3:
                        printf("Thank You\n Good Bye");
                        return 0;
                    default:
                        printf("Incorrect entry");
                        break;
                }
            }
        default:
            break;
    }
}
