//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  { "",    "bash ~/.blocks/lang.sh",   1, 0 },
  { "󰁪  ", "bash ~/.blocks/pac.sh",    1, 0 },
  { "  ", "bash ~/.blocks/kernal.sh", 0, 0 },
  { "󰋊  ", "bash ~/.blocks/disk.sh",   1, 0 },
	{ "󰍛  ", "bash ~/.blocks/mem.sh",	   1, 0 },
  { "󰻠  ", "bash ~/.blocks/cpu.sh",    1, 0 },
  { "󰃞  ", "bash ~/.blocks/bright.sh", 1, 0 },
  { "  ", "bash ~/.blocks/bat.sh",    1, 0 },
  { "󰕾  ", "bash ~/.blocks/vol.sh",    1, 0 },
  { "  ", "bash ~/.blocks/cal.sh",    1, 0 },
	{ "  ", "bash ~/.blocks/time.sh",	 1, 0 },
  { "Hi ", "bash ~/.blocks/hi.sh",	   1, 0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
