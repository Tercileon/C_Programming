|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# CONDITIONAL COMPILATION

A variety of preprocessor directives exist to accomplish conditional compilation

**Conditional compilation preprocessor directives:**
* Allows code to function on many different machines
* Increases the *PORTABILITY* of code
* Aids the programmer in changing the code generated (i.e. debugging, vs production code)
* Can be used to safely assemble code

The PREPROCESSOR, through the use of *conditional compilation*, allows great flexibility

Condition Compilation for ye newbs:
* #if - functions much like *if* statements
* #elif - works much like *else if* statements
* #else - functions much like *if..else* statements
* #ifdef - a common, specific application of #if
* #ifndef - a common, specific application of #if
* #endif - used as a tailing wrapper for #if[anything]
    * using this is like an extra safety blankey. 

#### BELOW IS A MORE INDEPTH VIEW OF CONDITIONAL COMPILATION:

## #if
```c
#if defined(name)			// If name *is* defined…
[…code…]				// …then conditionally compile this code.
#endif				// That is all.

#if !defined(name)		// If name is *not* defined…
[…code…]				// …then conditionally compile this code.
#endif				// That is all.
```
* Common in standard template library headers
* Checks *BOOLEAN* conditions (very very useful)
* Can utilize ***conditional operators***
* Wrapped with #endif
    * #if define() is interchangeable with #ifdef
    * #if !defined() is interchangeable with #ifndef
```c
#if defined(name1) && defined(name2)     	// If name1 *and* name2 are defined…
[…code…]					// …then compile this code.
#endif				      	// That is all.

#if name1 == 0 || defined(name2)        	// name1 is 0 *or* name2 is defined…
[…code…]				 	// …then compile this code.
#endif				      	// That is all.
```
* The real power of #if comes with compound conditional statements
* #if can check multiple comparative conditions at once
* To replicate this feature using **#ifdef** of **#ifndef**, nested preprocessor directives are necessary(and prove to be very useful).

## #elif
```c
#if name > 5			// If name1 is greater than 5…
[…code…]				// …then compile this code…

#elif name < 5			// …Otherwise, if name is less than 5…
[…code…]				// …then compile this code.
#endif				// That is all.
```
* #elif can be used to check *multiple* in-line conditions.
* NOT commonly used in header files (.h).
* Example of #elif that is Operating System (OS) INdependent:
```c
/////////////////////// CONDITIONAL COMPILATION EXAMPLE ///////////////////////
/* MyPortableCode.c */

#ifdef _WIN32
#    include Windows.h
#elif defined(__linux__)
     // #include Linux kernel headers
#elif defined(__unix__)
     // #include UNIX environment headers here
#elif defined(__APPLE__)
     // #include Mac OS X headers here
#endif

int main(void)
{
[…code…]
    return 0;
}

/////////////////////// CONDITIONAL COMPILATION EXAMPLE ///////////////////////
/* MyPortableCode.c */
#define WRAP(x) #x
#ifdef _WIN32
#    define THIS_OS WRAP(_WIN32)			// 32 and 64-bit Windows OS
#elif defined(__linux__)
#    define THIS_OS WRAP(__linux__)		// Linux kernel
#elif defined(__unix__)
#    define THIS_OS WRAP(__unix__)			// UNIX environment
#elif defined(__APPLE__)
#    define THIS_OS WRAP(__APPLE__)		// Mac OS X
#endif

int main(void)
{
    puts(THIS_OS);
    return 0;
}
```

## #else
```c
#if name > 5			// If name1 is greater than 5…
[…code…]				// …then compile this code…
#elif name < 5			// …Otherwise, if name is less than 5…
[…code…]				// …then compile this code…
#else				// …and if none of the conditions were true…
[…code…]				// …then compile this code.
#endif				// That is all.
```
* #else can be used to establish fall through conditions (see: switch or if/else statements)
* NOT commonly used in header files
* Example of #elif that is Operating System (OS) INdependent code expansion:
```c
///////////////////// CONDITIONAL COMPILATION EXAMPLE #4a /////////////////////
/* MyPortableCode.c */

#ifdef _WIN32
#    include Windows.h
#elif defined(__linux__)
     // #include Linux kernel headers
#elif defined(__unix__)
     // #include UNIX environment headers here
#elif defined(__APPLE__)
     // #include Mac OS X headers here
#else
#    error "Unknown compiler!"			// Error message
#endif
int main(void)
{
[…code…]
    return 0;
}

///////////////////// CONDITIONAL COMPILATION EXAMPLE #4b /////////////////////
/* MyPortableCode.c */
#define WRAP(x) #x
#ifdef _WIN32
#    define THIS_OS WRAP(_WIN32)			// 32 and 64-bit Windows OS
#elif defined(__linux__)
#    define THIS_OS WRAP(__linux__)		// Linux kernel
#elif defined(__unix__)
#    define THIS_OS WRAP(__unix__)			// UNIX environment
#elif defined(__APPLE__)
#    define THIS_OS WRAP(__APPLE__)		// Mac OS X
#else
#    define THIS_OS WRAP(Unknown compiler!)	// Error message
#endif
int main(void)
{
    puts(THIS_OS);
    return 0;
}
```

## #ifdef

