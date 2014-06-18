#!/usr/bin/env /bin/sh

cd $(dirname "$0")

../ringing-lib/methsearch --bells=5 --blows-per-place=4 --symmetric
