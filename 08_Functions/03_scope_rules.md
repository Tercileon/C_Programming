|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Scope Rules

* Variables have two attributes: scope and class

### Scope

* The area of the program in which the variable is valid
* Either **global** or **local scope**
* Global (AKA File Scope)
    * Declared outside all blocks
    * Accessible at all levels/blocks/scopes
    * **NOTE:** global variables are generally frowned upon.
* Local (AKA Block Scope)
    * Declared inside a block
    * Accessible only within the block it was declared

### Class

* Either permanent or temporary
* **Permanent -** created and initialized before the program starts and remains until it terminates
* **Temporary -** allocated on "the stack"; memory is returned at the end of the block

* Global variables are ALWAYS permanent

* Local variables are TEMPORARY unless declared *static*

| **Declared** | **Scope** | **Class** | **Initialized** |
|---|---|---|---|
|Outside all blocks|Global|Permanent|Once|
|**static** outside all blocks|Global|Permanent|Once|
|Inside a block|Local|Temporary|Each time block is entered|
|**static** inside a block|Local|Permanent|Once|

* Both global and local variables can share names

* When invoked within their scope, local variables will "hide" global variables of the same name

* *static* means that once the variable is initialized (when used in a function) it will remain in memory until the program ends

```c
///variable scope example///

//this array is global

char scope[] = {"Global\n"};
int main(void)
{
    int i = 0;    //iterating the var
    printf("%s", scope);

    //this array is local to main()
    
    char scope[] = {"main\n"};
    printf("%s", scope);
    for (i = 0; i < 3; i++)
    {
        //this array is local to the for loop
        char scope[] = {"for\n"};
        printf("%s", scope);
    }

//[...] main() truncated
}

///variable scope output///

global
    main
        for
        for
        for
```
**NOTE:** Use unique variable names, it will help avoid summoning another variable by mistake.

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/04_storage_class_specifiers.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
