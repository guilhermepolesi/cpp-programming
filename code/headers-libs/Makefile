# Variables
CXX = g++
CXXFLAGS = -std=c++17 -I./headers  # Include path to headers directory
LDFLAGS =

# Executable name
TARGET = main

# Source files and object files
SRC = main.cpp src/Product.cpp src/Client.cpp src/OrderItem.cpp src/OrderStatus.cpp src/Order.cpp src/DateTime.cpp
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean temporary files
clean:
	rm -f $(OBJ) $(TARGET)

