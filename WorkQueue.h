/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: WorkQueue.h
*	  创建者: 范安然
*	创建日期: 2019年07月08
*	    描述: 
*
==========================================*/
#pragma once
#ifndef  _WORK_ITEM_QUEUE_H_
#define _WORK_ITEM_QUEUE_H_
#include<queue>
#include<list>
#include"IWorkerItem.h"
using namespace std;
typedef queue<IWorkerItem,list<IWorkerItem*> > WORKER_ITEM_QUEUE;
class WorkItemQueue{
public:
	WorkItemQueue();
	~WorkItemQueue();
public:
	bool putItem(IWorkItem* _work);
	IWorkerItem* getItem();
	bool removeItem(IWorkerItem* _work);
	bool clearItem();
	int getWorkerQueueSize();
	bool setWorkerQueueSize(int nSize);
	bool getWorkerItemCount();
	bool setQueueItemCount(int nSize);
private:
	WORKER_ITEM_QUEUE worker_queue;
	int nQueueSize;
	int nCount;
};
#endif
