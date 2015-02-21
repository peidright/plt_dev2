//
//  data_platform_ctp_trade.cpp
//  tplat
//
//  Created by dev on 2/5/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#include "data_platform_ctp_trade.h"



int TPlatThirdTradeApi::ReqSettlementInfoConfirm()
{
    return 0;
}
int TPlatThirdTradeApi::ReqQryInstrument()
{
    return 0;
}
int TPlatThirdTradeApi::ReqQryTradingAccount()
{
    return 0;
}
int TPlatThirdTradeApi::ReqQryInvestorPosition(string instid)
{
    return 0;
}
int TPlatThirdTradeApi::ReqOrderInsert(TThostFtdcInstrumentIDType instId,
                       TThostFtdcDirectionType dir, char kpp,
           TThostFtdcPriceType price,   TThostFtdcVolumeType vol,int sid)
{
    return 0;
}
int TPlatThirdTradeApi::ReqOrderAction(string exchangeid, string ordersysid, int sid)
{
    return 0;
}


void TPlatThirdTradeSpi::OnFrontConnected()
{
}

void TPlatThirdTradeSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
		CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void TPlatThirdTradeSpi::OnRspSettlementInfoConfirm(
        CThostFtdcSettlementInfoConfirmField  *pSettlementInfoConfirm, 
        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{	
}

void TPlatThirdTradeSpi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, 
         CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{ 	
}

void TPlatThirdTradeSpi::OnRspQryTradingAccount(
    CThostFtdcTradingAccountField *pTradingAccount, 
   CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{ 
}

void TPlatThirdTradeSpi::OnRspQryInvestorPosition(
    CThostFtdcInvestorPositionField *pInvestorPosition, 
    CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{ 
	/*
  if( !IsErrorRspInfo(pRspInfo) &&  pInvestorPosition ){
    cerr<<" 响应 | 合约:"<<pInvestorPosition->InstrumentID
      <<" 方向:"<<MapDirection(pInvestorPosition->PosiDirection-2,false)
      <<" 总持仓:"<<pInvestorPosition->Position
      <<" 昨仓:"<<pInvestorPosition->YdPosition 
      <<" 今仓:"<<pInvestorPosition->TodayPosition
      <<" 持仓盈亏:"<<pInvestorPosition->PositionProfit
      <<" 保证金:"<<pInvestorPosition->UseMargin<<endl;
  }
  if(bIsLast) sem.sem_v();
	*/
}


void TPlatThirdTradeSpi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, 
          CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    /*put this msg to StrategyScript*/
}


void TPlatThirdTradeSpi::OnRspOrderAction(
      CThostFtdcInputOrderActionField *pInputOrderAction, 
      CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{	
}

///报单回报
void TPlatThirdTradeSpi::OnRtnOrder(CThostFtdcOrderField *pOrder)
{	
}

void TPlatThirdTradeSpi::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	/*
	   CThostFtdcTradeField* trade = new CThostFtdcTradeField();
	   memcpy(trade,  pTrade, sizeof(CThostFtdcTradeField));
	   bool founded=false;     unsigned int i=0;
	   for(i=0; i<tradeList.size(); i++){
	   if(tradeList[i]->TradeID == trade->TradeID) {
	   founded=true;   break;
	   }
	   }
  	if(founded) tradeList[i] = trade;   
  	else  tradeList.push_back(trade);
  	sem.sem_v();
  	*/
}

void TPlatThirdTradeSpi::OnFrontDisconnected(int nReason)
{
}
		
void TPlatThirdTradeSpi::OnHeartBeatWarning(int nTimeLapse)
{
}

void TPlatThirdTradeSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
}

void TPlatThirdTradeSpi::PrintOrders(){
  CThostFtdcOrderField* pOrder; 
  /* 
  for(unsigned int i=0; i<orderList.size(); i++){
    pOrder = orderList[i];
    cerr<<" 报单 | 合约:"<<pOrder->InstrumentID
      <<" 方向:"<<MapDirection(pOrder->Direction,false)
      <<" 开平:"<<MapOffset(pOrder->CombOffsetFlag[0],false)
      <<" 价格:"<<pOrder->LimitPrice
      <<" 数量:"<<pOrder->VolumeTotalOriginal
      <<" 序号:"<<pOrder->BrokerOrderSeq 
      <<" 报单编号:"<<pOrder->OrderSysID
      <<" 状态:"<<pOrder->StatusMsg<<endl;
  }
  */
}

void TPlatThirdTradeSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{

	/*
THOST_FTDC_IS_BeforeTrading '0'
THOST_FTDC_IS_NoTrading '1'
THOST_FTDC_IS_Continous '2'
THOST_FTDC_IS_AuctionOrdering '3'
THOST_FTDC_IS_AuctionBalance '4'
THOST_FTDC_IS_AuctionMatch '5'
THOST_FTDC_IS_Closed '6'
	*/
	return;
}

