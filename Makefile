CC=gcc
CC_FLAGS=-Wall -Wextra -std=c11
test_flags=-fprofile-arcs -ftest-coverage
OS=$(shell uname -s)

ifeq ($(OS),Linux)
	test_libs=-lcheck -lm -lsubunit
else
	test_libs=-lcheck
endif

all: clean clang s21_math.a gcov_report

s21_math.a:
	$(CC) $(CC_FLAGS) -c function/*.c util/*.c
	ar rcs s21_math.a *.o
	ranlib s21_math.a
	rm -f *.o

math_test:clean
	rm -f *.gcda
	$(CC) $(CC_FLAGS) $(test_flags) tests/*.c function/*.c util/*.c -o math_test $(test_libs)
	./math_test > output.txt
	mkdir -p coverage
	mv *.gcda *.gcno coverage/

gcov_report: math_test
	lcov -o tests.info -c -d .
	genhtml -o gcov tests.info
	rm -rf s21_test_* *.a *.info *.gcda *.gcno

clean:
	rm -f tests/*.gcda tests/*.gcno *.gcno
	rm -f math_test
	rm -f *.o
	rm -rf report coverage
	rm -f output.txt
	rm -rf gcov

clang:
	cp ../materials/linters/.clang-format .
	clang-format -i *.h function/*.* tests/*.* util/*.*
	rm -f .clang-format
