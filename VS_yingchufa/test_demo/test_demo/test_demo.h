#pragma once
#include "xiApi.h"
#include <iostream>
#include <deque>
#include <fstream>
//#include <windows.h>
#include <tchar.h> 
#include <thread>



using namespace std;


#include <mutex>


//��װ�ĺ���
void ConnectCamera();
void GetFrame(HANDLE cam);
void SaveData(string str_dir);
int GetNextImage(HANDLE cam);

std::deque<unsigned char*> m_dequeFrame;//����ԭͼ��ͼ��ָ�룻
//std::deque<unsigned char*> m_dequeSave;//���洢��ͼ���ͼ��ָ�룻

bool m_bGrabFlag = false; //�ɼ���־λ
bool m_bCutFinished = false;//��ͼ�߳̽���
bool m_rawFlag = false; //�ɼ���־λ
clock_t start1, finish1;
double totaltime1;
condition_variable contion;
std::mutex mutex_deque;//����deque��
//void WriteDatHdr(const char* filename, unsigned char* PicData, int thread_num, int wavelength[]);

//bool SotpGrab();
//bool CutFrame();
