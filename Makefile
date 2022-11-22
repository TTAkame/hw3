CC = g++ -std=c++17

# CFLAGS = -g -I/Users/tt/vcpkg/installed/arm64-osx/include
# LDFLAGS = 	-L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp
CFLAGS = -g -I/usr/include/jsoncpp 
LDFLAGS = -ljsoncpp

#-I/Users/tt/vcpkg/installed/arm64-osx/include -L/Users/tt/vcpkg/installed/arm64-osx/lib -ljsoncpp

all:	run

Parameter.o:	Parameter.cpp Parameter.h
	$(CC) -c $(CFLAGS) Parameter.cpp
	
Person.o: Person.cpp Person.h
	$(CC) -c $(CFLAGS) Person.cpp

Time.o: Time.cpp Time.h
	$(CC) -c $(CFLAGS) Time.cpp

Thing.o: Thing.cpp Thing.h
	$(CC) -c $(CFLAGS) Thing.cpp

Record.o: Record.cpp Record.h
	$(CC) -c $(CFLAGS) Record.cpp

Location.o: Location.cpp Location.h
	$(CC) -c $(CFLAGS) Location.cpp

main.o: main.cpp Parameter.o 
	$(CC) -c $(CFLAGS) main.cpp
	
run:	main.o Parameter.o Person.o Time.o Thing.o Record.o Location.o
	g++ -std=c++14 main.o Parameter.o Person.o Time.o Thing.o Record.o Location.o -o run $(LDFLAGS)
	
clean:
	rm -rf *.o run output.json
