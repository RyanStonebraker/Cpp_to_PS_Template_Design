CC := clang++
CFLAGS := -std=c++14 -I headers -I dependencies -Wall
OPTIMIZE := -O3
DEBUGFLAGS := -g -O0
SOURCES := $(wildcard src/*.cpp) $(wildcard test/*.cpp)
TARGET := build/test_build
TEST_FILES := $(wildcard buid/*.txt)

build: $(SOURCES)
	$(CC) $(CFLAGS) $(OPTIMIZE) -o $(TARGET) $(SOURCES)

debug: $(SOURCES)
	$(CC) $(CFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(SOURCES)

.PHONY : clean
clean :
	-rm $(TARGET) $(TEST_FILES)
