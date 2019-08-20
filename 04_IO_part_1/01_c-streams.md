|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# C Streams

C Streams are a common, logical interface to various computer devices. Input/Output, whether physical, electronic or both, are mapped into logical streams. Specifically, it's a sequence of bytes of data. There are two types of streams:

### Text Stream

Text streams consist of one or more lines, zero or more characters and include a terminating new-line character. Unix for instance, adopted a standard internal format for all text streams. Each line of text is terminated by a new-line character. The string of characters that go into or come out of a text stream may have been modified due to specific system conventions. This could result in a possible difference between input and output when using text stream.

For example, some implementations when a space-character precedes a new-line character in the input, the space character gets removed out of the output. But for the most part, when data consists of only printable characters and control characters like horizontal tab and new-line... the input and output of a text stream are equal.

### Binary Stream

Binary streams are pretty straight forward. A binary is an ordered sequence of characters that can transparently record internal data. Data written to a binary stream shall always equal data that gets read out under the same implementation. Though binary streams may have an implementation-defiined number of nul characters appended to the end of the stream. Unix opted to go with 8-bit binary codes \(UTF-8\) to open/read any and all text files. Thus, Unix obliterated the long-standing distinction between text streams and binary streams. This is a good thing and makes your life easier when working with Unix systems.

### What does all of this mean?

As we learned above, Unix-like systems use UTF-8 as the default character encoder for **ALL TEXT FILES** while Windows uses UTF-16 \(unicode\) and assumes char-based strings are in a **legacy code page.** Thus, there are some things we need to note when outputting to Windows vs Linux. The primary difference being **line breaks.** Windows looks for a **\r\n** while Linux looks for only a **\n.** There are also a host of special characters as mentioned above, that may produce odd outputs on Windows.

## Standard Streams

### stdin - Standard Input

The purpose of Standard Input is **input buffering** and it's default method points to **keyboard.**

### stdout - Standard Output

The purpose of Standard Output is **output buffering** and it's default method points to **screen.**

### stderr - Standard Error

The purpose of Standard Error is **error buffering** and it's default method points to **screen.**

**Note:** It may also be possible to change the methods to a file.

---

|[Next Topic](/04_IO_part_1/02_functions.md)|
|---|
