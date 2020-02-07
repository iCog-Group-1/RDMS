BINARY = output
FILE_OBJECTS =  boost.o  
BOOST = -lboost_system -lboost_filesystem
GCC = g++ -std=c++17
FLAGS = -Wall -pedantic -Wextra

build: $(FILE_OBJECTS)
    $(GCC) $(FLAGS) $(FILE_OBJECTS) .-o $(BINARY) $(BOOST)

boost.o: boost.cpp  
    $(GCC) $(FLAGS) -c boost.cpp

clean:
    rm -rf *.o $(BINARY)