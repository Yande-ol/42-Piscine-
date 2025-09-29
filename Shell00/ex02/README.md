# exo2: File Permissions and Links in Shell

This guide explains how to create directories, set permissions, manage dates and sizes, and create links using Shell commands.

## Steps

### 1. Create Directories

Use `mkdir` to create folders. In this exercise, `test0` and `test2` need to be directories:

```bash
mkdir test0 test2
```
### 2. Create a Hard Link
A hard link creates another name for an existing file. Here, `test5` will be a hard link to `test3`:
```bash
ln test3 test5
```
### 3. Create a Symbolic Link
A symbolic (soft) link points to another file or folder. Here, `test6` will be a symbolic link to the `test0` folder:
```bash
ln -s test0 test6
```
### 4. Additional Operations
Remember that you can also:
Use `touch` to create files and modify timestamps
Use `truncate -s` to set file sizes
Use `chmod` to modify file or folder permissions

### Summary
`mkdir` → create directories

`ln` → create hard links

`ln -s` → create symbolic links

`touch` → create or update files

`truncate -s` → set file size

`chmod` → change permissions



