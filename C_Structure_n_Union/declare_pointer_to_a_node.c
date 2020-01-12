Ref: https://www.geeksforgeeks.org/c-c-quiz-108-question-3/

==================================================================
/* First declaration */
typedef struct node 
{ 
 int data; 
 struct node *nextPtr; 
}* NODEPTR;  // Valid & compact form.

NODEPTR n1;

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/* Second declaration */
struct node 
{ 
 int data; 
 struct node * nextPtr; 
}; 
typedef struct node * NODEPTR; // Valid

NODEPTR n1;

==================================================================

Explanation: Either of the above declarations can be used for “NODEPTR nodePtr;”. In fact,
first one is the compact form of second one.
