//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
        {"", "sb-volume", 0, 1},
        {"", "sb-battery", 5, 2},
 //       {"", "sb-cpu", 10, 3},
        {"", "sb-memory", 10, 4},
        {"", "sb-clock", 60, 5},
        {"", "sb-internet", 5, 6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
