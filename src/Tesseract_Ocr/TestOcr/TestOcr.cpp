// TestOcr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "strngs.h"
#include "baseapi.h"
#include <iostream>
using namespace std;



int _tmain(int argc, char* argv[])
{
	char *src = "a.jpg";
	tesseract::TessBaseAPI api;
	api.Init(NULL,"chi_sim",tesseract::OEM_DEFAULT);
	STRING text_out;
	if(!api.ProcessPages(src,NULL,0,&text_out))
	{
		return 0;
	}
	cout<<text_out.string();
	system("pause");
	return 0;
}

