all: $(patsubst src/%.c, bin/%, $(wildcard src/*.c))

bin/%: src/%.c | bin
	gcc -Wall -Wpedantic -g $< -o $@

bin:
	mkdir -p $@
