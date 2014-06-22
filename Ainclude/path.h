#ifndef __PATH_HPP__
#define __PATH_HPP__

#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
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
typedef struct Pixel Pixel;
typedef struct Route Route;
typedef struct BitMap BitMap;
typedef struct Step Step;
typedef enum
{
	false=0,
	true=1
}bool;
struct Route
{
	int* via;
	int* dist;
	uint m_size;
	uint m_dist;
	double routeDistance;
};
/*
	Route(uint);
	~Route();
	void RouteBirth();
	void Print();
	void InsertFitness(int**);
	void operator=(Route&);
};*/
struct Pixel
{
	uint m_data[PixNum];
};
/*public:
	void copy (Pixel&);
	bool IsBegin();
	bool IsCorner();
	bool IsBlack();
	bool IsDest();
	bool IsSideWalk();
};*/
struct Step
{
	int index[2];
	uint id;
};
/*
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
};*/
typedef struct Index Index;
struct Index
{
	Pixel m_pixel;
	bool alive;
};
struct BitMap
{
	uint TourSize;
	Index **m_index;
	int HEADER[BMPHEADER];
	Step m_begin;
	Step m_corners[INT*INT];
	Step m_Dest[INT];
};
/*public:
	BitMap ();
   ~BitMap();
	bool IsBlack(Step*);
	void Read(const char *);
	void ReadBmp(const char*);
	void CreateImage(const char*);
	Index& RetIndex(int,int);
	class Pixel& RetPix(class Step&);
};
}*/
void ColorStepBlue(BitMap* imagemap,Step* step);
bool ColorStepBlack(BitMap* imagemap,Step* step);
void ColorStepGreen(BitMap* imagemap,Step* step,int);
void ColorStepRed(BitMap* imagemap,Step* step);
void ColorStepRand(BitMap* imagemap,Step* step,int,int,int);
void ColorRand(BitMap* imagemap,Step* step,int,int,int);
void GradFunc(BitMap*,BitMap*);
void ColorStepDest(BitMap* imagemap,Step* step);
void ColorStepCorner(BitMap* imagemap,Step* step);
void ColorStepBegin(BitMap* imagemap,Step* step);


#endif
