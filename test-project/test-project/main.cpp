#include "sampleH.h"

void main()
{






	//Mat A = imread("C://다운로드//①▶학업◀  프로젝트//한글자 영역 뽑아내기//lineImg.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	//Mat B(A.rows, A.cols, CV_8UC1);

	////영상 복사 
	//for (int i = 0; i < A.rows; i++) {
	//	for (int j = 0; j < A.cols; j++)
	//		B.at<unsigned char>(i, j) = A.at<unsigned char>(i, j);
	//}

	////이진화 작업
	//for (int i = 0; i < A.rows; i++) {
	//	for (int j = 0; j < A.cols; j++)
	//		if (B.at<unsigned char>(i, j) > 125) B.at<unsigned char>(i, j) = 0;
	//		else B.at<unsigned char>(i, j) = 255;
	//}

	////잡영 제거 
	////erode(B, B, Mat(), Point(-1, -1), 1);
	//dilate(B, B, Mat(), Point(-1, -1), 2);
	//erode(B, B, Mat(), Point(-1, -1), 1);
	//imwrite("lineImg_out.bmp", B);


	////이미지 라벨링
	//Mat labelImage(B.rows, B.cols, CV_16UC1);
	//int label_count = connectedComponents(B, labelImage, 8); // 0까지 포함된 갯수임
	//														 //printf("무슨값일까? %d ", label_count);

	//imwrite("label.bmp", labelImage);



	//Mat C = imread("label.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	//lab *label = doublemalloc(label_count);

	//// 라벨링 위치 정보 초기화 
	//for (int i = 0; i < A.rows; i++)
	//{
	//	for (int j = 0; j < A.cols; j++)
	//	{
	//		if (C.at<unsigned char>(i, j) != 0)
	//		{
	//			label[C.at<unsigned char>(i, j)].xpos_min = A.cols;
	//			label[C.at<unsigned char>(i, j)].ypos_min = A.rows;
	//		}
	//	}
	//}


	//// 각 라벨 위치정보 입력
	//for (int i = 0; i < A.rows; i++)
	//{
	//	for (int j = 0; j < A.cols; j++)
	//	{

	//		if (C.at<unsigned char>(i, j) != 0)
	//		{
	//			label[C.at<unsigned char>(i, j)].xpos_max = imax(label[C.at<unsigned char>(i, j)].xpos_max, j);
	//			label[C.at<unsigned char>(i, j)].xpos_min = imin(label[C.at<unsigned char>(i, j)].xpos_min, j);
	//			label[C.at<unsigned char>(i, j)].ypos_max = imax(label[C.at<unsigned char>(i, j)].ypos_max, i);
	//			label[C.at<unsigned char>(i, j)].ypos_min = imin(label[C.at<unsigned char>(i, j)].ypos_min, i);
	//			label[C.at<unsigned char>(i, j)].flag = 1;

	//		}
	//	}
	//}


	////불필요한 라벨 표시하기
	//for (int i = 1; i < label_count; i++)
	//{
	//	for (int y = label[i].ypos_min; y < label[i].ypos_max; y++)
	//	{
	//		for (int x = label[i].xpos_min; x < label[i].xpos_max; x++)
	//		{
	//			if (label[C.at<unsigned char>(y, x)].flag != 0) //이미 0으로 처리된것은 패스 
	//			{
	//				if (C.at<unsigned char>(y, x) != 0 && C.at<unsigned char>(y, x) != i)
	//				{
	//					if (label[C.at<unsigned char>(y, x)].xpos_min > label[i].xpos_min && label[C.at<unsigned char>(y, x)].ypos_min > label[i].ypos_min)
	//						if (label[C.at<unsigned char>(y, x)].xpos_max < label[i].xpos_max && label[C.at<unsigned char>(y, x)].ypos_max < label[i].ypos_max)
	//						{
	//							label[C.at<unsigned char>(y, x)].flag = 0;
	//						}
	//				}
	//			}
	//		}
	//	}
	//}


	////for(int i = 1; i < label_count; i++)
	////{
	////	for (int y = label[i].ypos_min; y < label[i].ypos_max; y++)
	////	{
	////		for (int x = label[i].xpos_min ; x < label[i].xpos_max ; x++)
	////		{
	////			if (label[C.at<unsigned char>(y, x)].flag != 0)
	////			{
	////				if (C.at<unsigned char>(y, x) != 0 && C.at<unsigned char>(y, x) != i)
	////				{
	////					label[C.at<unsigned char>(y, x)].flag = 0;
	////				}
	////			}
	////		}
	////	}
	////}

	////상하단 문자와 관련 없는 부분 제거하기 


	//// 블럭그리기

	//CvScalar color = cvScalar(255, 255, 255);

	//for (int i = 1; i < label_count; i++)
	//{

	//	if (label[i].flag != 0)
	//	{
	//		Rect temp(label[i].xpos_min, label[i].ypos_min, (label[i].xpos_max - label[i].xpos_min + 1), (label[i].ypos_max - label[i].ypos_min + 1));
	//		rectangle(B, temp, color, 1);
	//		imwrite("label2.bmp", B);
	//	}
	//}




	//imwrite("label2.bmp", B);
	//free(label);




}