.PHONY: figures clean

figures: build/single-hunt-grids.eps build/twin-hunt-2-grids.eps build/twin-hunt-5-grids.eps

build/%.eps: build/%.ps
	ps2eps < $< > $@

build/%.ps: source/header.ps source/%.ps
	cat $^ > $@

clean:
	rm -f build/*
