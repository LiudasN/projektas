ain: func.o
	g++ -std=c++17 -o main main_vec_2.cpp func_vec_2.cpp
fun:
	g++ c- func_vec_2.cpp
run:
	./main
