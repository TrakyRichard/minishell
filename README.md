# 42 Minishell Project

This is a project for the 42 school that consists of creating a simple shell program in the C language. The program will be able to execute basic commands, manage environment variables, and handle signals. The program also includes a Makefile for easier installation and compiling.



## Requirements
Before launching the make command, make sure to install the readline package.

## Installation
To install the program, simply clone the repository and run the make command:
```shell
git clone https://github.com/TrakyRichard/minishell.git
cd minishell
make
```

## Usage
Once the program is compiled, it can be run by simply executing the minishell binary:
```shell
$ ./minishell
```

From here, the user can enter commands just like in a regular shell. Basic commands such as `ls`, `cd`, and `echo` are supported. Environment variables can be accessed and modified using the `$` symbol. For example:

```shell
$ echo $HOME
/home/user
$ export MYVAR="hello"
$ echo $MYVAR
hello
```

The program also supports signals such as `Ctrl-C` and `Ctrl-\` for interrupting or quitting a running process. To exit the shell, simply enter the `exit` command or press `Ctrl-D`.

## Contributor
This project was created by [TrakyRichard](https://github.com/TrakyRichard) and [Sergio Garcia](https://github.com/Sergi0Garcia).

## Licence
This project is licensed under the MIT License. See the LICENSE file for more details.
