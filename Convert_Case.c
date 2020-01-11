Ref: https://www.geeksforgeeks.org/c-operators-question-15/

#define VAL 32

char toUpper(char ch) {
  return (ch & ~VAL);  // Reset 7th bit.
}


char toLower(char ch) {
  return (ch | VAL);   // Set 7th bit.
}
