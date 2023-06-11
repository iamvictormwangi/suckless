//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
  //{" ", "uname --kernel-release",	                                         80,		0},
  {"  ", "date +'%H:%M'",                                                  1,		0},
  {"  ", "df -h --output=pcent /dev/sda1 | tail -n 1",                     1,		0},
  {" 󰎆 ", "mpc current",                                                  8,    0},
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	      30,		0},
	{"  ", "mpstat 1 1 | awk '/Average:/ {print 100-$NF\"%\"}'",      	    8,		0},
	{" u ", "uptime | awk '{print $3}'",	                                    5,		0},
	{"  ", "sensors | awk '/Core 0/ {print $3}'",                     	    5,		0},
	{"  ", "xbps-query -l | wc -l",                          	      80,		0},
	{"  ", "amixer get Master | grep 'Mono:' | awk -F'[][]' '{print $2}'",	20,		0},
	{" 󰃞 ", "brightnessctl get",                                           	20,		0},
	{"  ", "iw dev wlp3s0 link | awk -F'SSID: ' '/SSID:/ {print $2}'",	    40,		0},
  {"  ", "date '+%Y-%m-%d'",		                                    			80,		0},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
