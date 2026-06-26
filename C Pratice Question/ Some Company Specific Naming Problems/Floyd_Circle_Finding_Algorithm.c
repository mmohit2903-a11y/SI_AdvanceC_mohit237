//Floyd' Circle-Finding Algorithm ( Loop Detection ) / Expression Evaluator
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/************ LINKED LIST CYCLE ************/
struct Node {
    int data;
    struct Node* next;
};

int hasCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}

/************ EXPRESSION EVAL ************/
int eval(char *s) {
    int stack[100], top = -1;

    for (int i = 0; s[i]; i++) {

        if (isdigit(s[i])) {
            int num = 0;
            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            stack[++top] = num;
        }
        else if (s[i] == ' ')
            continue;
        else {
            int b = stack[top--];
            int a = stack[top--];

            switch (s[i]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }
    return stack[top];
}

/************ MAIN ************/
int main() {

    // Cycle example
    struct Node a = {1, NULL};
    struct Node b = {2, NULL};
    struct Node c = {3, NULL};

    a.next = &b;
    b.next = &c;
    c.next = &b;   // cycle

    if (hasCycle(&a))
        printf("Cycle Found\n");
    else
        printf("No Cycle\n");

    // Expression example (Reverse Polish Notation)
    char exp[] = "23+5*"; // (2+3)*5

    printf("Result = %d\n", eval(exp));

    return 0;
}