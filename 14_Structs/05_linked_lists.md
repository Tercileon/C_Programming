<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Linked Lists

A chain of items (a node).

Each item points to the next one  in the chain.

Any item in the chain can be followed to the end (note: there are exceptions to this).

The chain of items becomes a path/trail to follow.

---

The FIRST node is referred to as the "head".

The LAST node is referred to as the "tail".

Two **common** types of linked lists:

#### SINGLELY linked

![](/assets/singleLink.JPG)





#### DOUBLY linked

![](/assets/doubleLink.JPG)

## Singly linked, singly discussed
```c
struct Student90COS {
    char student_initials[4];
    int student_number;
    struct Student90COS * next_node;
};

struct Student90COS MQT16_01_S1  = { “MTA”, 1,  NULL };
struct Student90COS MQT16_01_S2  = { “LJB”, 2,  &MQT16_01_S1 };
struct Student90COS MQT16_01_S3  = { “JVC”, 3,  &MQT16_01_S2 };
struct Student90COS MQT16_01_S4  = { “DVF”, 4,  &MQT16_01_S3 };
struct Student90COS MQT16_01_S5  = { “JCF”, 5,  &MQT16_01_S4 };
struct Student90COS MQT16_01_S6  = { “JMH”, 6,  &MQT16_01_S5 };
struct Student90COS MQT16_01_S7  = { “PAP”, 7,  &MQT16_01_S6 };
struct Student90COS MQT16_01_S8  = { “SJS”, 8,  &MQT16_01_S7 };
struct Student90COS MQT16_01_S9  = { “SRW”, 9,  &MQT16_01_S8 };
struct Student90COS MQT16_01_S10 = { “JJW”, 10, &MQT16_01_S9 };

struct Student90COS MQT16_01_S10 = { “JJW”, 10, NULL };
struct Student90COS MQT16_01_S9  = { “SRW”, 9, &MQT16_01_S10 };
struct Student90COS MQT16_01_S8  = { “SJS”, 8, &MQT16_01_S9 };
struct Student90COS MQT16_01_S7  = { “PAP”, 7, &MQT16_01_S8 };
struct Student90COS MQT16_01_S6  = { “JMH”, 6, &MQT16_01_S7 };
struct Student90COS MQT16_01_S5  = { “JCF”, 5, &MQT16_01_S6 };
struct Student90COS MQT16_01_S4  = { “DVF”, 4, &MQT16_01_S5 };
struct Student90COS MQT16_01_S3  = { “JVC”, 3, &MQT16_01_S4 };
struct Student90COS MQT16_01_S2  = { “LJB”, 2, &MQT16_01_S3 };
struct Student90COS MQT16_01_S1  = { “MTA”, 1, &MQT16_01_S2 };
```
---

![](/assets/linkedStruct.JPG)
```c
struct Linked = {NULL, 1001, "Record1", NULL};
```

**Add a node to a SINGLY linked list:**
1. Choose a position.
2. Point the new node to the next node.
3. Point the previous node to the new node

(SEE BLEOW)

![](/assets/linkedListEX.JPG)

**Add a node to a DOUBLY linked list:**
1. Choose a position
2. Point the new node to the next node
3. Point the new node to the previous node
4. Point the previous node to the new node
5. Point the next node to the new node

(SEE BLEOW)

![](/assets/doubleLinkedListEX.JPG)

## Linked lists, SINGLY or DOUBLY, may be made **circular** by connecting the *head* and *tail* nodes.

![](/assets/circList.JPG)

### DEMONSTRATION LABs:
### Demo Struct 1

```c
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student90COS
{
    char student_initials[4];
    int student_number;
    struct Student90COS * next_node;
}
node;
int main(void)
{
    node * MQT18_01_S1 = (node*)malloc(sizeof(node));  //head
    node * MQT18_01_S2 = (node*)malloc(sizeof(node));
    node * MQT18_01_S3 = (node*)malloc(sizeof(node));  //tail

    //head
    strcpy(MQT18_01_S1->student_initials, "LOL");
    MQT18_01_S1->student_number = 1;
    MQT18_01_S1->next_node = MQT18_01_S2;

    //node2
    strcpy(MQT18_01_S2->student_initials, "KAY");
    MQT18_01_S2->student_number = 2;
    MQT18_01_S2->next_node = MQT18_01_S3;

    //tail
    strcpy(MQT18_01_S3->student_initials, "YAY");
    MQT18_01_S3->student_number = 3;
    MQT18_01_S3->next_node = NULL;
}
```

---
### Demo Struct 2
```c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student90COS
{
    char student_initials[4];
    int student_number;
    struct Student90COS * next_node;
}
node;
void spillList(node *n);
int main(void)
{
    node * MQT18_01_S1 = (node*)malloc(sizeof(node));  //head
    node * MQT18_01_S2 = (node*)malloc(sizeof(node));
    node * MQT18_01_S3 = (node*)malloc(sizeof(node));  //tail

    //head
    strcpy(MQT18_01_S1->student_initials, "LOL");
    MQT18_01_S1->student_number = 1;
    MQT18_01_S1->next_node = MQT18_01_S2;

    //node2
    strcpy(MQT18_01_S2->student_initials, "KAY");
    MQT18_01_S2->student_number = 2;
    MQT18_01_S2->next_node = MQT18_01_S3;

    //tail
    strcpy(MQT18_01_S3->student_initials, "YAY");
    MQT18_01_S3->student_number = 3;
    MQT18_01_S3->next_node = NULL;

    spillList(MQT18_01_S1);
}

// Prints out a list starting at node n
void spillList(node *n)
{
    while (n != NULL)
    {
        printf("%d: %s\n", n->student_number, n->student_initials);
        n = n->next_node;
    }
}
```

---
### COMPLETE PERFORMANCE LAB - Linked List

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/14_Structs/performance_labs/Lab_Linked_list.md" rel="Linked List"> Linked List </a>

