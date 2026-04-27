compile:
	verilator -Wall --binary --trace --timing dff.v tb.v
run:
	./obj_dir/Vdff
all: compile run
