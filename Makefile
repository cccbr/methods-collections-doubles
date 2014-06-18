.PHONY: build doubles.dvi clean figures

build: doubles.pdf

doubles.dvi: doubles.tex $(wildcard docs/*.tex) figures
	latex doubles.tex
	latex doubles.tex

doubles.pdf: doubles.dvi
	dvipdf doubles.dvi doubles.pdf

figures:
	make -C figs

clean:
	make -C figs clean
	-rm doubles.aux
	-rm doubles.dvi
	-rm doubles.log
	-rm doubles.pdf
