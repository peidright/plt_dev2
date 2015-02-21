//
//  data_platform.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform__
#define __tplat__data_platform__

#include <iostream>

#include "data_platform_indicator.h"
#include "data_platform_quote.h"
#include "data_platform_strategy.h"
#include "data_platform_trade.h"
#include "data_platform_product.h"
#include "data_platform_account.h"
#include "data_plat_io.h"
/* 
 *DataPlatServ 提供基础服务. （稍后重构为框架类）
 *服务1 ： 数据保存服务。 提供一个数据接口，负责update数据
 *服务2 :  为策略提供一个事件响应的框架
 *服务3 :  提供管理的服务
 * */
class QuoteDataServ;
class DataPlatServ
{
    public:
    DataPlatServ();

    int plat_add_inst(int instn)
    {
        /*数据库中新增一个合约
         *这个可能交给更上层的管理类来做.
         * */


        /*新增一个合约(数据监听)
         * */
        if(this->pquote_data_serv) {
            //pquote_data_serv->
        } 
    };
public:
    QuoteDataServ    *pquote_data_serv;
    StrategyDataServ *pstrategy_data_serv;
    TradeDataServ    *ptrade_data_serv;
    ProductDataServ  *pproduct_data_serv;
    AccountDataServ  *paccount_data_serv;
    TPlatIo          *tplat_io;
};

#endif /* defined(__tplat__data_platform__) */
