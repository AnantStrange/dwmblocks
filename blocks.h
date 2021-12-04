//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[9] = {
	/*Icon*/	/*Command*/	                            	/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	// {"", "date '+%b %d (%a) %I:%M%p'",									5,		0},

	{"", "battery",		                                               5,     0},
	{"", "cpu",														   20,    0},
	{"", "disk",													   600,   0},
	// {"", "forecast",												   86400, 0},
	{"", "memory",													   15,    0},
	{"", "internet",												   120,   0},
	{"", "pacpackages",												   43200, 0},
	{"", "volume",													   8,     0},
	{"", "clock",													   60,    0},
	{"", "nettraf",												       3,     0}
	


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
