#!/bin/bash
make -f $GENDEV/sgdk/mkfiles/Makefile.rom clean all
mednafen ./out/rom.bin

C:/sgdk/mednafen/mednafen.exe ./out/rom.bin