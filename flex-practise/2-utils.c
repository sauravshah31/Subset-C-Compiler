#include <stdio.h>
#include "2-header.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *names[] = {NULL,"db_type","db_name","db_table_prefix","db_port"};

int main(){
    int ntoken, vtoken;

    ntoken = yylex();
    while(ntoken){
        printf("%d\n",ntoken);
        ntoken = yylex();
    }    
    return 0;
}