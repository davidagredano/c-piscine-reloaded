# Exercise 03 : find\_sh

## Commands needed

- find - search for files in a directory hierarchy.
- find -type **c** - File is of type **c**.
- find -name **pattern** - Base of file name (the path with the leading  directories removed) matches shell pattern **pattern** (see notes below).
- find -exec **command** ; - Execute **command**; true if 0 status is returned. All following arguments to find are taken to be arguments to the command until an argument consisting of `;` is encountered. The string `{}` is replaced by the current file name being processed everywhere it occurs in the arguments to the command, not just in arguments where it is alone, as in some versions of find. Both of these constructions might need to be escaped (with a `\`) or quoted to protect them from expansion by the shell (see notes below). The specified command is run once for each matched file. The command is executed in the starting directory.
- basename - strip directory and suffix from filenames. Synopsis: `basename **NAME** [**SUFFIX**]`. Print **NAME** with any leading directory components removed.  If specified, also remove a trailing **SUFFIX**.

### Alternative approach using a pipe

- A pipe is a form of redirection (transfer of standard output to some other destination) that is used in Linux and other Unix-like operating systems to send the output of one command to another for further processing. The Unix/Linux systems allow the stdout of a command to be connected to the stdin of another command. You can make it do so by using the pipe character `|`. [Reference](https://www.geeksforgeeks.org/piping-in-unix-or-linux/)
- find -printf **format** - Print **format** on the standard output, interpreting `\` escapes and `%` directives. Unlike -print, -printf does not add a newline at the end of the string. The escapes and directives used are: `%f` to print the basename, the file's name with any leading directories removed (only the last element); and `\n` to print a newline.
- sed - stream editor for filtering and transforming text.
- sed s/**regexp**/**replacement**/ - Attempt to match **regexp** against the pattern space. If successful, replace that portion matched with **replacement**.

## Notes

- The filename matching is performed with the use of the fnmatch(3) library function. The fnmatch() function checks whether the string argument matches the pattern argument, which is a shell wildcard pattern (see glob(7)). A string is a wildcard pattern if it contains one of the characters '?', '\*' or '['. Globbing is the operation that expands a wildcard pattern into the list of pathnames matching the pattern. A '\*' (not between brackets) matches any string, including the empty string. Note that wildcard patterns are not regular expressions, although they are a bit similar. First of all, they match filenames, rather than text, and secondly, the conventions are not the same: for example, in a regular expression '\*' means zero or more copies of the preceding thing.
- Notice that the braces of the -exec command are enclosed in single quote marks to protect them from interpretation as shell script punctuation. The semicolon is similarly protected by the use of a backslash, though single quotes could have been used in that case also.
