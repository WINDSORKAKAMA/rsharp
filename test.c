#include <stdio.h>
#include <string.h>

#define MAX_BUFF 1000

// #define RSW_FUNC_START "start"
// #define RSW_FUNC_END "end"
// #define TOK_ARRW "->"
// #define TOK_OP_OPEN_STR "\""
// #define TOK_OP_CLOSE_STR "\""

char buffer[MAX_BUFF];
const char *keyword1 = "start:"; // R Sharp
const char *token1 = "int main(void) {\n\n"; // C Keyword
const char *keyword4="vo";
const char *token4="void";
const char *keyword2 = "var";
const char *token2="int";
const char *place="variable";
const char *keyword3="end";
const char *token3="return 0;\n };";

int main(int argc, char **argv) {
    FILE *inp_file, *out_file;
    int ar;
    ar=argc;
    const char *inp_file_name = argv[1];
    const char *out_file_name = argv[2];
    inp_file = fopen(inp_file_name, "r");
    out_file = fopen(out_file_name, "w");

    while (fscanf(inp_file, "%s", buffer) != EOF) {
        if (strcmp(keyword1, buffer) == 0) {
            fprintf(out_file,"%s", token1);
        }
        else if(strcmp(keyword2,buffer)==0){
            fprintf(out_file,"%s",token2);
        }
        else if(strcmp(keyword3, buffer)==0){
            
        }
        
    }
    if(fscanf(inp_file,"%s", buffer)== EOF){
        fprintf(out_file,"%s", token3);
        fclose(out_file);
        fclose(inp_file);
    }
    

    return 0;
}