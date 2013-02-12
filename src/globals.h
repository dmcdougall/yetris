
#ifndef GLOBALS_H_DEFINED
#define GLOBALS_H_DEFINED

#include <stdbool.h>

/* I know it's ugly to leave so many global variables >_<
 * please don't sue me */

/** Game-related global variables */
typedef struct globals_s
{
	bool screen_center_vertically;
	bool screen_center_horizontally;
	bool screen_use_colors;

} globals_s;

/* global struct containing all global variables.. wow  */
globals_s global;

globals_s new_globals();

#endif /* GLOBALS_H_DEFINED */
