<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Another Method for Strings

There are multiple ways to create strings in C. We will demonstrate a method that is generally easier and more readable.

```c
char name[] = "Will";

// is the same as
char name[] = {'W', 'i', 'l', 'l', '/0'};
```

As you can tell, the string is automatically NULL terminated. There is no need to include that within your string. For the time being, use the previous method until you get a hang of it, then switch to the method shown here.

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/04_IO_part_1/Objectives.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
