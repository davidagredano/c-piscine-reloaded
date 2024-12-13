# Exercise 04 : MAC

## Commands used

- ifconfig - configure a network interface. If no arguments are given, ifconfig displays the status of the currently active interfaces.
- awk - pattern scanning and processing language

## Notes on the AWK Programming Language

### AWK Program Execution

An AWK program consists of a sequence of optional directives,  pattern-action statements, and optional function definitions. For each record in the input, gawk tests to see if it matches any pattern in the AWK program. For each pattern that the record matches,  gawk executes the associated action. The patterns are tested in the order they occur in the program. `pattern { action statements }`.

### AWK Fields

As each input record is read, awk splits the record into **fields**, using the value of the FS variable as the field separator, a space by default. In the case that FS is a single space, fields are separated by runs of spaces and/or tabs and/or newlines.
Each field in the input record may be referenced by its position: $1, $2, and so on.  $0 is the whole record, including leading and trailing  white space. Example: `print $5` prints the fifth field in the input record.

### AWK Patterns and Actions

AWK is a line-oriented language. The pattern comes first, and then the action. Action statements are enclosed in `{` and `}`. Either the pattern may be missing, or the action may be missing, but, of course, not both. If the pattern is missing, the action executes for every single record of input.  A missing action is equivalent to `{ print }` which prints the entire record.

Pattern used: `/regular expression/`. For /regular expression/ patterns, the associated statement is executed for each input record that matches the regular expression. Regular expressions are the same as those in egrep(1).

Action used: the control statement `{ statements }`.

I/O Statements used: `print expr-list`. Print expressions. Each expression is separated by the value of OFS, a space by default. The output record is terminated with the value of ORS, by default a newline.

## Other possible approaches

- cut - remove sections from each line. Print selected parts of lines.
- cut -d, --delimiter=DELIM - use DELIM instead of TAB for field delimiter.
- cut -f, --fields=LIST - select only these fields; also print any line that contains no delimiter character, unless the -s option is specified
- grep - print lines that match patterns. Synopsis: `grep [OPTION...] PATTERNS [FILE...]`. grep searches for PATTERNS in each FILE. PATTERNS is one or more patterns separated by newline characters, and grep prints each line that matches a pattern. Typically PATTERNS should be quoted when grep is used in a shell
command.
