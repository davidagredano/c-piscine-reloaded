# Exercise 05 : Can you create it ?

## Creation Command

```bash
echo -n 42 > '"\?$*'\'MaRViN\''*$?\"'
```

- `echo` command to display a line of text
- `-n` option for `echo` to not add a newline at the end by default
- `42` the text string for the `echo` command
- `>` Symbol that tells the shell to redirect the command's output to a file instead of printing it to the screen. The command creates the file if it does not exist.

The filename is like 5 text blocks between quotes:

1. `'"\?$*'` results in `"\?$*`. Single quotes prevent having to escape characters with backslash `\` because they preserve the literal value of each character within them.
2. `\'` results in `'`. We simply escape the functionality of `'` and are left with its literal value.
3. `MaRViN` plainly.
4. `\'` results in `'`. We escape the single quote again.
5. `'*$?\"'` results in `*$?\"` We use single quotes again to avoid having to escape each character one by one.

**The text blocks are concatenated**. Here is a simpler example: `'TEST'test'TEST'` will result in `TESTtestTEST`.
