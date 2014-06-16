.PHONY: build doubles.dvi clean

build: doubles.pdf

doubles.dvi:
	latex doubles.tex

doubles.pdf: doubles.dvi
	dvipdf doubles.dvi doubles.pdf

clean:
	-rm doubles.aux
	-rm doubles.dvi
	-rm doubles.log
	-rm doubles.pdf
