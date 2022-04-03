# minishell

## Build
Run `make` to build project

## Run
```
./minishell
```

## Decription
minishell is implementation of simple bash-like shell.

* execute commands: `pwd`
* piping: `ls -l | cat -e`
* redirections [>, >>, <]: `ls -l > file.txt`, `cat -e < file.txt`
* enviorment variables: `echo $HOME`
* signals: `ctrl+c, ctrl+\, ctrl+d`
* implementation of some system utilites: `echo, pwd, cd, env, export, unset, exit`
* commands history

Detailed project description you can find in `subject.pdf`.

## Project structure
* srcs
  * buildins - implementation of some system utilites;
  * lexer - module for tokenizing imput string `ls -l > file.txt` > `"ls", "-l", "<RHS_REDIRECT>", "file.txt"`;
  * signals - module for catching signal from key combinations;
  * utils - some helper functions;
  * executor - module responsible for executing application (creating subprocesses and environment), piping (creating and connection), redirections;
  * parser - module that create command object from tokenized string;
  * termcap - module for working with termcap library (handling arrow keys pushing for navigating throw history).
* includes - header files
* libft - self written C standart library
