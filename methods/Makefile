.PHONY: build clean

# Link to methsearch from the Ringing Class Library
METHSEARCH = ../ringing-lib/methsearch \
	--bells=5 \
	--blows-per-place=4 \
	--library=plain5.txt \
	--require='$$o >= 3'

# Web location of the current plain minor method collection
CCMETHODS = http://www.methods.org.uk/method-collections/plain/plain5.txt

build: single-hunt.txt

plain5.txt:
	wget $(CCMETHODS)

single-hunt.txt: plain5.txt Makefile
	$(METHSEARCH) \
		--symmetric \
		--all-methods \
		--format='$$3#\t$$q\t$$l\t$$D\t$$o\t$$n $$C' \
		--out-file=single-hunt.txt

clean:
	rm -f *.txt
