
#ifndef		NUTILITY_H
#define		NUTILITY_H
#define		asize(x)	(sizeof(x) / sizeof(x[0]))
#define		isleap(a)		((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0))
#endif

void set_array_random(int* p, int);
void print_array(const int* p, int);
int isprime(int);
int ndigit(int);
void dashline(void);
void sleep(double sec);
void randomize(void);



