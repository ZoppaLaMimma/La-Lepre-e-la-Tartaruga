

#ifndef TOOLS_H_
#define TOOLS_H_

typedef struct coord{
	int x;
	int y;
}coord;

typedef struct positions{
	coord *xy;
	int npos;
}positions;



/** \typedef \enum boolean
 *	Crea il tipo di dati per la lista eunumerata bool
 *
 */
typedef enum bool{false = 0, true = 1} bool;

#endif /* TOOLS_H_ */


void  GotoXY(int , int  );

void getCursorXY(int *, int *);

void hidecursor();

int consoleTitle(char []);
