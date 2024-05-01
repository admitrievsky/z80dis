# Z80 disassembler for the ZX Spectrum

The Z80 disassembler for the ZX Spectrum is fun project that I started to revive my Z80 assembly programming skills.
It occupies low third of the screen memory and doesn't require any additional memory.

Compile and Run
```
docker build -t pasmo .
docker run -it -v $(pwd)/code:/app pasmo pasmo -1 --tapbas code.z80 prog.tap
fuse --tape code/prog.tap
```
