/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class CMMDB;

@interface CBottleContactDB : XXUnknownSuperclass {
	CMMDB* m_oMMDB;
}
-(void).cxx_destruct;
-(void)saveUserImage:(id)image;
-(void)setDBBottleConact:(id)conact fromObject:(id)object isSetUserName:(BOOL)name vecProperty:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)property;
-(void)getBottleContact:(id)contact fromDBObject:(id)dbobject;
-(void)fillQueryProperty:(vector<WCDBConditionBase, std::__1::allocator<WCDBConditionBase> >*)property;
-(int)GetBottleContactCount;
-(BOOL)updateContact:(id)contact;
-(BOOL)deleteContact:(id)contact;
-(BOOL)addContact:(id)contact;
-(BOOL)getAllContactList:(id)list;
-(id)getContact:(id)contact;
-(void)initDB:(id)db;
-(void)dealloc;
-(id)init;
@end

