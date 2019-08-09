<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# File Data Types

### What is a File?

A file is really a named section of storage on a system. Files are stored on the systems main storage device (i.e. SSD, HDD, etc...).

The C programming language treats files very similar to default streams (i.e. stdin, stdout, stderr).

### What is the File data type?

EASY: a pointer to a file. A stream.
SHORT: a structure containing information about a file.
LONG: The stdio.h header defines FILE as a MACRO that is a typedef'd, system-specific structure containing metadata about the state of a file handle. 

The file datatype may have different implementations depending on the system. One of the most important "members" of a file struct is the current location. Other than that, any file-related functions from stdio.h will concern themselves with the metadata of a file pointer.

file declaration:
```c
file * <file pointer variable>;         //example syntax
file * myFile_ptr;                      //real syntax
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/12_IO_part_2/02_related_functions.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
