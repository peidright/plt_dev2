//
//  data_platform_ctp_quote.cpp
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//
#include "data_platform_ctp_quote.h"
#include <cstring>

TPlatThirdQuoteApi::TPlatThirdQuoteApi(string dir,QuoteAddrInfo addrinfo ,DataPlatServ *dps)
{
    /*  
     *makesure the dir existed
     * */
    _dps=dps;
    _api= CThostFtdcMdApi::CreateFtdcMdApi(dir.c_str(),false,false);
    _addrinfo=addrinfo;
}

bool IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo)
{
	// 如果ErrorID != 0, 说明收到了错误的响应
    bool ret=false;
	ret = ((pRspInfo) && (pRspInfo->ErrorID != 0));
    if (ret){
    }
	return ret;
}

int TPlatThirdQuoteApi::SubscribeMarketData(vector<string> instruments)
{
    //char **inst=new (char*)[10];
    //int * inst = new int[10];
    //may be bug const
    int size= instruments.size();
    char **insts = new char*[size];
    for(int i=0;i<size;i++) {
        instruments[i].size();
        insts[i]=new char[instruments[i].size()+1];
        strcpy(insts[i], instruments[i].c_str());
    }
	this->_api->SubscribeMarketData(insts, size);
    for(int i=0;i<size;i++) {
        delete insts[i];
    }
    delete [] insts;
    return 0;
}

int TPlatThirdQuoteApi::RegeisterSpi(TPlatThirdQuoteSpi *pspi)
{
    this->_api->RegisterSpi((CThostFtdcMdSpi *)pspi);
    return 0;
}

int TPlatThirdQuoteApi::UnSubscribeMarketData(vector<string> instruments)
{
    //char **inst=new (char*)[10];
    //int * inst = new int[10];
    //may be bug const
    int size= instruments.size();
    char **insts = new char*[size];
    for(int i=0;i<size;i++) {
        instruments[i].size();
        insts[i]=new char[instruments[i].size()+1];
        strcpy(insts[i], instruments[i].c_str());
    }
	this->_api->UnSubscribeMarketData(insts, size);
    for(int i=0;i<size;i++) {
        delete insts[i];
    }
    delete [] insts;
    return 0;
}

int TPlatThirdQuoteApi::ReqUserLogin()
{
	int ret;
	CThostFtdcReqUserLoginField req;
	memset(&req, 0, sizeof(req));
	strcpy(req.BrokerID, _addrinfo.brokerid.c_str()); //strcpy(appId, vAppId); 
	strcpy(req.UserID, _addrinfo.username.c_str());  //strcpy(userId, vUserId); 
	strcpy(req.Password,_addrinfo.password.c_str());
	ret = _api->ReqUserLogin(&req, 1);	
	if (ret) {
        assert(0);
	}
    return 0;
}

int TPlatThirdQuoteApi::ReqUserLogout()
{
    return 0;
}





void TPlatThirdQuoteSpi::OnFrontConnected()
{
    return;
}
void TPlatThirdQuoteSpi::OnFrontDisconnected(int nReason)
{
}
void TPlatThirdQuoteSpi::OnHeartBeatWarning(int nTimeLapse)
{

}
void TPlatThirdQuoteSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void TPlatThirdQuoteSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}
void TPlatThirdQuoteSpi::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void TPlatThirdQuoteSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void TPlatThirdQuoteSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void dump_depthmarketdata(CThostFtdcDepthMarketDataField *dmd)
{
	//
	cout<<"业务日期         ActionDay :     "<<dmd->ActionDay<<endl;
	cout<<"交易所代码       ExchangeID:     "<<dmd->ExchangeID<<endl;
	cout<<"更新时间         UpdateTime:     "<<dmd->UpdateTime<<endl;
	cout<<"最后修改毫秒 UpdateMillisec:     "<<dmd->UpdateMillisec<<endl;
	cout<<"合约ID         InstrumentID:     "<<dmd->InstrumentID<<endl;
	cout<<"交易日           TradingDay:     "<<dmd->TradingDay<<endl;
	cout<<"今收盘           ClosePrice:     "<<dmd->ClosePrice<<endl;
	cout<<"昨收盘        PreClosePrice:     "<<dmd->PreClosePrice<<endl;
	cout<<"今开盘            OpenPrice:     "<<dmd->OpenPrice<<endl;
	cout<<"最高价         HighestPrice:     "<<dmd->HighestPrice<<endl;
	cout<<"最低价          LowestPrice:     "<<dmd->LowestPrice<<endl;
	cout<<"本次结算价  SettlementPrice:     "<<dmd->SettlementPrice<<endl;
	cout<<"上次结算价  PreSettlementPrice:  "<<dmd->PreSettlementPrice<<endl;
	cout<<"涨停板价    UpperLimitPrice:     "<<dmd->UpperLimitPrice<<endl;
	cout<<"跌停板价    LowerLimitPrice:     "<<dmd->LowerLimitPrice<<endl;
	cout<<"昨虚实度           PreDelta:     "<<dmd->PreDelta<<endl;
	cout<<"今虚实度          CurrDelta:     "<<dmd->CurrDelta<<endl;
	cout<<"数量                 Volume:     "<<dmd->Volume<<endl;
	cout<<"成交金额           Turnover:     "<<dmd->Turnover<<endl;
	cout<<"持仓量         OpenInterest:     "<<dmd->OpenInterest<<endl;
	cout<<"买1               BidPrice1:     "<<dmd->BidPrice1<<endl;
	cout<<"最新价            LastPrice:     "<<dmd->LastPrice<<endl;
	cout<<"买2               BidPrice2:     "<<dmd->BidPrice2<<endl;
	cout<<"买3               BidPrice3:     "<<dmd->BidPrice3<<endl;
	cout<<"买4               BidPrice4:     "<<dmd->BidPrice4<<endl;
	cout<<"买5               BidPrice5:     "<<dmd->BidPrice5<<endl;
	cout<<"卖1               AskPrice1:     "<<dmd->AskPrice1<<endl;
	cout<<"卖2               AskPrice2:     "<<dmd->AskPrice2<<endl;
	cout<<"卖3               AskPrice3:     "<<dmd->AskPrice3<<endl;
	cout<<"卖4               AskPrice4:     "<<dmd->AskPrice4<<endl;
	cout<<"卖5               AskPrice5:     "<<dmd->AskPrice5<<endl;
	cout<<"均价           AveragePrice:     "<<dmd->AveragePrice<<endl;
}

void TPlatThirdQuoteSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{
}
