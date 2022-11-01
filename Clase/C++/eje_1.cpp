#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
using namespace std;

int a, b;
void main() {
	cprintf("Ingrese el primer numero: ");
	cin >> a;
	cprintf("Ingrese el segundo numero: ");
	cin >> b;
	cprintf("%d + %d = %d", a, b, a + b);
	cprintf("\r\n");
	cprintf("%d - %d = %d", a, b, a - b);
	cprintf("\r\n");
	cprintf("%d * %d = %d", a, b, a * b);
	cprintf("\r\n");
	cprintf("%d / %d = %.10f", a, b, (float)a / (float)b);
}
