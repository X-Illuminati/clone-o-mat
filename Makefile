#
# Clone-o-mat!
#
# Copyright (c) 2023 Chris Baker - released under CC0 license
#
# Use "make" or "make orig" to build the quine.       
# Use "make run" or "make run_orig" to run the quine.       
# Use "make clone" to compile the output of the quine.
# Use "make run_clone" to run the compiled output of the quine.
#
# Use "make test" to run an automated unit test
#

SHELL = /bin/sh
CC=gcc -xc -Wall -Os -s -lc -

.PHONY: all
all: out/orig out/clone

.PHONY: clean
clean:
	rm out/*
	rmdir out

.PHONY: test
test: out/orig_out out/clone_out quine.c
	diff quine.c out/orig_out
	diff out/orig_out out/clone_out

.PHONY: orig run run_orig clone run_clone
orig: out/orig
run: run_orig
run_orig: out/orig
	@out/orig
clone: out/clone
run_clone: out/clone
	@out/clone

out:
	mkdir out

out/orig: quine.c | out
	cat $< | $(CC) -o $@

out/clone: out/orig
	out/orig | $(CC) -o $@

out/orig_out: out/orig
	$< > $@

out/clone_out: out/clone
	$< > $@

