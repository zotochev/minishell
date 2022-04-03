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

Detailed project description you can find in `subject.pdf`.
