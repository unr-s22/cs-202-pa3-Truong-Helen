pa3: Main.o Money.o Account.o
	g++ -std=c++11 -o pa3 Main.o Money.o Account.o

Main.o: Main.cpp
	g++ -std=c++11 -c Main.cpp

Money.o: Money.cpp Money.h
	g++ -std=c++11 -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -std=c++11 -c Account.cpp

clean:
	rm -f pa3 *.o
