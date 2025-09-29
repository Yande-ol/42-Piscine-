# id_rsa_pub: Understanding Computer Keys

This guide explains how to generate, locate, and view SSH public keys using Shell commands.

## Steps

### 1. Generate an SSH Key

Use `ssh-keygen` to generate a public/private key pair:

```bash
ssh-keygen
```
Follow the prompts to create your key.

### 2. Navigate to the SSH Directory
The generated keys are stored in the `.ssh` folder in your home directory:
```bash
cd ~/.ssh
ls
```
This will list all files in the `.ssh` directory, including `id_rsa` and `id_rsa.pub`.
### 3. View the Public Key
Use `cat` to display the content of your public key:
```bash
cat id_rsa.pub
```
Copy the output and paste it where requested in the exercise.

### Summary

`ssh-keygen` → generate SSH keys

`cd ~/.ssh` → go to the SSH key folder

`ls` → list files in the folder

`cat id_rsa.pub` → view public key content

