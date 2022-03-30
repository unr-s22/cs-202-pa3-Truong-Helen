pa3: main.o Money.o account.o
	g++ -std=c++11 -o pa3 main.o Money.o account.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Money.o: Money.cpp Money.h
	g++ -std=c++11 -c Money.cpp

account.o: account.cpp account.h
	g++ -std=c++11 -c account.cpp

clean:
	rm -f pa3 *.o