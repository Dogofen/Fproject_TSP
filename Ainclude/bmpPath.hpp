#ifndef __BMP_HPP__
#define __BMP_HPP__
#include "path.hpp"
typedef struct Index Index;
struct Index
{
	Pixel m_pixel;
	bool alive;
};
class BitMap
{
public:
	int tour;
	Index **m_index;
	int HEADER[BMPHEADER];
	Step m_begin;
	Step m_corners[INT];
	Step m_Dest[INT];
public:
	BitMap ();
   ~BitMap();
	bool IsBlack(Step*);
	void Read(const char *);
	void ReadBmp(const char*);
    void CreateMap(const char*);
	void CreateImage(const char*);
	Index& RetIndex(int,int);
	class Pixel& RetPix(class Step&);
};
void Generate(BitMap*);

#endif
