#!/bin/bash

SOURCE_FILE="proj02.cpp"
EXECUTABLE_NAME="proj02"
CSV_FILE="proj02.csv"
DESTINATION_DIR="../../project2"

clang++ -Wall -Wextra -Werror -O0 -Xpreprocessor -fopenmp -I/opt/homebrew/opt/libomp/include -lm -L/opt/homebrew/opt/libomp/lib -lomp "$SOURCE_FILE" -o "$EXECUTABLE_NAME"

if [ $? -eq 0 ]; then
    echo "Compilation successful. Running the program..."
    # Run the compiled program
    ./"$EXECUTABLE_NAME" >& "$CSV_FILE"
    mv "$CSV_FILE" "$DESTINATION_DIR"
    open -a "Microsoft Excel" "$DESTINATION_DIR/$CSV_FILE"
else
    echo "Compilation failed."
fi
