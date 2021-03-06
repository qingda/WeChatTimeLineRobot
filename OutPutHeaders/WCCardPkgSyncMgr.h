/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSData, WCCardPkgDB;
@protocol WCCardSyncMgrDelegate;

@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate> {
	NSData* _syncKeyBuffer;
	WCCardPkgDB* _wcCardPkgDB;
	id<WCCardSyncMgrDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<WCCardSyncMgrDelegate> delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleWCCardSyncResp:(id)resp Event:(unsigned long)event;
-(void)syncByNotify:(unsigned)notify Scene:(unsigned)scene;
-(void)clearSyncKey;
-(void)initDB:(id)db;
-(void)dealloc;
-(id)init;
-(void)reloadSyncKeyBuffer;
-(void)loadSyncKeyBuffer;
-(BOOL)saveSyncKeyBuffer:(id)buffer;
-(id)getSyncKeyBufferFilePath;
@end

