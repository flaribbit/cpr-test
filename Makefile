CC=g++
LIBS=libcpr.dll libcurl.dll
CFLAGS=-s -DNDEBUG -O2 -I. -static

main:
	${CC} main.cpp ${LIBS} ${CFLAGS} -o main.exe