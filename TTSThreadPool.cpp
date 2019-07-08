/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: TTSThreadPool.cpp
*	  创建者: 范安然
*	创建日期: 2019年07月08
*	    描述: 
*
==========================================*/
#include "TTSThreadPool.h"
#include<iostream>
#include"logger.h"
TTSThreadPool::TTSThreadPool(int nThreads ,int qSize):nThreadCount(0),threads(0),shutdown(0),started(0){
	worker_item_queue.setWorkerQueueSize(qSize);
	worker_item_queue.setWorkerItemCount(0);
}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
TTSTHreadPool::~TTSThreadPool(void){
	if(!freeThreadPool()){
		LOG_ERROR("Free threadpool failed.");
	}
	if(!destroyThreadPool()){
		log_error("destroy threadpool failed.");
	}
}

/*
*	函数名称:
*	描	  述:
*	参    数:
*	返    回:
*/
TTSThreadPool::createThreadPool(int flags){
	
}
