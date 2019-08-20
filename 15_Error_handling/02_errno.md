|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# errno.h

The errno.h header file supports an error-reporting mechanism. This mechanism provides an external static **memory** location (ERRNO).

Some library functions place a value in this memory location to report an error. A program, or functions in this *header* file, can check the value of ERRNO.

NOTE: ERRNO error reporting is less than **HI TECH**!

```c
//////////example errno values/////////////////


FILE * missingFile = fopen(“Z:\\Missing.txt”, “r”);
// errno == ENOENT == 2 /* No such file or directory */

char * missingPointer = malloc(9999999999999999999);
// errno == ENOMEM == 12 /* Out of memory */

FILE * lockedFile = fopen(“C:\\Windows\\Notepad.exe”, “w”);
// errno == EACCESS == 13 /* Permission denied */

FILE * badFileName = fopen(“C:\\Temp\\!@#$%^&*.txt”, “w+”);
// errno == EINVAL == 22 /* Invalid argument */

float imaginaryNumber = sqrt(-1);
// errno == EDOM == 33 /* Math argument out of domain of func */

///////////errno-related uses//////////////////

int feof(FILE *stream)
// Tests the end-of-file indicator for “stream”, non-0 if set

int ferror(FILE *stream)
// Tests the error indicator for the “stream”, non-0 if set 

void clearerr(FILE *stream)
// Clears the end-of-file and error indicators for “stream”

void perror(const char *s)
// Print a system error message to standard error

return <n>
// Specify <n> as the errno to provide the nature of error

char *strerror(int errnum)
// Returns a string describing the error number
```

When checking *errno*, make an immediate copy

Different error numbers may come and go durning the execution of your code.(this is normal)

```c
/////////////////////PRO-TIP////////////////////////

if (myFunc() == -1)			// -1 typically an error
{
    currentErrno = errno;		// Save errno
    printf(“myFunc() failed!”);	// Provide feedback
}

////////////// COMMON MISTAKE /////////////////////

if (myFunc() == -1) 			// -1 typically an error
{
    printf(“myFunc() failed!”);	// printf() may update errno
    currentErrno = errno;		// Errno wasn’t preserved
}
```

### DEMO LAB - EOL

DEMONSTRATION LAB I.8.a-2 "End of Line"
Open an existing file
		If the FILE pointer is NULL: Store the errno
		Print an error message (perror)
		Print the string associated witih the errno (strerror)
		Immediately utilize the errno as a return value
		Utilize feof() to read a file char by char until the end

```c
#define _CRT_SECURE_NO_WARNINGS	
#include <string.h>
#include <errno.h>
#include <stdio.h>
void error_reporting(int currErrno);

int main(void)
{
	int currentErrno = 0;
	char currentChar = 0;
	// Open an existing file 
	FILE * weirdFile = fopen("C:\\Temp\\TR-Test-Input-File.txt", "r");
	// Store the errno
	currentErrno = errno;
	if (!weirdFile)
	{
		// Print an error message utilizing the string associated with the errno
		error_reporting(currentErrno);
		// Immediately utilize errno as the return value
		return currentErrno;
	}
	else
	{
		// Utilize feof() to read a file char by char until the end
		while (!feof(weirdFile))
		{
			currentChar = getc(weirdFile);	// Read a char and...
			putchar(currentChar);			// ...print a char
		}
	}
	return 0;
}
void error_reporting(int currErrno)
{
	char* errStr; 
	if (currErrno)
	{
		perror("Error");
	}
	return;
}
```
---
### PERFORMANCE LAB - ERRNO
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/15_Error_handling/Performance_Labs/Lab_errno.md" rel="ERRNO"> ERRNO </a>
