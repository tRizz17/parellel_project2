#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include <iostream>

// print debugging messages?
#ifndef DEBUG
#define DEBUG	false
#endif

// The "state" of the system consists of the following global variables:
int	NowYear;		// 2024- 2029
int	NowMonth;		// 0 - 11
float	NowPrecip;		// inches of rain per month
float	NowTemp;		// temperature this month
float	NowHeight;		// grain height in inches
int	NowNumDeer;		// number of deer in the current population


// Your basic time step will be one month. Interesting parameters that you need are:
const float GRAIN_GROWS_PER_MONTH =	       12.0;
const float ONE_DEER_EATS_PER_MONTH =		1.0;

const float AVG_PRECIP_PER_MONTH =		7.0;	// average
const float AMP_PRECIP_PER_MONTH =		6.0;	// plus or minus
const float RANDOM_PRECIP =			2.0;	// plus or minus noise

const float AVG_TEMP =				60.0;	// average
const float AMP_TEMP =				20.0;	// plus or minus
const float RANDOM_TEMP =			10.0;	// plus or minus noise

const float MIDTEMP =				40.0;
const float MIDPRECIP =				10.0;

// Units of grain growth are inches.
// Units of temperature are degrees Fahrenheit (°F).
// Units of precipitation are inches.

int
main( int argc, char *argv[ ] )
{
#ifdef _OPENMP
	#ifndef CSV
		fprintf( stderr, "OpenMP is supported -- version = %d\n", _OPENMP );
	#endif
#else
        fprintf( stderr, "No OpenMP support!\n" );
        return 1;
#endif




}