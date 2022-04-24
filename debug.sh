#!/bin/bash
make -f $GENDEV/sgdk/mkfiles/Makefile.rom clean all
mednafen ./out/rom.bin