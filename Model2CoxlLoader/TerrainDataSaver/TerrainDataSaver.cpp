// TerrainDataSaver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ModelLoader.h"
#include "BinaryConverter.h"
#include "HeightPlaneConverter.h"
#include "Rotator.h"
int main()
{
	std::cout << "Rotate to Z-Up (y/n)" << std::endl;
	std::string choice;
	std::getline(std::cin, choice);

	std::cout << "Input Path:" << std::endl;

	std::string inPath;
	std::getline(std::cin, inPath);

	std::cout << "Output Path:" << std::endl;

	std::string outPath;
	std::getline(std::cin, outPath);

	auto loader = ModelLoader();
	auto data = loader.LoadModelFromFile(inPath);

	if (choice == "y") {
		data = Rotator().RotateToYUp(data);
	}

	BinaryConverter writer(data, outPath);


	std::cout << "complete" << std::endl;
	auto exit = std::string("");
	std::cin >> exit;
	return 0;
}

