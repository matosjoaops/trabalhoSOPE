#ifndef GLOBAL_H
#define GLOBAL_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <linux/limits.h>
#include <signal.h>

#define STR_LEN 1200

//Pipe macros
#define READ  0
#define WRITE 1

long int start; //Start time in milisseconds

char log_filename[STR_LEN];
char arguments[STR_LEN];

pid_t ancestor;

enum action
{
    CREATE,
    EXIT,
    RECV_SIGNAL,
    SEND_SIGNAL,
    RECV_PIPE,
    SEND_PIPE,
    ENTRY
}action;

struct mods
{
    bool all;
    bool bytes;
    double block_size;
    bool count_links;
    bool dereference;
    bool separate_dirs;
    int max_depth;
}mods;


char path[STR_LEN];


#endif