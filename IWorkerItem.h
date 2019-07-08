/*==================================================
*	Copyright (c) 2019All rights reserved.
*		
*	文件名称: IWorkerItem.h
*	  创建者: 范安然
*	创建日期: 2019年07月08
*	    描述: 
*
==========================================*/
#pragma once
class IWorkerItem{
	virtual unsigned long addRef()=0;
	virtual unsigned long release()=0;
	virtual void workMain(void * pThis)=0;
};
