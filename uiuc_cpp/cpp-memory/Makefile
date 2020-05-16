EXE = main
OBJS = Cube.o main.o puzzle.o
CLEAN_RM =

include ../_make/generic.mk

# Directory-specific rules:
addressOf: addressOf.cpp
	$(LD) $^ $(LDFLAGS) -o $@

foo: foo.cpp
	$(LD) $^ $(LDFLAGS) -o $@

puzzle: puzzle.cpp
	$(LD) $^ $(LDFLAGS) .objs/Cube.o -o $@

all: addressOf #foo puzzle
CLEAN_RM += addressOf foo puzzle
