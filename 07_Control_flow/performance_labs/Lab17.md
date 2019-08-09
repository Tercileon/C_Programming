<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/03_loops.md" rel="Return to Topic"> Return to Topic </a>

# PERFORMANCE LAB 17
### DO-WHILE LOOP

* Initialize a 26 element *int* array to 0.
* Initialize a *char* variable to 0.
* Use a DO-WHILE loop to input, *but not store*, a string one character at a time from stdin **without** scanf()!!
* Each time a character is entered:
    * convert the character to upper case using *toupper()*
    * increment the corresponding array element if the user input is a letter
    * Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
* End the loop when a *newline* is read.
* Print the results using a for loop ()
