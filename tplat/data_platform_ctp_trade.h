//
//  data_platform_ctp_trade.h
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_ctp_trade__
#define __tplat__data_platform_ctp_trade__

#include <iostream>
#include "ThostFtdcTraderApi.h"
#include "trader.h"
extern bool IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo);

class TPlatThirdTradeApi : public CThostFtdcTraderApi
{
    TPlatThirdTradeApi(Trader *trader){
        _trader=trader;
    };
    int ReqSettlementInfoConfirm();
    int ReqQryInstrument();
    int ReqQryTradingAccount();
    int ReqQryInvestorPosition(string instid);
    int ReqOrderInsert(TThostFtdcInstrumentIDType instId,
                       TThostFtdcDirectionType dir, char kpp,
           TThostFtdcPriceType price,   TThostFtdcVolumeType vol,int sid);
    int ReqOrderAction(string exchangeid, string ordersysid, int sid);
    private:
        Trader *_trader;      
};


class TPlatThirdTradeSpi : public CThostFtdcTraderSpi
{
    TPlatThirdTradeSpi(Trader *trader){
        _trader=trader;
    };
    void OnFrontConnected();
    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspSettlementInfoConfirm(
        CThostFtdcSettlementInfoConfirmField  *pSettlementInfoConfirm, 
        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, 
         CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, 
        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, 
        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, 
          CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRspOrderAction(
      CThostFtdcInputOrderActionField *pInputOrderAction, 
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void OnRtnOrder(CThostFtdcOrderField *pOrder);
    void OnRtnTrade(CThostFtdcTradeField *pTrade);
    void OnFrontDisconnected(int nReason);
    void OnHeartBeatWarning(int nTimeLapse);
    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    void PrintOrders();
    void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);
    private:
        Trader *_trader;   
};




#endif /* defined(__tplat__data_platform_ctp_trade__) */
