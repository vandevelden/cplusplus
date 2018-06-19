PROG = Drill2
CC = g++

CPPFLAGS = -g -std=c++11  -Wall -I/Users/developer/Desktop/projects/languages/test_projects/cplusplus/lectures
LDFLAGS = -L/Users/developer/Desktop/projects/languages/test_projects/cplusplus/lectures

OBJS = drill2_caller.o drill2_impl.o
$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
drill2_caller.o : Drill2.h
	$(CC) $(CPPFLAGS) -c drill2_caller.cpp
drill2_impl.o : Drill2.h
	$(CC) $(CPPFLAGS) -c drill2_impl.cpp

clean:
	rm -f core $(PROG) $(OBJS)


