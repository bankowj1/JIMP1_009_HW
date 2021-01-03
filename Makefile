all:
	gcc -Wall --pedantic src/*.c -o bin/gauss -lm

test: all
	bin/gauss dane/A dane/b
test1: all
	bin/gauss dane/A1 dane/b1
test2: all
	bin/gauss dane/A2 dane/b2
test3: all
	bin/gauss dane/A3 dane/b3
test4: all
	bin/gauss dane/A4 dane/b4
test5: all
	bin/gauss dane/A5 dane/b5





