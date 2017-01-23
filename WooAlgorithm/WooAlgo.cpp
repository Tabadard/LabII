// WooAlgorithm.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "WooAlgo.h"

namespace WooAlgorithm {
	double WooAlgorithm::Functions::range(double fx, double fy, double sx, double sy)
	{
		return sqrt((fx - sx)*(fx - sx) + (fy - sy)*(fy - sy));
	}

	void WooAlgorithm::Functions::setpix(HDC hdc, double realx, double realy, double range)
	{
		SetPixel(hdc, (int)realx, (int)realy, RGB(range * 255.0, range * 255.0, range * 255.0));
	}

	void WooAlgorithm::Functions::Paint_ellipse(HDC hdc, unsigned int a, unsigned int b)
	{
		double realx, realy;
		double range;

		for (double i = 0; i < M_PI * 2; i += 0.01)
		{
			realx = a*cos(i) + 200;
			realy = b*sin(i) + 200;

			range = WooAlgorithm::Functions::range(realx, 0, (int)realx, 0);

			setpix(hdc, (int)realx, (int)realy, range);
			setpix(hdc, (int)realx + 1, realy, 1 - range);
		}
	}
}