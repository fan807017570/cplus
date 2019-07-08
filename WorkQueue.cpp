/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: WorkQueue.cpp
*	  创建者: 范安然
*	创建日期: 2019年07月08
*	    描述: 
*
==========================================*/
#include "WorkQueue.h"
#include <iostream>
WorkItemQueue::WorkItemQueue():nCount(0),nQueueSize(0){}
WorkItemQueue::~WorkItemQueue(){}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
bool WorkItemQueue::putItem(IWorkerItem* _work){
	if((_work!=null)||worker_queue.size()>=nQueueSize){
		cout<<"the Queue size is exceed expected"<<endl;
		return false;
	}
	worker_queue.push(_work);
	nCount++;
	cout<<"The item is sucessed add into the queue "<<endl;
	return true;
}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
IWorkerItem* WorkItemQueue::getItem(){	
	if(!worker_queue.empty()){
		IWorkerItem* _work =worker_queue.front();
		worker_queue.pop();
		nCount--;
		cout<< "The item is successed pop the item cout"<<end;
		return _work;
	}	
	return true;
}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
bool WorkItemQueue::removeItem(IWorkerItem* _work){
	count<<"the workItem Queue is called "<<endl;
	nCoount=0;
	return true;
}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
bool WorkItemQueue::clearItem(){
	nCount=0;
	cout<<"The workItemQueue::ClearItem hv call,,"<<end;
	return true;
}
int WorkItemQueue::getWorkerQueueSize(){
	return nQueueSize;
}
int WorkItemQueue::setWorkerQueueSize(int nSize){
	nQueueSize=nSize;
	return true;
}
int WorkItemQueue::getWorkerItemCount(){
	return nCount;
}
bool setQueueItemCount(int nSize){
	nCount=nSize;
	return true;
}









