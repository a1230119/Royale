player:ai.0
	g++ -o player ai.o
	g++ -std=c++Ox -o player ai.o

ai.o:ai.cpp
	g++ -c ai.cpp
	g++ -std=c++Ox -c ai.cpp

clean:
	rm player *.o
