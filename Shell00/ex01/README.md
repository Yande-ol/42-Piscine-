# TestShell00: File Permissions, Date, and Size in Shell

This guide explains how to create a file, modify its size, change its date, adjust permissions, and compress it using Shell commands.

## Steps

### 1. Create a File Quickly

Use the `touch` command to create a file:

```bash
touch testShell00
```
### 2. Change the File Size

Use `truncate` to set the file size. For example, to set it to 40 bytes:
```bash
truncate -s 40 testShell00
```
### 3. Change the File Date
Use `touch -t` to modify the file's timestamp. The format is `YYYYMMDDhhmm` (Year, Month, Day, Hour, Minute). Example:
```bash
touch -t 202006012342 testShell00
```
### 4. Change File Permissions
Use `chmod` to change file permissions. For example, to set permissions to `-r--r-xr-x`:
```bash
chmod 455 testShell00
```
For more info on Linux permissions, see: Linux Permissions Guide

### 5. Compress the File
Use `tar` to create a tar archive:
```bash
tar -cf testShell00.tar testShell00
```
### 6. Uncompress the File
Use `tar -xvf` to extract the file. Note that unzipping does not change permissions or file creation date:
```bash
tar -xvf testShell00.tar
```
### Summary

`touch` → create or update files

`truncate` -s → set file size

`touch -t` → change file timestamp

`chmod` → modify permissions

`tar -cf` → create archive

`tar -xvf` → extract archive

