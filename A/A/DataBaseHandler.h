//
//  DataBaseHandler.h
//  A
//
//  Created by lanou3g on 15/10/13.
//  Copyright (c) 2015年 lanou3g. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Student;

@interface DataBaseHandler : NSObject
//新建一个单例类
+(instancetype)shareDataBase;
//创建或者打开数据库
-(void)openDataBase;
//创建一个表
-(void)createTable;

//增加（插入）
-(void)insertStudent:(Student *)aStudent;

//删除
-(void)delegateStudentByNumber:(NSInteger)number;

//修改
-(void)changeStudentByNumber:(NSInteger)number name:(NSString *)name;

//全部查询
-(NSArray *)findAll;
//按条件查询
-(NSArray *)findStudentByNumber:(NSInteger)number;

//关闭数据库
-(void)closeDataBase;


@end
