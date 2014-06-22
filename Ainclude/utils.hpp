#ifndef __UTILS_HPP__
#define __UTILS_HPP__

#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#define OFSET 4
#define STEP 4
#define DIM 2
#define BMPHEADER 54
#define PixNum 4
#define SIZEW 741
#define SIZEH 398
#define Header (SIZEW-18)
#define INT 24
#define BYTE 8
#define RAD 8
#define SRAD 7
#define BYTENUM 255

namespace utils{

class Pixel
{
public:
	uint m_data[PixNum];
public:
	Pixel(){};
	void copy (Pixel&);
	bool IsBegin();
	bool IsCorner();
	bool IsBlack();
	bool IsDest();
	bool IsSideWalk();
};

struct Index
{
	Pixel m_pixel;
	bool alive;
};
class Step
{
public:
	int index[2];
};
class BitMap
{
public:
	uint TourSize;
	Index **m_index;
	int HEADER[BMPHEADER];
	Step m_begin;
	Step m_corners[INT*INT];
	Step m_Dest[INT];
public:
	BitMap ();
   ~BitMap();
	bool IsBlack(Step*);
	void Read(const char *);
	void ReadBmp(const char*);
	void CreateImage(const char*);
	Index& RetIndex(int,int);
	Pixel& RetPix(Step&)
	{
		return m_index[step.index[0]][step.index[1]].m_pixel;
	}
};
}
/*typedef std::vector<Step> _Vector_;

void ColorStepBlue(BitMap* imagemap,Step& step);
bool ColorStepBlack(BitMap* imagemap,Step& step);
void ColorStepGreen(BitMap* imagemap,Step& step,int);
void ColorStepRed(BitMap* imagemap,Step& step);
void ColorStepRand(BitMap* imagemap,Step& step,int,int,int);
void ColorRand(BitMap* imagemap,Step& step,int,int,int);
void GradFunc(BitMap*,BitMap*);
void ColorStepDest(BitMap* imagemap,Step& step);
void ColorStepCorner(BitMap* imagemap,Step& step);
void ColorStepBegin(BitMap* imagemap,Step& step);
*/
#endif
