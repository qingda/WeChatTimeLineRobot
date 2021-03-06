/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BusinessDetailInfo, BusinessExtendInfo, BusinessActionInfo, NSString;

@interface BSBusinessCommonItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _desc;
	NSString* _thumbUrl;
	BusinessDetailInfo* _detailInfo;
	BusinessExtendInfo* _extendInfo;
	BusinessActionInfo* _actionInfo;
}
@property(retain, nonatomic) BusinessActionInfo* actionInfo;
@property(retain, nonatomic) BusinessExtendInfo* extendInfo;
@property(retain, nonatomic) BusinessDetailInfo* detailInfo;
@property(retain, nonatomic) NSString* thumbUrl;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* title;
+(id)fromServerObj:(id)serverObj;
-(void).cxx_destruct;
-(void)dealloc;
@end

