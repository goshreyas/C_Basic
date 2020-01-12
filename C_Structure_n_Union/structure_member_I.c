Ref: https://www.geeksforgeeks.org/c-structure-union-question-5/

/* Explanation: A structure cannot contain a member of its own 
type because if this is allowed then it becomes impossible for
compiler to know size of such struct. Although a pointer of same
type can be a member because pointers of all types are of same
size and compiler can calculate size of struct
*/
struct st  
{  
    int x;  
    struct st next;  // Wrong
};


struct st  
{  
    int x;  
    struct st *next; // Correct
};