```c
#ifdef name			// If name *is* defined…
[…code…]				// …then conditionally compile this code.
#endif				// That is all.

#ifndef name			// If name is *not* defined…
[…code…]				// …then conditionally compile this code.
#endif				// That is all.
```
* The preprocessor, through the use of conditional compilation, allows great flexibility.
* Conditional compilation...
    * Allows code to function on many different machines
    * Increases the portability of code
    * Ads the programmer in changing the code generated (i.e. debugging vs production code)
    * Can be used safely to assemble code

Some uses of ***#ifdef***:
1. Utilize debugging code that escapes production release
2. Avoid double-declaring/defining (for safety)
3. Header guards
4. OS independent code

#### Example of #ifdef uses:
1. Utilize debugging code that escapes production release
```c
/////////////// CONDITIONAL COMPILATION EXAMPLE #1a ////////////////
#define DEBUG			// Comment it out to skip DEBUG macros
#ifdef DEBUG			// If the DEBUG macro is defined…
/* This example is an expansion of "# Operator Example 1" */
#define DEBUG_INT(x) printf(#x " is %d", x)	// …then define this
#endif	/* DEBUG */		// That is all

int main(void)
{
    int someNum = 42;
#ifdef DEBUG			// If the DEBUG macro is defined…
    DEBUG_INT(someNum); 	// …then compile this
#endif /* DEBUG */		// That is all
[…code…]
}

/////////////// CONDITIONAL COMPILATION EXAMPLE #1b ////////////////
/* _DEBUG is defined in Visual Studio debug mode (/MTd or /MDd) */
#ifdef _DEBUG			// If the _DEBUG macro is defined…
/* This example is an expansion of "# Operator Example 1" */
#define DEBUG_INT(x) printf(#x " is %d", x)	// …then define this
#endif	/* _DEBUG */		// That is all

int main(void)
{
    int someNum = 42;
#ifdef _DEBUG			// If the _DEBUG macro is defined…
    DEBUG_INT(someNum); 	// …then compile this
#endif /* _DEBUG */		// That is all
[…code…]
}

/////////////// CONDITIONAL COMPILATION EXAMPLE #1c ////////////////
/* _DEBUG is defined in Visual Studio debug mode (/MTd or /MDd) */
#ifdef _DEBUG			// If the _DEBUG macro is defined…
/* This example is an expansion of "# Operator Example 1" */
#define DEBUG_INT(x) printf(#x " is %d", x)	// …then define this…
#else
#define DEBUG_INT(y) ;		// …Otherwise, define this.
#endif	/* _DEBUG */		// That is all

int main(void)
{
    int someNum = 42;
    DEBUG_INT(someNum); 	// Conditionally compiles this MACRO
[…code…]
}
```

2. Avoid double-declaring/defining (reason: SAFETY)
```c
/////////////// CONDITIONAL COMPILATION EXAMPLE #2 /////////////////

#ifdef NULL			// If the NULL macro is defined…
#undef NULL			// …then undefine it.
#endif				// That is all.

#define NULL ((void *)0)	// Redefine the NULL macro

int main(void)
{
    char * stringPointer = NULL;
[…code…]

    return 0;
}
```

3. Header guards
```c
/////////////// CONDITIONAL COMPILATION EXAMPLE #3 /////////////////
/* MyHeader.h */

#ifndef _MY_HEADER_		// If _MY_HEADER_ is not defined…
#define _MY_HEADER_		// …then define _MY_HEADER_ and…

int myFunction(int a, int b);			// …this declaration…
char myOtherFunction(char x, char y);		// …and this one…
void myLastFunction(void);			// …and this one too.

#endif				// That is all.
```

4. OS independent code
```c
///////////////////// CONDITIONAL COMPILATION EXAMPLE #4a /////////////////////
/* MyPortableCode.c */

#ifdef _WIN32
#    include Windows.h
#elif defined(__linux__)
     // #include Linux kernel headers
#elif defined(__unix__)
     // #include UNIX environment headers here
#elif defined(__APPLE__)
     // #include Mac OS X headers here
#else
#    error "Unknown compiler!"			// Error message
#endif
int main(void)
{
[…code…]
    return 0;
}

///////////////////// CONDITIONAL COMPILATION EXAMPLE #4b /////////////////////
/* MyPortableCode.c */
#define WRAP(x) #x
#ifdef _WIN32
#    define THIS_OS WRAP(_WIN32)			// 32 and 64-bit Windows OS
#elif defined(__linux__)
#    define THIS_OS WRAP(__linux__)		// Linux kernel
#elif defined(__unix__)
#    define THIS_OS WRAP(__unix__)			// UNIX environment
#elif defined(__APPLE__)
#    define THIS_OS WRAP(__APPLE__)		// Mac OS X
#else
#    define THIS_OS WRAP(Unknown compiler!)	// Error message
#endif
int main(void)
{
    puts(THIS_OS);
    return 0;
}
```

## SOME TAKE-AWAYS

The preprocessor, through the use of conditional compilation, allows great flexibility.

Conditional compilation:
* #if – functions much like if statements
* #elif – functions much like else if
* #else – functions much like if … else 
* #ifdef – a common, specific application of #if
* #ifndef – a common, specific application of #if
* #endif – used as a tailing wrapper for #if[anything]

## DEMO LAB - CONDITIONAL COMPILATION

### Write a simple C program that utilizes conditional compilation

---
### PERFORMANCE LAB 25

|[Performance Lab 25](/10_Preprocessor/performance_labs/Lab25.md)|
|---|
