player:ai.0
	g++ -o player ai.o
	g++ -std=c++0x -o player ai.o

ai.o:ai.cpp
	g++ -c ai.cpp
	g++ -std=c++0x -c ai.cpp

clean:
	rm player *.o
