code the macro offsetof
https://www.geeksforgeeks.org/the-offsetof-macro/

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT)) 

'''
#include <stdio.h> 

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT)) 

typedef struct PodTag 
{ 
    int   i; 
    double d; 
    char  c; 
} PodType; 

int main() 
{ 
    printf("%d", (int)OFFSETOF(PodType, c) ); 

    getchar(); 
    return 0; 
} 
'''

code the macro sizeof
https://cs-fundamentals.com/tech-interview/c/implement-sizeof-operator-in-c
https://www.geeksforgeeks.org/implement-your-own-sizeof/

#define my_sizeof(type) (char *)(&type+1)-(char*)(&type) 
