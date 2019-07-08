/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: TTShreadPool.h
*	  创建者: 范安然
*	创建日期: 2019年07月08
*	    描述: 
*
==========================================*/
#pragma once
#ifndef _TTS_THREAD_POOL_H_
#define _TTS_THREAD_POOL_H_
#include<pthread.h>
#include<string>
#include "WorkItemQueue.h"
class TTSThreadPool{
public:
	TTSThreadPool(int nThreads,int qSize);
	virtual ~TTSThreadPool(void);
public:
	bool createThreadPool(int flags);
	int addThreadPool(IWorkerItem* worker_item);
	int destroyThreadPool();
	int freeThreadPool();
	WorkItemQueue& getWorkItemQueue();
	int getThreadCount();
	int shutDownWorkerQueue();
	int isWorkerQueueShutDown();
public:
	static void* create_threadpool(void *pthis);
public:
	pthread_mutex_t lock;
	pthread_cond_t notify;
	int started;
	int shutdown;
private:
	WorkItemQueue worker_item_queue;
	int nThreadCount;
	pthread_t* threads;
}	
#endif
