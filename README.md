Unix shell

A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems.

Configuration files

Shells read configuration files in various circumstances. These files usually contain commands for the shell and are executed when loaded; they are usually used to set important variables used to find executables, like $PATH, and others that control the behavior and appearance of the shell. The table in this section shows the configuration files for popular shells.[11]
Configuration file 	sh 	ksh 	csh 	tcsh 	bash 	zsh
/etc/.login 			login 	login 		
/etc/csh.cshrc 			yes 	yes 		
/etc/csh.login 			login 	login 		
~/.tcshrc 				yes 		
~/.cshrc 			yes 	yes[a] 		
~/etc/ksh.kshrc 		int. 				
/etc/sh.shrc 	int.[b] 					
$ENV (typically ~/.kshrc)[12] 	int.[c][d] 	int. 			int.[e] 	
~/.login 			login 	login 		
~/.logout 			login 	login 		
/etc/profile 	login 	login 			login 	login[f]
~/.profile 	login 	login 			login[g] 	login[f]
~/.bash_profile 					login[g] 	
~/.bash_login 					login[g] 	
~/.bash_logout 					login 	
~/.bashrc 					int.+n/login 	
/etc/zshenv 						yes
/etc/zprofile 						login
/etc/zshrc 						int.
/etc/zlogin 						login
/etc/zlogout 						login
~/.zshenv 						yes
~/.zprofile 						login
~/.zshrc 						int.
~/.zlogin 						login

Explanation:

    blank means a file is not read by a shell at all.
    "yes" means a file is always read by a shell upon startup.
    "login" means a file is read if the shell is a login shell.
    "n/login" means a file is read if the shell is not a login shell.
    "int." means a file is read if the shell is interactive.


.SH EXAMPLES

The shell works like this in interactive mode:

.br
	($) pwd
.br
	/home/vagrant/simple_shell
.br
	($) exit
.br
	$

.br
Running commands with arguments:

.br
	($) ls -l
.br
	total 72
.br
	-rw-rw-r-- 1 vagrant vagrant   343 Aug 2022 built_in.c
.br
	-rw-rw-r-- 1 vagrant vagrant   850 Aug 2022 error.c
.br
	-rw-rw-r-- 1 vagrant vagrant   555 Aug 2022 execute_line.c
.br
	-rw-rw-r-- 1 vagrant vagrant   305 Aug 2022 _getenv.c
.br
	-rwxrwxr-x 1 vagrant vagrant 14563 Aug 2022 hsh
.br
	($)

.br
The shell works like this in non-interactive mode:

.br
	$ echo "/bin/ls" | ./hsh
.br
	built_in.c      _getenv.c    man_1_simple_shell  shell.c         split_line.c
.br
	error.c         hsh          mini_shell          shell.h         useful_func.c
.br
	execute_line.c  list_path.c  README.md           special_case.c  _which.c
.br
	$

.br
Command error example:

.br
	$ echo "non-interactive" | ./hsh
.br
	./hsh: 1: non-interactive: not found
.br
	$

.SH AUTHOR
Rashmi Dayanand and Thandiwe Ngubane
