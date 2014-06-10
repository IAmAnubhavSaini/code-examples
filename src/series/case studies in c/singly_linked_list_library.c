#include "common.h"

struct sllnode * CreateEmptySLLNode ( )
{
        struct sllnode * tmp = 
                (struct sllnode *) malloc (sizeof(struct sllnode));
        if ( tmp == NULL ) {
                tmp = CreateEmptySLLNode ( );
        }
        tmp -> data = 0;
        tmp -> next = NULL;
        return tmp;
}

struct sllnode * CreateSLLCache ( )
{
        struct sllnode * tmp;
        int i = 0;
        static struct sllnode * head = NULL, * tail = NULL;
        static unsigned int count = 0;

        if(count){
                tmp = tail;
        } else {
                head = CreateEmptySLLNode();
                tmp = head;
        }

        while ( i++ < 256 ) {
                tmp -> next = CreateEmptySLLNode();
                tmp = tail = tmp -> next;
        }

        return head;
}
