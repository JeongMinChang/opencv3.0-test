#include "sampleH.h"

void main()
{






	//Mat A = imread("C://�ٿ�ε�//�確�о���  ������Ʈ//�ѱ��� ���� �̾Ƴ���//lineImg.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	//Mat B(A.rows, A.cols, CV_8UC1);

	////���� ���� 
	//for (int i = 0; i < A.rows; i++) {
	//	for (int j = 0; j < A.cols; j++)
	//		B.at<unsigned char>(i, j) = A.at<unsigned char>(i, j);
	//}

	////����ȭ �۾�
	//for (int i = 0; i < A.rows; i++) {
	//	for (int j = 0; j < A.cols; j++)
	//		if (B.at<unsigned char>(i, j) > 125) B.at<unsigned char>(i, j) = 0;
	//		else B.at<unsigned char>(i, j) = 255;
	//}

	////�⿵ ���� 
	////erode(B, B, Mat(), Point(-1, -1), 1);
	//dilate(B, B, Mat(), Point(-1, -1), 2);
	//erode(B, B, Mat(), Point(-1, -1), 1);
	//imwrite("lineImg_out.bmp", B);


	////�̹��� �󺧸�
	//Mat labelImage(B.rows, B.cols, CV_16UC1);
	//int label_count = connectedComponents(B, labelImage, 8); // 0���� ���Ե� ������
	//														 //printf("�������ϱ�? %d ", label_count);

	//imwrite("label.bmp", labelImage);



	//Mat C = imread("label.bmp", CV_LOAD_IMAGE_GRAYSCALE);
	//lab *label = doublemalloc(label_count);

	//// �󺧸� ��ġ ���� �ʱ�ȭ 
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


	//// �� �� ��ġ���� �Է�
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


	////���ʿ��� �� ǥ���ϱ�
	//for (int i = 1; i < label_count; i++)
	//{
	//	for (int y = label[i].ypos_min; y < label[i].ypos_max; y++)
	//	{
	//		for (int x = label[i].xpos_min; x < label[i].xpos_max; x++)
	//		{
	//			if (label[C.at<unsigned char>(y, x)].flag != 0) //�̹� 0���� ó���Ȱ��� �н� 
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

	////���ϴ� ���ڿ� ���� ���� �κ� �����ϱ� 


	//// ���׸���

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