//
//  data_platform_ctp_quote.h
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_ctp_quote__
#define __tplat__data_platform_ctp_quote__

#include <iostream>
#include <vector>
//#include "ThostFtdcTraderApi.h"
#include "trader.h"
#include "ThostFtdcMdApi.h"
#include "data_platform.h"

using namespace std;

class DataPlatServ;
class TPlatThirdQuoteSpi : public CThostFtdcMdSpi
{
public:
    TPlatThirdQuoteSpi(DataPlatServ *dps){
        _dps=dps;
    };
    void OnFrontConnected();
    void OnFrontDisconnected(int nReason);
    void OnHeartBeatWarning(int nTimeLapse);
    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);
private:
    DataPlatServ  *_dps;
};


class TPlatThirdQuoteApi
{
public:
    TPlatThirdQuoteApi(string dir,QuoteAddrInfo addrinfo,DataPlatServ *dps);
    int SubscribeMarketData(vector<string> instruments);
    int RegeisterSpi();
    int RegeisterSpi(TPlatThirdQuoteSpi *pspi);
    int UnSubscribeMarketData(vector<string> instruments);
	int ReqUserLogin();
	int ReqUserLogout();
private:
    /* 
	static CThostFtdcMdApi *CreateFtdcMdApi(const char *pszFlowPath = "", const bool bIsUsingUdp=false, const bool bIsMulticast=false);
	virtual void Release() = 0;
	virtual void Init() = 0;
	virtual int Join() = 0;
	virtual const char *GetTradingDay() = 0;
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	virtual void RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo) = 0;
	virtual void RegisterSpi(CThostFtdcMdSpi *pSpi) = 0;
	virtual int SubscribeMarketData(char *ppInstrumentID[], int nCount) = 0;
	virtual int UnSubscribeMarketData(char *ppInstrumentID[], int nCount) = 0;
    */
    QuoteAddrInfo   _addrinfo;
    DataPlatServ    *_dps;
    CThostFtdcMdApi *_api;
};



#endif /* defined(__tplat__data_platform_ctp_quote__) */
