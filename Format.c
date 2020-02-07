#include<stdio.h>

typedef struct {
	char * token;
	char * lexeme;
	void * value;
	int lineNum;
} Token;

typedef struct {
	char * description;
	int lineNum;
} Lexical_Error;

typedef struct {
	Token * Tokenized_code;
	int num_tokens;
} TokenStream;


int lineNum = 0;
char *startPtr = NULL, *currentPtr = NULL;
char *buffer;		//Twin Buffer


TokenStream lexer(FILE * fp)	//read prog into buffer
{
	while(/*condition*/)
	{
		if(nextToken()==NULL)
			continue;
		else 
		{
		
		}
	}
	
}

Token * nextToken()
{
	
}
