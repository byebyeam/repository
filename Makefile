CC=gcc
CFLAGS=-Wall --pedantic
BIN=./bin
SRC=./src
TESTDIR=./test
EXTRA=./extra

test1: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_join_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test1 && $(BIN)/test1

test2: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_join_and_sort_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test2 && $(BIN)/test2

test3: bin
	$(CC) $(CFLAGS) $(TESTDIR)/test_get_min_and_max_from_array.c $(SRC)/array_function.c $(EXTRA)/Unity/unity.c -o $(BIN)/test3 && $(BIN)/test3

bin:
	mkdir $(BIN)

clean:
	rm -rf $(BIN)