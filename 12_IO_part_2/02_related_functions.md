|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Related Functions:

|new|previously discussed|
|---|---|
|fopen()|getc()|
|fclose()|putc()|
||fgets()|
||fputs()|
||fprintf()|
||fscanf()|


### MODES

|mode|description|behavior|
|---|---|---|
|r|read|if missing, return NULL; if found, contents will not be modified|
|w|write|if missing, create file; if found, erase contents|
|a|append|if missing, create file; if found, add to the end|
|b|binary|some systems distinguish between text and binary files; may be necessary|

### Initialize a FILE variable (opening a file)
```c
FILE *fopen(const char *, const char *);
//The first argument is the file path, relative or otherwise
//The second argument represents the "mode"
//fopen() returns NULL if there is an error
//fopen() returns a FILE pointer on success
```

### Opening a File
```c
FILE * readFile_ptr = fopen("read-file.txt", "r"); 
FILE * writeFile_ptr = fopen("write-file.txt", "w");
FILE * logFile_ptr = fopen("log-file.txt", "a");
```
---
CONSIDER THE FOLLOWING:
1. What is the behavior if that file isn't there?
2. Can I write to that file?
3. If I did write to it, where in the file (beginning, middle, end) would that data appear?


---
---
**ANSWERS**

READ FILE:
1. Return NULL.
2. No, because the pointer to it is NULL? Even if it *was* there you couldnt write to it.
3. Silly rabbit, you can't write "read" files.

WRITE FILE:
1. Creates a new file of that name.
2. Yes
3. Beginning, because everything that may or may not have been in that file is now erased.

APPEND FILE:
1. Creates a new file of that name.
2. Yes
3. End, because it *appends* to the file.
---

### Opening a File *SAFELY*
```c
int main(void)
{
    /* open a file for writing */
    FILE * writeFile_ptr = fopen("write-file.txt", "w");

    /* verify the file opened */
    if(writeFile_ptr != NULL)
    {
        [...file operations...]
        fclose(writeFile_ptr);  //always fclose anything you fopen
    }
    else
    {
        puts("ERROR opening file!");
        return -1;
    }
    return 0;
}
```
### Closing a File
```c
int fclose(FILE *stream);
//causes stream to be flushed and the associated file closed

//////////EXAMPLE////////////

int main(void)
{
    FILE *logFile_ptr;
    
    //if you fopen it...
    logFile_ptr = fopen("my-log-file.txt", "a");

    [...file operations...]
    
    //fclose it!
    fclose(logFile_ptr);
    return 0
}
```
**Note:** fclose() every stream you fopen()!!!

---

### When reading a file...

Verify fopen() succeeded by checking for NULL pointers.

fclose() everything you fopen().

Read char-by-char until you hit EOF.

Read line-by-line until return value, EOF, etc...


* **CHAR BY CHAR** (see: getc()), watch for the EOF.
    * stdio.h defines a constant named EOF.
    * EOF is the end-of-file return value.
    * While reading a file stream, if you encounter EOF then you should stop reading.
```c
int main(void)
{
    FILE * myFile_ptr = fopen(“read-file.txt”, “r”); // Opens a read-only file
    char readFromFile = 0; // Store char-by-char input from myFile_ptr
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (readFromFile != EOF) // Continue reading until the end of file
        {
            readFromFile = getc(myFile_ptr); 	// Read one character
            putc(readFromFile, stdout); 		// Print that character
        }
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    else 			// …Otherwise, fopen() failed
    {
        puts(“Error opening file!”); 	// Tell the user and…
        return -1;			// …Return an error value
    }
    return 0;
}
```

* **LINE BY LINE** (see: fgets()), watch the return value.
    * fgets(), among other conditions, reads until EOF.
    * At EOF, fgets() returns a NULL pointer.
```c
int main(void)
{
    FILE * myFile_ptr = fopen(“read-file.txt, “r”); // Opens a read-only file
    char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
    char * tempReturnValue = tempBuff; // Holds fgets() return value
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (tempReturnValue) // Continue reading until return value is NULL
        {
            tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
            if (tempReturnValue) 	// If EOF hasn’t been reached…
            {
                puts(tempBuff);	// …print the buffer
            }
        }
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    […else return -1 // goes here…]
    return 0;
}
```

**Note:** Remember to build in safety checks!

**DemoLab:** Funk

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	FILE * myFile_ptr = fopen("CCCP.txt", "r"); // Opens a read-only file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, stdout); 		// Print that character
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		system("start https://youtu.be/YgGzAKP_HuM");
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}
	getchar(); getchar();
	return 0;
}
```

---
**Performance Lab:** Mighty Morphin

|[Performance Lab Mighty Morphin](/12_IO_part_2/performance_labs/PL_mighty_morphin.md)|
|---|

---

**Performance Lab:** Your Song

|[Performance Lab Your Song](/12_IO_part_2/performance_labs/PL_your_song.md)|
|---|

---

**Performance Lab:** Content copy (CHAR-BY-CHAR)

|[Performance Lab Char-by-char](/12_IO_part_2/performance_labs/PL_content_copy_char.md)|
|---|

---

**Performance Lab:** Content copy (LINE-BY-LINE)

|[Performance Lab Line-by-line](/12_IO_part_2/performance_labs/PL_content_copy_line.md)|
|---|

---

**Performance Lab:** USERNAMES

|[Usernames](/12_IO_part_2/performance_labs/PL_usernames.md)|
|---|
