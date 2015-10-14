//
//  DataBaseHandler.m
//  A
//
//  Created by lanou3g on 15/10/13.
//  Copyright (c) 2015年 lanou3g. All rights reserved.
//

#import "DataBaseHandler.h"
#import <FMDatabase.h>
static DataBaseHandler *dbHandler = nil;
@implementation DataBaseHandler



#pragma mark 单例方法
+(instancetype)shareDataBase
{
    if (dbHandler == nil) {
        static dispatch_once_t one_Token;
        dispatch_once(&one_Token, ^{
            dbHandler = [[DataBaseHandler alloc]init];
        });
    }
    return dbHandler;
          
}


-(void)openDataBase
{
    FMDatabase *db = [FMDatabase databaseWithPath:NULL];
    [db open];
}

-(void)createTable
{
    
}


-(void)closeDataBase
{
    
}
@end
