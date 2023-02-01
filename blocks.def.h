//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  { "󰖟  ", "bash ~/.dwm/blocks/lang.sh",          1,    0 },
  { "  ", "bash ~/.dwm/blocks/kernal.sh",        0,    0 },
	{ "󰍛  ", "bash ~/.dwm/blocks/mem.sh",	          5,		0 },
  { "󰻠  ", "bash ~/.dwm/blocks/cpu.sh",           5,    0 },
  { "󰃞  ", "bash ~/.dwm/blocks/bright.sh",        1,    0 },
  { "  ", "bash ~/.dwm/blocks/bat.sh",           5,    0 },
  { "󰕾  ", "bash ~/.dwm/blocks/vol.sh",           1,    0 },
  { "  ", "bash ~/.dwm/blocks/cal.sh",           8,    0 },
	{ "  ", "bash ~/.dwm/blocks/time.sh",					1,		0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
