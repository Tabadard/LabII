#pragma once

#ifdef WOOALGO_EXPORTS  
#define WOOALGO __declspec(dllexport)   
#else  
#define WOOALGO __declspec(dllimport)   
#endif  

#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#define M_PI 3.14159265359

namespace WooAlgorithm {
	// This class is exported

	class Functions
	{
		public:

		static double range(double, double, double, double);

		static void setpix(HDC, double, double, double);

		static void Paint_ellipse(HDC, unsigned int, unsigned int);
	};
};