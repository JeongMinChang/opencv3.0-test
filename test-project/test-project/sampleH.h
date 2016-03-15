#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <string.h>

#include <opencv2/opencv.hpp>   
#include <opencv2/core/core.hpp>   
#include <opencv2/highgui/highgui.hpp>   

#define imax(x,y) ((x<y)?y:x)
#define imin(x,y) ((x>y)?y:x)
using namespace cv;


struct Label
{
	int xpos_max; 
	int xpos_min; 
	int ypos_max;  
	int ypos_min;  
	int flag; // 글자 표시 라벨
};
typedef struct Label lab;

lab *doublemalloc(int length);
int** IntAlloc2(int width, int height);
void IntFree2(int** image, int width, int height);
int** ReadImage(char* name, int* width, int* height);
void WriteImage(char* name, int** image, int width, int height);
void ImageShow(char* winname, int** image, int width, int height);