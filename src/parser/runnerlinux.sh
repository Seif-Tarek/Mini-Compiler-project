#!/bin/sh
echo '                     ************************* Nebula Language Compiler build File *************************';
echo '
    ||||||\\\\      ||||||    |||||||||||||||||     |||||||||||||||||      |||||         |||||     |||||                  //|||||||||||||\\
    ||||||\\\\\\    ||||||    |||||                 |||||       |||||      |||||         |||||     |||||                 ////|         |\\\\
    ||||||\\\\\\\   ||||||    |||||                 |||||       |||//      |||||         |||||     |||||                 |||||         |||||
    |||||| \\\\\\\  ||||||    |||||                 |||||       ///        |||||         |||||     |||||                 |||||         |||||
    ||||||  \\\\\\\ ||||||    |||||||||||           |||||||||\\\\\\\       |||||         |||||     |||||                 |||||||||||||||||||
    ||||||   \\\\\\\||||||    |||||                 |||||       \\\        |||||         |||||     |||||                 |||||         |||||
    ||||||    \\\\\\\|||||    |||||                 |||||       |||\\      |||||         |||||     |||||                 |||||         |||||
    ||||||     \\\\\\\||||    |||||                 |||||       |||||      |||||         |||||     |||||                 |||||         |||||
    ||||||      \\\\\\\|||    |||||||||||||||||     |||||||||||||||||      \\|||||||||||||||//     \\|||||||||||||||     |||||         |||||
'

echo 'Started Building......'
rm lexerOut2.txt
flex calc.l
bison -dy calc.y
g++ -std=c++11 lex.yy.c y.tab.c -o out
./out < first.nebula > lexerOut.txt

