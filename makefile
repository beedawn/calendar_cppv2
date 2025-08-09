#Compiler
CXX=g++

#Compiler flags: -g for debugging info, Wall for all warnings
CXXFLAGS = -Wall -std=c++17 -Iexternal

LDFLAGS = -lCatch2Main -lCatch2
#target executable
TARGET = myapp

#Source files
MAIN = main.cpp
SOURCES =$(filter-out $(MAIN),$(wildcard *.cpp))

TEST_DIR = tests
TEST_TARGET = test_app

TEST_SOURCES = $(wildcard $(TEST_DIR)/*.cpp) external/catch2/catch_amalgamated.cpp

#object files
OBJECTS = $(SOURCES:.cpp=.o)

TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)


#default rule
all: $(TARGET)

# link objet files into executable 
$(TARGET) : $(OBJECTS) $(MAIN)
	$(CXX) $(CXXFLAGS) $^ -o $@
$(TEST_DIR)/$(TEST_TARGET): $(TEST_OBJECTS) $(OBJECTS) 
	$(CXX) $(CXXFLAGS) $^ -o $@

# compile .cpp to .o files
#
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_DIR)/$(TEST_TARGET)
	./$(TEST_DIR)/$(TEST_TARGET)
#clean up build files

clean:
	rm -f *.o  $(TEST_DIR)/*.o $(TARGET) $(TEST_TARGET) external/catch2/*.o
