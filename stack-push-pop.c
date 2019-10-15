#include <stdio.h>
int i, top = 0, max = 5, item, c, stk[20], top;

int push() {
    top++;
    if (top == max) {
        printf("stack is full.");
        return 0;
    }

    printf("Enter element to push: ");
    scanf("%d", &item);

    stk[top] = item;
    printf("stack: \n");
    for (i = top; i >= 1; i--) {
        printf("%d\n", stk[i]);
    }


}

int pop() {
    top--;
    if (top == 0) {
        printf("stack is empty\n");
        return 0;
    }

    printf("stack: \n");

    for (i = top; i >= 1; i--) {
        printf("%d\n", stk[top]);
    }

}

int main()
{
    for(;;) {
        printf("Enter your choice: \n1. Push \n2. Pop\n3.Exit\n>>>");
        scanf("%d", &c);


          switch(c) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;

            default:
                return 0;
        }
    }



    return 0;
}
