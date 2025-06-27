# Makefile for compiling a simple Raylib C project on macOS

# Compiler
CC = gcc

# Source file
SRC = Pong.c

# Output binary name
OUT = $(basename $(SRC))

# Include and library paths
INCLUDES = -I/opt/homebrew/include
LIBS = -L/opt/homebrew/lib -lraylib \
       -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL

# Default rule
all:
	$(CC) $(SRC) -o $(OUT) $(INCLUDES) $(LIBS)

# Clean up the binary
clean:
	rm -f $(OUT)

run:
	./$(OUT)
