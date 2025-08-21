#include <stdio.h>

int main() {
    // Declaration and definition (not initialized)
    int definedVar;
    printf("definedVar: %d\n", definedVar); // value is undefined (could be garbage)

    // Assignment
    definedVar = 12;

    // Declaration + definition + initialization
    int iniVar = 25;

    printf("value of definedVar after assignment: %d\n", definedVar);
    printf("value of iniVar: %d\n", iniVar);

    return 0;
}

// try this