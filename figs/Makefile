.PHONY: figures

figures: build/single-hunt-grids.eps

build/%.eps: source/%.ps source/library.ps
	cat source/library.ps $< > $@
