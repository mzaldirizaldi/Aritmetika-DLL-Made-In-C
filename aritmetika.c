/* Replace "dll.h" with the name of your header */
#include "aritmetika.h"

DLLIMPORT double tambah (double a, double b) {
	return a + b;
}

DLLIMPORT double kurang (double a, double b) {
	return a - b;
}

DLLIMPORT double kali (double a, double b) {
	return a * b;
}

DLLIMPORT double bagi (double a, double b) {
	return a / b;
}

DLLIMPORT int bagi_integer (int a, int b) {
	return a / b;
}

DLLIMPORT int sisabagi (int a, int b) {
	return a % b;
}
