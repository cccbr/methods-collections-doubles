.PHONY: figures

figures: build/single-hunt-grids.eps

build/%.eps: build/%.ps
	ps2eps < $< > $@

build/%.ps: source/%.ps source/library.ps
	cat source/library.ps $< > $@
