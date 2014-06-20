.PHONY: build clean

# Link to methsearch from the Ringing Class Library
METHSEARCH = ../ringing-lib/methsearch

# Web location of the current plain minor method collection
CCMETHODS = http://www.methods.org.uk/method-collections/plain/plain5.txt

build: single-hunt.txt

plain5.txt:
	wget $(CCMETHODS)

single-hunt.txt: plain5.txt Makefile
	$(METHSEARCH) \
		--bells=5 \
		--symmetric \
		--all-methods \
		--require='$$o >= 3' \
		--blows-per-place=4 \
		--format='$$3#\t$$q\t$$l\t$$D\t$$o\t$$n $$C' \
		--library=plain5.txt \
		--out-file=single-hunt.txt

clean:
	rm -f *.txt
