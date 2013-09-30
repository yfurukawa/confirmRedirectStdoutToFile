#ifndef CWORKERMOCK_H_
#define CWORKERMOCK_H_

#include "CWorker.h"

class CWorkerMock : public CWorker {
public:
	CWorkerMock() {};
	virtual ~CWorkerMock() {};
	void output();
};

#endif
