CFLAGS = -Wall -Werror 
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder folder2 bin/chess.exe

folder:
	mkdir -p build 

folder2:
	mkdir -p bin 

bin/chess.exe: build/main.o build/board_print_plain.o build/board.o 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/board.h src/extern.h
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.cpp src/board.h
	$(OBJ)


build/board.o: src/board.cpp src/board.h
	$(OBJ)

build/test.o:test/test.cpp
	g++ -Wall -c test/test.cpp -o build/test.o -Ithirdparty -Isrc

build/first_test.o: test/first_test.cpp
	g++ -Wall -c test/first_test.cpp -o build/first_test.o -Ithirdparty

bin/test: build/board.o build/test.o build/board_print_plain.o build/first_test.o
	g++ -Wall build/board.o buld/test.p build/board_print_plain.o build/first_test.o -o bin/test


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin



