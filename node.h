#ifndef NODE_H
#define NODE_H
#include "token.h"

struct node
{
        struct node* firstN;
        struct node* secondN;
        struct node* thirdN;
	struct node* fourthN;
	char* fName;
	struct token **arrToken;
};

#endif
