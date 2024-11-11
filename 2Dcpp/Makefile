all: main

# Use C++ compiler
CXX = clang++
override CXXFLAGS += -g -Wno-everything -pthread -lm

# Source and header files with .cpp and .hpp extensions
SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print)
HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.hpp' -print)

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

clean:
	rm -f main main-debug

