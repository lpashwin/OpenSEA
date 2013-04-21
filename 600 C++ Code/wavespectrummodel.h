#ifndef WAVESPECTRUMMODEL_H
#define WAVESPECTRUMMODEL_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class WaveSpectrumModel
{
public:
	WaveSpectrumModel();
	~WaveSpectrumModel();
private:
	string spectrumName;
	vector<double> frequencies;
	vector<double> waveEnergy;
};
#endif

