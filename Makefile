OBJDIR := .
OBJS := $(patsubst %.c,%.o,$(wildcard *.c))

tree: $(OBJS)
	cc -o tree $(OBJS)

all: tree

PHONY: clean
clean:
	rm -rf $(OBJS) tree
