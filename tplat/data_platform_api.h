//
//  data_platform_api.h
//  tplat
//
//  Created by dev on 2/1/15.
//  Copyright (c) 2015 dev. All rights reserved.
//

#ifndef __tplat__data_platform_api__
#define __tplat__data_platform_api__

/*
 api supply to strategy
 api supply to self to call ctp_api
 */



#include <iostream>
#include "data_platform.h"
#include "strategy_agent.h"

class DataPlatServApi
{
    /*屏蔽DataPlatServ的工作细节.让DataPlatServ类
     更好的完成基础设施的建设.DataPlatServApi 在基础
     设施上提供服务.
     */
    DataPlatServApi(DataPlatServ *dps){_dps=dps;};

    /*check serv
    */

    /*Quote serv
     */

    /*trade serv
     */

    /*strategy serv
     */

    /*product  serv
     */

    /*Trader   serv
     */
    int trader_register(){};

    int trader_init(){};

    int register_account(Account *account)
    {
        /*注册一个账户 accountid -> account;
         *创建对应的quote spi,api
         *创建对应的trade spi,api
         */
        _dps->paccount_data_serv->register_account(account);
        _dps->pquote_data_serv->add_quote(account);
        _dps->ptrade_data_serv->add_trade(account);
        return 0;
    };

    int register_strategy(string strategyname)
    {
        /*注册一个策略 strategyname,strategyinstance
         */
        _dps->pstrategy_data_serv->register_strategy(strategyname);
        //http://blog.chinaunix.net/uid-26000296-id-3778641.html
        return 0;
    };

    int register_product(){
    
    };

    int register_instrument(){
        /*注册一个合约数据
         */
    };

    int register_indicator()
    {
        /*注册一个指标
         */
        return 0;
    };

    int run_strategy(vector<string> instruments, vector<string> accounts, vector<string> indicators,string strategyname)
    {
        /*生成一个TradingStrategy累，响应指标，数据的事件.
          一个正在执行的strategy 包含 策略本身， 执行模块， 指标模块，
         每个策略执行类， 包含一个线程，负责执行计算栈上的actor( 指标， 执行， 策略 )
         都抽象为 一个actor();
         */
        return 0;
    };

private:
    DataPlatServ *_dps;
};

#endif /* defined(__tplat__data_platform_api__) */
