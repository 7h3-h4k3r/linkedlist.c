 gdb ./a.out
GNU gdb (Ubuntu 15.0.50.20240403-0ubuntu1) 15.0.50.20240403-git
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
--Type <RET> for more, q to quit, c to continue without paging--n
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...
(gdb) break main
Breakpoint 1 at 0x1195: file main.c, line 3.
(gdb) run
Starting program: /home/oxbin-sh/libs/linkedlist.c/src/a.out 

This GDB supports auto-downloading debuginfo from the following URLs:
  <https://debuginfod.ubuntu.com>
Enable debuginfod for this session? (y or [n]) n
Debuginfod has been disabled.
To make this setting permanent, add 'set debuginfod enabled off' to .gdbinit.
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at main.c:3
3       int main(){
(gdb) break _insert
Breakpoint 2 at 0x555555555203: file linkedlist.c, line 6.
(gdb) run
The program being debugged has been started already.
Start it from the beginning? (y or n) n
Program not restarted.
(gdb) run
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/oxbin-sh/libs/linkedlist.c/src/a.out 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at main.c:3
3       int main(){
(gdb) n
5           __init__(&list);
(gdb) n
6           for (int i =0;i<10;i++){
(gdb) n
7               list.insert(&list,i);
(gdb) 

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=0) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) 
7           if (new_node == NULL){
(gdb) 
11          new_node->data = data;
(gdb) 
12          new_node->next = NULL;
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=1) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=2) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=3) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=4) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=5) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=6) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=7) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=8) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) c
Continuing.

Breakpoint 2, _insert (list=0x7fffffffd9f0, data=9) at linkedlist.c:6
6           Node *new_node = (Node*)malloc(sizeof(Node));
(gdb) n
7           if (new_node == NULL){
(gdb) n
11          new_node->data = data;
(gdb) print list->head->data
$1 = 0
(gdb) print list->head->next->data
$2 = 1
(gdb) print list->head->next->next->data
$3 = 2
(gdb) print list->head->next->next->next->data
$4 = 3
(gdb) print list->head->next->next->next->next->data
$5 = 4
(gdb) print list->head->next->next->next->next->next->data
$6 = 5