# Exercise 02 : clean

## Needed commands

- find - search for files in a directory hierarchy
- find -type **c** - File is of type **c**.
- find -name **pattern** - Base of file name (the path with the leading  directories removed) matches shell pattern **pattern** (see notes below).
- find **expr1** **expr2** - Two expressions in a row are taken to be joined with an implied -a; **expr2** is not evaluated if expr1 is false.
- find **expr1** -o **expr2** - Or; **expr2** is not evaluated if **expr1** is true.
- find ( **expr** ) - Force precedence. Since parentheses are special to the shell, you will normally need to quote them. Many of the examples in this manual page use backslashes for this purpose:  `\(...\)` instead  of `(...)`.
- find -delete - Delete files.

## Notes

- The filename matching is performed with the use of the fnmatch(3) library function. The fnmatch() function checks whether the string argument matches the pattern argument, which is a shell wildcard pattern (see glob(7)). A string is a wildcard pattern if it contains one of the characters '?', '\*' or '['. Globbing is the operation that expands a wildcard pattern into the list of pathnames matching the pattern. A '\*' (not between brackets) matches any string, including the empty string. Note that wildcard patterns are not regular expressions, although they are a bit similar. First of all, they match filenames, rather than text, and secondly, the conventions are not the same: for example, in a regular expression '\*' means zero or more copies of the preceding thing.
- Please note that find -a (specified implicitly or explicitly) has higher precedence than -o in the find command. This means that `find . -name afile -o -name bfile -print` will never print afile. This is why we use parentheses.
