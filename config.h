//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"",	"pacpackages",	3600,	13},
	{"",	"torrent",	20,	14},
	{"",	"cpu",		5,	15},
	{"",	"forecast",	18000,	16},
 	{"",	"nettraf",	1.5,	17},  
  	{"",    "disks",  	300,    18},
  	{"",	"memory",	10,	19},
  	{"",	"load",		120,	20},
  	{"",	"volume",	30,	21},
	{"",	"battery",	90,	22},
	{"",	"clock",	120,	23},
  	{"",  	"wifi",         60, 	24},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ┃ " ;
static unsigned int delimLen = 5;
