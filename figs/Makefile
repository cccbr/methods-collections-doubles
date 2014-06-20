.PHONY: figures clean

FIGS := $(patsubst %.txt,%.eps,$(wildcard *.txt))

figures: $(FIGS)

%.eps: %.ps
	ps2eps < $< > $@

%.ps: header.inc %.txt
	cat $^ > $@

clean:
	rm -f *.ps *.eps
