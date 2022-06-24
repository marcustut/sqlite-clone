
# Make does not offer a recursive wildcard function, so here's one:
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

CC = gcc
CFLAGS = -O2 -Wall -g

SOURCES = $(wildcard *.c) $(call rwildcard,*/,*.c)
OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

EXE = main

%.o:src/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(EXE)
	@echo Build complete.

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXE) $(OBJS)

format: *.c
	clang-format -style=Google -i *.c
