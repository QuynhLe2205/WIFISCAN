// includes the function prototypes for screen manipulation
enum COLOR{BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE}; //vt100 escape codes

#define UNICODE
#define BAR "\u266B"		// unicode for a bar

// function prototypes
void setFGcolor(int fg);
void resetColors(void);
void gotoXY(int row, int col);
void clearScreen(void);
void displayBar(double rms, int col);
