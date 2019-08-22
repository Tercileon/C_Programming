|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---
# FORMAT

Structures must be declared using the STRUCT statement (as seen below):

```c
/////struct syntax/////

struct <structureName>
{
    <data type> <member_name1>;
    <data type> <member_name2>;
    <data type> <member_name3>;
};

/////struct example//////

struct lotForSale
{
    int lot_number;
    float lot_cost;
    float square_footage;
};
```
---

**Structures can be defined using different methods.**

1. Initialized in conjunction with declaration.
```c
struct lotForSale
{
    int lot_number;
    float lot_cost;
    float square_footage;
};
/////stuct definition example #1/////
int main(void)
{
    struct lotForSale timberRange = { 8755, 2500, 6534 };
}
```
2. Individual members may be accessed/modified using the dot(.) operator.
```c
struct lotForSale
{
    int lot_number;
    float lot_cost;
    float square_footage;
};
/////stuct definition example #2/////
int main(void)
{
    //Declare a struct variable
    struct LotForSale elmStreet;

    //Define the first member
    elmStreet.lot_number = 8755;
    
    //Define the second member
    elmStreet.lot_cost = 25000;
    
    //Define the third member
    elmStreet.square_footage = 6534;
}
```
3. Pointers to structs may access/modify members using the arrow (->) operator.
```c
struct lotForSale
{
    int lot_number;
    float lot_cost;
    float square_footage;
};
/////stuct definition example #3/////
int main(void)
{
    //LotForSale variable
    struct LotForSale millionaireEstates;
    
    //LotForSale variable
    struct LotForSale countrysideAcres;
    
    struct LotForSale * currentLot = &millionaireEstates;
    
    //Define first member
    currentLot->lot_number = 1000000;
    
    //Define second member
    currentLot->lot_cost = 1000000;

    //Define third member
    currentLot->square_footage = 1000000; 
}
```

## Typedef

**typedef** is a keyword that allows us to give a type a new name. This prevents us from having to use the keyword "struct" all over the place. 

```c
// Normal
struct Student
{
    char student_name[256];
    int age;
};

struct Student guy1 = { "Someone", 32 };
struct Student guy2 = { "Someone Else", 24 };


// With typedef 
typedef struct
{
    char student_name[256];
    int age;
} Student;

// Then init using the type rather than the struct name
Student guy1 = { "Someone", 32 };
Student guy2 = { "Someone Else", 24 };


// We can go one more step and give the struct a name as well on typedef
typedef struct Student
{
    char student_name[256];
    int age;
} student;

/* This gives us the power provide an opaque type. Which ultimately allows for data hiding and other 
OOP principles by forcing maniplulation through calling of subroutines. This will make more sense in C++. 
*/
student * guy1 = (student*)malloc(sizeof(student));

strcpy(guy1->student_name, "Someone");
guy1->age = 32;

//etc


// Lastly, we can use the opaque type method above to pre set sizes and act on the nodes individually. This will be displayed in the demonstration lab for linked lists

```

---

|[Next Topic](/14_Structs/03_arrays_of_structs.md)|
