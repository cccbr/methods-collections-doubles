.PHONY: figures clean

FIGS = single-hunt-grids.eps twin-hunt-2-grids.eps twin-hunt-5-grids.eps treble-hunt-23-grids.eps treble-hunt-25-grids.eps

figures: $(FIGS)

%.eps: %.ps
	ps2eps < $< > $@

%.ps: header.txt %.txt
	cat $^ > $@

clean:
	rm -f *.ps *.eps
