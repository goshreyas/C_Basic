Ref: https://www.geeksforgeeks.org/c-operators-question-15/

#define VAL 32 // 2^5 : 2<<5

char toUpper(char ch) {
  return (ch & ~VAL);  // Reset 5th bit.
}


char toLower(char ch) {
  return (ch | VAL);   // Set 5th bit.
}
