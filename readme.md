## Problem Breakdown

1. Comment or Not

Problem: Check if a line of code contains a comment.
Solution: Look for // (single-line) or /\* \*/ (multi-line) in the string and print accordingly.

---

2. Frequency of Each Character

Problem: Count how many times each character appears in a string.
Solution: Use an array of size 256 (for ASCII) to count each character’s occurrence and print non-zero counts.

---

3. Frequency of Each Number in an Array

Problem: Count how many times each number appears in an array.
Solution: Loop through the array, use a temporary marker to avoid recounting duplicates, and print each number’s frequency.

---

4. Identifier Check

Problem: Check if a string is a valid C++ identifier.
Solution: Ensure the first character is a letter or _ and remaining characters are letters, digits, or _.

---

5. Keyword Check

Problem: Check if a string is a C++ keyword.
Solution: Compare the input string with a fixed list of C++ keywords and print if it matches.

---

6. Number of Spaces, Tabs, Lines

Problem: Count spaces, tab characters, and number of lines in input text.
Solution: Read input line by line and count spaces, tabs, and lines using loops.

---

7. Recognize String under a* b+ (a* b+)

Problem: Check if a string matches the pattern: zero or more as, followed by one or more bs, then again zero or more as followed by one or more bs.
Solution: Use loops to traverse the string in segments and check the pattern sequentially.

---

8. Valid Operator

Problem: Check if a character is a valid C++ operator.
Solution: Compare the input character with a list of valid operators like + - \* / % = < > ! & | ^ ~.

---

9. Simulating FIRST and FOLLOW

Problem: Determine the FIRST and FOLLOW sets for non-terminals in a grammar.
Solution: Display a fixed grammar and show example FIRST and FOLLOW sets (simulation for beginners).

---

10. Intermediate Code Generation

Problem: Generate intermediate code (three-address code) for arithmetic expressions.
Solution: Read an expression and print temporary variables (t1, t2…) representing sub-expressions according to operator precedence.
