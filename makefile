CFLAGS = -Wall -Werror 
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder folder2 bin/chess.exe

folder:
	mkdir build 

folder2:
	mkdir bin 

bin/chess.exe: build/main.o build/board_print_plain.o build/board.o 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.cpp 
	$(OBJ)


build/board.o: src/board.cpp
	$(OBJ)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin



