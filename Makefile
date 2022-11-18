CC = g++ -std=c++14

CFLAGS = -g -I/Users/tt/vcpkg/installed/arm64-osx/include
# LDFLAGS = 	-L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp
CFLAGS = -g
LDFLAGS = -ljsoncpp

#-I/Users/tt/vcpkg/installed/arm64-osx/include -L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp

all:	run

Parameter.o:	Parameter.cpp Parameter.h
	$(CC) -c $(CFLAGS) Parameter.cpp
	
main.o: main.cpp Parameter.o 
	$(CC) -c $(CFLAGS) main.cpp
	
run:	main.o Parameter.o Person.o Time.o Thing.o Record.o Location.o
	g++ -std=c++14 main.o Parameter.o Person.o Time.o Thing.o Record.o Location.o -o run $(LDFLAGS)
	
clean:
	rm -rf *.o run
