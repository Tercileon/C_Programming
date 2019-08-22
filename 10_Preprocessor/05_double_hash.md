|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# DOUBLE HASH OPERATOR ( ## )

```c
token1 ## token2        //becomes token1token2
```
Observing the above we see that the *DOUBLE HASH* operator (sometimes called the merging operator or token-pasting operator) conjoins the two tokens.

The ## preprocessor operator can *concatenate* arguments during macro expansion.

The preprocessor concatenates the tokens to the left and right of the operator, and ignores spacing in between them.

If the resulting text contains a macro name, then macro replacement is performed once again. (we will look at this more a bit later on).

### DOUBLE HASH ## operator uses:

* **Paste text together**
 ```c
///////////////// DOUBLE HASH OPERATOR EXAMPLE #1 //////////////////
#define STRINGIFY_FOR_REAL(x) #x
#define STRINGIFY(a) STRINGIFY_FOR_REAL(a)
#define PASTE_FOR_REAL(x, y) x##y
#define PASTE(a, b) PASTE_FOR_REAL(a,b)
int main(void)
{
    puts(STRINGIFY(PASTE(Bill, Ding));			// Right
    puts(STRINGIFY_FOR_REAL(PASTE_FOR_REAL(Brock, Lee));	// Wrong
[…code…]
}
///////////////// DOUBLE HASH OPERATOR EXAMPLE #1 //////////////////
///////////////////////* Post-Preprocessor *////////////////////////
#line 2 “double_hash_ex1.c”
int main(void)
{
    puts(“BillDing”);			
    puts(“PASTE_FOR_REAL(Brock, Lee)”);	
[…code…]
}
```
* **Prepend or append text**
```c
//////////////////// DOUBLE HASH OPERATOR EXAMPLE #2 /////////////////////
/* 
 *  The following code is an excerpt from the Zend Engine API (zend_API.h)
 *  The Zend Engine is a open source scripting engine that interprets PHP
 *  Copyright (c) 1998-2001 Zend Technologies Ltd. (http://www.zend.com)
 */

/* Function macros */
#define ZEND_FN(name) 		zif_##name
#define ZEND_NAMED_FUNCTION(name) 	void name(INTERNAL_FUNCTION_PARAMETERS)
#define ZEND_FUNCTION(name) 		ZEND_NAMED_FUNCTION(ZEND_FN(name))

/* Name macros */
#define ZEND_MODULE_STARTUP_N(module)	zm_startup_##module
#define ZEND_MODULE_SHUTDOWN_N(module)	zm_shutdown_##module
[…code…]

/* Declaration macros */
#define ZEND_MODULE_STARTUP_D(module)	int ZEND_MODULE_STARTUP_N(module)(INIT_FUNC_ARGS)
#define ZEND_MODULE_SHUTDOWN_D(module)	int ZEND_MODULE_SHUTDOWN_N(module)(SHUTDOWN_FUNC_ARGS)
[…code…]
```
* **Shortcut lengthy names**
```c
//////////////////// DOUBLE HASH OPERATOR EXAMPLE #3 ///////////////////
#define MERGE(x, y) x##y
#define FIRST_NAME(p, fN) strcpy(MERGE(p,.thePersonsFirstName), #fN);
#define LAST_NAME(p, lN) strcpy(MERGE(p,.thePersonsLastName), #lN);
#define ID(p, n) p##.thatPersonsEmployeeIdentificationNumber = n

struct PeopleAtWork
{
    char thePersonsFirstName[50];
    char thePersonsLastName[50];
    int thatPersonsEmployeeIdentificationNumber;
};

int main(void)
{
    struct PeopleAtWork hark;	// Declare hark of struct type PeopleAtWork
    FIRST_NAME(hark, Joseph);	// Define “Joseph” as hark’s first name
    LAST_NAME(hark, Harkleroad);	// Define “Harkleroad” as hark’s last name
    ID(hark, 31337);		// Define 31337 as hark’s employee ID
[…code…] }

////////////////////////// DOUBLE HASH OPERATOR EXAMPLE #3 /////////////////
////////////////////////* Post-Preprocessor *///////////////////////////////
#line 2 “double_hash_ex3.c”

struct PeopleAtWork
{
    char thePersonsFirstName[50];
    char thePersonsLastName[50];
    int thatPersonsEmployeeIdentificationNumber;
};

int main(void)
{
    struct PeopleAtWork hark;	
    strcpy(hark.thePersonsFirstName, “Joseph”);
    strcpy(hark.thePersonsLastName, “Harkleroad”);
    hark.thatPersonsEmployeeIdentificationNumber = 31337;
[…code…] }
```  
* **Automate variable declaration/definition**
```c
///////////////// DOUBLE HASH OPERATOR EXAMPLE #4 //////////////////

#define BIT_MASK_MAKER(n) bitMaskValue##n = n

int main(void)
{
    uint8_t BIT_MASK_MAKER(1); 	// 00000001
    uint8_t BIT_MASK_MAKER(2); 	// 00000010
    uint8_t BIT_MASK_MAKER(4); 	// 00000100
    uint8_t BIT_MASK_MAKER(8); 	// 00001000
    uint8_t BIT_MASK_MAKER(16); 	// 00010000
    uint8_t BIT_MASK_MAKER(32); 	// 00100000
    uint8_t BIT_MASK_MAKER(64); 	// 01000000
    uint8_t BIT_MASK_MAKER(128); 	// 10000000
[…code…]
}

///////////////// DOUBLE HASH OPERATOR EXAMPLE #4 //////////////////
////////////////////* Post-Preprocessor *//////////////////////////
#line 2 “double_hash_ex4.c”

int main(void)
{
    uint8_t bitMaskValue1 = 1;
    uint8_t bitMaskValue2 = 2;
    uint8_t bitMaskValue4 = 4;
    uint8_t bitMaskValue8 = 8;
    uint8_t bitMaskValue16 = 16;
    uint8_t bitMaskValue32 = 32;
    uint8_t bitMaskValue64 = 64;
    uint8_t bitMaskValue128 = 128;
[…code…]
}
```
### NOTE: DOUBLE HASH ## can be buggy and therefore DANGEROUS

---

|[Next Topic](/10_Preprocessor/06_undef.md)|
|---|
