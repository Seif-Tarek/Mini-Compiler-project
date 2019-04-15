echo 'started Building.....'

flex calc.l

bison -dy calc.y

gcc lex.yy.c y.tab.c -o out

echo 'Building complete....'

./out<input.txt