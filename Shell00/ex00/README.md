# Creating a File Using `cat` in Shell

This guide explains how to create a file and write text into it directly from the terminal using the `cat` command.

## How it Works

The `cat` command (short for "concatenate") can be used not only to display the content of files but also to create files and input text.

## Steps to Create a File

1. Open your terminal.
2. Type the following command to start creating a file named `z`:

```bash
cat > z
```
3. Type the content you want inside the file. For example, just type:
```
Z
```
4. When you finish typing, press Ctrl + D to save the file and exit the input mode.

## Notes

Using `>` will overwrite the file if it already exists.
To add content to an existing file without overwriting, use `>>` instead:

```bash
cat >> z
```
