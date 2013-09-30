#include "CDirector.h"
#include "CWorker.h"
#include "CWorkerMock.h"

void CDirector::execute() {
	CWorkerMock* worker;
	worker = new CWorkerMock();
	worker->output();
	delete worker;
}

