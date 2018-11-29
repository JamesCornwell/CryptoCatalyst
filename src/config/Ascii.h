// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n        CCCCCCCCCCCCC       CCCCCCCCCCCCC       CCCCCCCCCCCCClllllll                                                      iiii                       \n"
"     CCC::::::::::::C    CCC::::::::::::C    CCC::::::::::::Cl:::::l                                                     i::::i                      \n"
"   CC:::::::::::::::C  CC:::::::::::::::C  CC:::::::::::::::Cl:::::l                                                      iiii                       \n"
"  C:::::CCCCCCCC::::C C:::::CCCCCCCC::::C C:::::CCCCCCCC::::Cl:::::l                                                                                 \n"
" C:::::C       CCCCCCC:::::C       CCCCCCC:::::C       CCCCCC l::::l   aaaaaaaaaaaaa      ssssssssss       ssssssssss   iiiiiii     cccccccccccccccc \n"
"C:::::C             C:::::C             C:::::C               l::::l   a::::::::::::a   ss::::::::::s    ss::::::::::s  i:::::i   cc:::::::::::::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l   aaaaaaaaa:::::ass:::::::::::::s ss:::::::::::::s  i::::i  c:::::::::::::::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l            a::::as::::::ssss:::::ss::::::ssss:::::s i::::i c:::::::cccccc:::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l     aaaaaaa:::::a s:::::s  ssssss  s:::::s  ssssss  i::::i c::::::c     ccccccc \n"
"C:::::C             C:::::C             C:::::C               l::::l   aa::::::::::::a   s::::::s         s::::::s       i::::i c:::::c              \n"
"C:::::C             C:::::C             C:::::C               l::::l  a::::aaaa::::::a      s::::::s         s::::::s    i::::i c:::::c              \n"
" C:::::C       CCCCCCC:::::C       CCCCCCC:::::C       CCCCCC l::::l a::::a    a:::::assssss   s:::::s ssssss   s:::::s  i::::i c::::::c     ccccccc \n"
"  C:::::CCCCCCCC::::C C:::::CCCCCCCC::::C C:::::CCCCCCCC::::Cl::::::la::::a    a:::::as:::::ssss::::::ss:::::ssss::::::si::::::ic:::::::cccccc:::::c \n"
"   CC:::::::::::::::C  CC:::::::::::::::C  CC:::::::::::::::Cl::::::la:::::aaaa::::::as::::::::::::::s s::::::::::::::s i::::::i c:::::::::::::::::c \n"
"     CCC::::::::::::C    CCC::::::::::::C    CCC::::::::::::Cl::::::l a::::::::::aa:::as:::::::::::ss   s:::::::::::ss  i::::::i  cc:::::::::::::::c \n"
"        CCCCCCCCCCCCC       CCCCCCCCCCCCC       CCCCCCCCCCCCCllllllll  aaaaaaaaaa  aaaa sssssssssss      sssssssssss    iiiiiiii    cccccccccccccccc \n";                                                                                                                                                                                                                                                                                        

const std::string nonWindowsAsciiArt = 
"\n        CCCCCCCCCCCCC       CCCCCCCCCCCCC       CCCCCCCCCCCCClllllll                                                      iiii                       \n"
"     CCC::::::::::::C    CCC::::::::::::C    CCC::::::::::::Cl:::::l                                                     i::::i                      \n"
"   CC:::::::::::::::C  CC:::::::::::::::C  CC:::::::::::::::Cl:::::l                                                      iiii                       \n"
"  C:::::CCCCCCCC::::C C:::::CCCCCCCC::::C C:::::CCCCCCCC::::Cl:::::l                                                                                 \n"
" C:::::C       CCCCCCC:::::C       CCCCCCC:::::C       CCCCCC l::::l   aaaaaaaaaaaaa      ssssssssss       ssssssssss   iiiiiii     cccccccccccccccc \n"
"C:::::C             C:::::C             C:::::C               l::::l   a::::::::::::a   ss::::::::::s    ss::::::::::s  i:::::i   cc:::::::::::::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l   aaaaaaaaa:::::ass:::::::::::::s ss:::::::::::::s  i::::i  c:::::::::::::::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l            a::::as::::::ssss:::::ss::::::ssss:::::s i::::i c:::::::cccccc:::::c \n"
"C:::::C             C:::::C             C:::::C               l::::l     aaaaaaa:::::a s:::::s  ssssss  s:::::s  ssssss  i::::i c::::::c     ccccccc \n"
"C:::::C             C:::::C             C:::::C               l::::l   aa::::::::::::a   s::::::s         s::::::s       i::::i c:::::c              \n"
"C:::::C             C:::::C             C:::::C               l::::l  a::::aaaa::::::a      s::::::s         s::::::s    i::::i c:::::c              \n"
" C:::::C       CCCCCCC:::::C       CCCCCCC:::::C       CCCCCC l::::l a::::a    a:::::assssss   s:::::s ssssss   s:::::s  i::::i c::::::c     ccccccc \n"
"  C:::::CCCCCCCC::::C C:::::CCCCCCCC::::C C:::::CCCCCCCC::::Cl::::::la::::a    a:::::as:::::ssss::::::ss:::::ssss::::::si::::::ic:::::::cccccc:::::c \n"
"   CC:::::::::::::::C  CC:::::::::::::::C  CC:::::::::::::::Cl::::::la:::::aaaa::::::as::::::::::::::s s::::::::::::::s i::::::i c:::::::::::::::::c \n"
"     CCC::::::::::::C    CCC::::::::::::C    CCC::::::::::::Cl::::::l a::::::::::aa:::as:::::::::::ss   s:::::::::::ss  i::::::i  cc:::::::::::::::c \n"
"        CCCCCCCCCCCCC       CCCCCCCCCCCCC       CCCCCCCCCCCCCllllllll  aaaaaaaaaa  aaaa sssssssssss      sssssssssss    iiiiiiii    cccccccccccccccc \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
