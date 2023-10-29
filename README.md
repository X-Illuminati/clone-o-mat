# clone-o-mat
Self-reproducing code example

Use "make" or "make orig" to build the quine.       
Use "make run" or "make run_orig" to run the quine.       
Use "make clone" to compile the output of the quine.
Use "make run_clone" to run the compiled output of the quine.

Take a look at the [Makefile] to see how the output of the quine is used as the input to generate the clone.
You can use "make test" to automatically diff the output with the original [quine.c].
