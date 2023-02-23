//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/		                                         /*Update Interval*/ /*Update Signal*/
  { "",      "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/lang.sh",   1,                  0 },
  { "󰁪  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/pac.sh",    1,                  0 },
  { "  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/kernal.sh", 0,                  0 },
  { "󰋊  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/disk.sh",   1,                  0 },
  { "󰍛  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/mem.sh",	 1,                  0 },
  { "󰻠  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/cpu.sh",    1,                  0 },
  { "󰃞  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/bright.sh", 1,                  0 },
  { "  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/bat.sh",    1,                  0 },
  { "󰕾  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/vol.sh",    1,                  0 },
  { "  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/cal.sh",    1,                  0 },
  { "  ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/time.sh",   1,                  0 },
  { "Hi ",   "bash ~/.pixelfiles/dwmblocks-pixelfiles/blocks/hi.sh",	 1,                  0 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
