#include <iostream>
#include <fstream>
#include "CWorkerMock.h"

void CWorkerMock::output() {
	std::ofstream ofs("output.txt");
	std::streambuf* oldrdbuf = std::cout.rdbuf(ofs.rdbuf());
	CWorker::output();

	std::cout.rdbuf(oldrdbuf);
	CWorker::output();
}

