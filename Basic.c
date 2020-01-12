
-----------------------------------------------------------------
function-pointer-in-c @ https://www.geeksforgeeks.org/function-pointer-in-c/

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int (*p)[5];  Vs int *p[5];
int (*p)[5];  // p is a pointer to an array of 5 integers
int *p[5];  // p is array of 5 pointers to integers. 

Ref: https://www.geeksforgeeks.org/c-c-quiz-106-question-2/
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Return from function:
int [] sum(int a, int b); // In-valid:
  - It will result in compile error.
  - A function can’t have an explicit array as return type.
int * sum(int a, int b);  // Valid

Ref: https://www.geeksforgeeks.org/c-c-quiz-107-question-5/

-----------------------------------------------------------------
  
