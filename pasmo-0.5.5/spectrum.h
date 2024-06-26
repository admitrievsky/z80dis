#ifndef INCLUDE_SPECTRUM_H
#define INCLUDE_SPECTRUM_H

// spectrum.h

#include "pasmotypes.h"

#include <string>

class Asm;

namespace spectrum
{

class Plus3Head
{
public:
    Plus3Head();
    void setsize(address size);
    void setstart(address start);
    void write(std::ostream & out);
private:
    static const size_t headsize= 128;
    byte plus3[headsize];
};

// Spectrum Basic generation.

#if 0
extern const std::string tokNumPrefix;
extern const std::string tokEndLine;
extern const std::string tokCODE;
extern const std::string tokUSR;
extern const std::string tokLOAD;
extern const std::string tokPOKE;
extern const std::string tokRANDOMIZE;
extern const std::string tokCLEAR;

std::string number(address n);
std::string linenumber(address n);
std::string linelength(address n);
std::string basicline(address linenum, const std::string & line);
#endif

std::string basicloader(const Asm & as);

} // namespace spectrum

#endif

// End
