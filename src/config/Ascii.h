// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      " ________  ________  ________  ___       ________  ________   ________  ___  ________     "    
	  "|\   ____\|\   ____\|\   ____\|\  \     |\   __  \|\   ____\ |\   ____\|\  \|\   ____\    "    
	  "\ \  \___|\ \  \___|\ \  \___|\ \  \    \ \  \|\  \ \  \___|_\ \  \___|\ \  \ \  \___|    "    
	  " \ \  \    \ \  \    \ \  \    \ \  \    \ \   __  \ \_____  \\ \_____  \ \  \ \  \       "   
	  "  \ \  \____\ \  \____\ \  \____\ \  \____\ \  \ \  \|____|\  \\|____|\  \ \  \ \  \____  "  
	  "   \ \_______\ \_______\ \_______\ \_______\ \__\ \__\____\_\  \ ____\_\  \ \__\ \_______\"
	  "    \|_______|\|_______|\|_______|\|_______|\|__|\|__|\_________\\_________\|__|\|_______|"
	  "                                                     \|_________\|_________|              "
	  "                                                                                          ";

const std::string nonWindowsAsciiArt = 
	  " ________  ________  ________  ___       ________  ________   ________  ___  ________     "
	  "|\   ____\|\   ____\|\   ____\|\  \     |\   __  \|\   ____\ |\   ____\|\  \|\   ____\    "
	  "\ \  \___|\ \  \___|\ \  \___|\ \  \    \ \  \|\  \ \  \___|_\ \  \___|\ \  \ \  \___|    "
	  " \ \  \    \ \  \    \ \  \    \ \  \    \ \   __  \ \_____  \\ \_____  \ \  \ \  \       "
	  "  \ \  \____\ \  \____\ \  \____\ \  \____\ \  \ \  \|____|\  \\|____|\  \ \  \ \  \____  "
	  "   \ \_______\ \_______\ \_______\ \_______\ \__\ \__\____\_\  \ ____\_\  \ \__\ \_______\"
	  "    \|_______|\|_______|\|_______|\|_______|\|__|\|__|\_________\\_________\|__|\|_______|"
	  "                                                     \|_________\|_________|              "
	  "                                                                                          ";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
