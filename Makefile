.PHONY: build doubles.dvi clean figures

build: doubles.pdf

doubles.pdf: doubles.tex $(wildcard docs/*.tex) figures
	pdflatex doubles.tex
	pdflatex doubles.tex

figures:
	make -C figs

clean:
	make -C figs clean
	-rm doubles.aux
	-rm doubles.dvi
	-rm doubles.log
	-rm doubles.pdf
