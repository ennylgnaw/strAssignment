# all: tester.o string_func.o
# 	gcc -o out tester.o string.o
#
# tester.o: tester.c string.h
# 	gcc -c tester.c
#
# string_func.o: string.c string.h
# 	gcc -c string.c
#
# run:
# 	./out
#
# clean:
# 	rm *.o
# 	rm out
all: string.o
	gcc -o test string.o

mystr.o: string.c string.h
	gcc -c string.c

run:
	./test

clean:
	rm *.o
