all: compile run
compile:
	g++ -I ./include/ -o ./lib/ReverseOrderedArrayList.o -c ./src/ReverseOrderedArrayList.cpp
	g++ -I ./include/ -o ./lib/BigInt.o -c ./src/BigInt.cpp
	g++ -I ./include/ -o ./lib/Fact.o -c ./src/Fact.cpp
	g++ -I ./include/ -o ./bin/Main ./lib/ReverseOrderedArrayList.o ./lib/BigInt.o ./lib/Fact.o ./src/Main.cpp
run:
	./bin/Main
