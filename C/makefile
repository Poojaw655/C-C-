# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Target executable name
TARGET = pattern_printer

# Source files
SOURCES = main.c pyramid.c number_triangle.c star.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Link the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Platform-specific commands
ifeq ($(OS),Windows_NT)
    clean:
		del $(subst /,\,$(OBJECTS)) $(TARGET).exe
    run:
		$(TARGET).exe
else
    run:
		./$(TARGET)
endif

# Phony targets
.PHONY: all clean run