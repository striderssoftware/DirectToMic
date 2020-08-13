APPNAME = mplay

OFILES = Test.o Synth.o

ALLDEP = Makefile

CC = g++
CCFLAGS = -g -Wall -pedantic -std=c++17
CXXFLAGS =
INCL =  
LDFLAGS =
LIBS = -lSDL2 -lSDL2_mixer

# A makefile comment                                           

$(APPNAME): $(ALLDEP) $(OFILES)
	$(CC) $(CCFLAGS) $(CXXFLAGS) $(OFILES) -o $(APPNAME)  $(LDFLAGS) $(LIBS)

%.o: %.cpp
	$(CC) $(CCFLAGS) $(CXXFLAGS) $(INCL) -c -o $@ $<

clean:
	rm -f *.o *~  $(APPNAME)


