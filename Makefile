proj02: proj02.cpp
		clang++ -Wall -Wextra -Werror -O0 -Xpreprocessor -fopenmp -I/opt/homebrew/opt/libomp/include -lm -L/opt/homebrew/opt/libomp/lib -lomp proj02.cpp -o proj02
