/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseResponse;

@interface GetWCOProductListResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* currentCurrency;
@property(assign, nonatomic) int isAllowChangeCurrency;
@property(retain, nonatomic) NSString* callCountry;
@property(retain, nonatomic) NSString* lastProductId;
@property(retain, nonatomic) NSMutableArray* cellList;
@property(assign, nonatomic) unsigned cellCount;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

