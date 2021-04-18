# Password generator cli

This is a little cli password generator made in C++ just for me to train

## Example

```shell
$ ./build/password-generator-cli 
How long do you want your password to be? : 8
Do you want letters? [Y/n] : y
Do you want numbers? [Y/n] : y
Do you want special characters? [Y/n] : y
Your new password is: 7c=3p,aa
```

## Building

### Linux

To build this project, just run `make`. The binary will be generated in bin/

### Windows

Either build and link each file manually, adapt the Makefile, use WSL or Git Bash or install Linux