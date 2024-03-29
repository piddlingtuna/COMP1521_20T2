# Process Management

## Parallelism

A CPU can only do one thing at a time (ignoring multi-CPU computers).

quad-core == 4x CPUs

But a computer that can only do one thing at a time is kind of useless.

The answer: pseudo-parallelism.

Quickly switch between different processes.

The '-' represents the process being run in the CPU.

THread 1
 ----------------------------

Process 1 -----         ----- - mouse program

               --------

Process 2      -----         ----- - screen

Process 3           -----         -----

Process 5 ----------------

Process 4 -         -        -

Thread 1
- 32 MIPS registers
- PC register

Thread 2
- 32 MIPS registers
- PC register

Must be done in a way that the process doesn't notice that their execution is constantly being stopped and restarted.

## What is a process?

EXecution state:
- CPU registers

A process consists of:
- Execution + CPU registers (ie a thread)
- Memory in RAM
- other resources (like file handles) - file table

A program may contain multiple threads.

A thread consists of:
- Execution + CPU registers

Memory and other resources are shared with other threads.


## How do we create processes?

The convention in UNIX is to fork() then exec().

fork()  creates  a  new  process  by  duplicating  the  calling process.

execve()  executes  the  program referred to by pathname.  This causes the program that is currently being run by the  calling process to be replaced with a new program.

shell
- creates another shell process
- uploads a new program into one of the processes

This is dumb. We copy the current process then disregard it's contents to start up the new process. A lot of pointless copying.

Why do we do this?

It was a disgusting hack - the PDP-7's fork call required precisely 27 lines of assembly code.

Ken Thompson and Dennis Ritchie got lazy.

This is why we use the new age posix_spawn() which creates a new process running the program specified by the pathname.


## pid

Every process has a pid - it is unique (also just an index into an array somewhere to make things fast)


getpid() - get process id of current process.


- indexing into an array - O(1)


int posix_spawn(
    pid_t *pid, -- the pid of your child process (generated by the OS)
    const char *path, -- the pathname of the program you want to run
    const posix_spawn_file_actions_t *file_actions, -- don't worry about this
    const posix_spawnattr_t *attrp, -- don't worry about this
    char *const argv[], -- just your command line arguments
    char *const envp[] -- your environment variables like $HOME
);

UNIX-like OSs - POSIX capable


int main (int argc, char *argv[], char *envp[])

Returns an error value.
Check the return value - lots of things could go wrong.

The new process is referred to as the child process. The calling process is referred to as the parent process.

waitpid() - waits for the child process to die.

