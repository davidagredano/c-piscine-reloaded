# Exercise 00 : Oh yeah, mooore...

## What do the fields in ls -l output mean?

File permissions, number of (hard) links, owner name, owner group, file size in bytes, time of last modification, and file/directory name. [Reference](https://unix.stackexchange.com/questions/103114/what-do-the-fields-in-ls-al-output-mean)

## Needed commands

- touch - change file timestamps
- touch -t STAMP - use [[CC]YY]MMDDhhmm[.ss] instead of current time
- touch -h, --no-dereference - affect each symbolic link instead of any referenced file (useful only on systems that can change the timestamps of a symlink)
- chmod - change file mode bits
- ln - make links between files
- ln -s, --symbolic - make symbolic links instead of hard links
- truncate - shrink or extend the size of a file to the specified size
- truncate -s, --size=SIZE - set or adjust the file size by SIZE bytes
- mkdir - make directories

## Example

```bash
# -rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
truncate test1 -s 4
chmod u=rwx,g=x,o=r test1
touch -t 06012146 test1
```
