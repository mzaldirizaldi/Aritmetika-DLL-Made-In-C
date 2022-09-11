#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT double tambah (double a, double b);
DLLIMPORT double kurang (double a, double b);
DLLIMPORT double kali (double a, double b);
DLLIMPORT double bagi (double a, double b);
DLLIMPORT int bagi_integer (int a, int b);
DLLIMPORT int sisabagi (int a, int b);

#endif
