#ifndef __PATH_HPP__
#define __PATH_HPP__

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
#define SRAD 6
#define BYTENUM 255

enum Colors {BLUE=0,GREEN=1,RED=2,ALPHA=3 };
typedef unsigned int uint;
using namespace std;
namespace path
{
class Route
{
public:
	int* via;
	int* dist;
	uint m_size;
	uint m_dist;
	double routeDistance;
public:
	Route(uint);
	~Route();
	void RouteBirth();
	void Print();
	void InsertFitness(int**);
	void operator=(Route&);
};
class Pixel
{
public:
	uint m_data[PixNum];
public:
	void copy (Pixel&);
	bool IsBegin();
	bool IsCorner();
	bool IsBlack();
	bool IsDest();
	bool IsSideWalk();
};
class Step
{
	int index[2];
public:
	uint id;
public:
	void operator()(int*);
	bool operator==(Step&);
	Step operator+(int*);
	bool HASmember(Step&);
	void insert(int,int);
	void add(int,int);
	bool IsBlack(class BitMap*);
	bool IsAvailable(class BitMap*);
	Step Up();
	Step Right();
	Step Left();
	Step Down();
	uint Num();
	bool valid();
	void Print(BitMap*);
	void Print();
	int operator[](int);
};
typedef std::vector<Step> _Vector_;

class Stream
{
private:
	fstream& m_pFile;
public:
	Stream (const char*,bool,fstream&);
   ~Stream ();
	operator fstream& ()const{return m_pFile;}
	bool IsValid();
};
typedef struct Index Index;
struct Index
{
	Pixel m_pixel;
	bool alive;
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
	class Pixel& RetPix(class Step&);
};
}
using namespace path;
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


#endif
