<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" > Return to TOC </a>

## Performance Lab

**String Splitter**

|char * split_the_string(char * string_ptr, char delimiter); |
|------------------------------------------------------------|

* Return value - char pointer to the second string
* Parameters - 
  * string_ptr - Pointer to a null terminated string
  * delimiter - Character that divides the two strings
* Purpose - Split one string into two at a delimiter char
* Requirements
  * Only Address Arithmetic is permitted on string_ptr
  * string_ptr if delimiter is not found
  * Return ERROR_NULL_POINTER **if** string_ptr **has** more that one occurrence of delimiter
  * Return ERROR_NULL_DELIMITER **if the delimiter is** '\0' (0x0)
  
**Note**- The error codes for this lab are MACROS #defined as:
  #define ERROR_NULL_POINTER ((char*)-1)
  #define ERROR_ABUNDANT_POINTER ((char*)-2)
  #define ERROR_NULL_DELIMITER ((char*)-3)

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/08_function_Arguments.md" > Return to the next Topic </a>
