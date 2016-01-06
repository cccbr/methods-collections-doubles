.PHONY: figures clean

FIGS := $(patsubst %.txt,%.pdf,$(wildcard *.txt))

figures: $(FIGS)

%.pdf: %.eps
	epspdf $< $@

%.eps: %.ps
	ps2eps < $< > $@

%.ps: header.inc %.txt
	cat $^ > $@

clean:
	rm -f *.ps *.eps *.pdf
