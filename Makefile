CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Schedule.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=ScheduleManager

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

