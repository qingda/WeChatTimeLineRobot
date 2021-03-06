/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChatBackgroundExt.h"
#import "ChatBackgroundViewDelegate.h"
#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, NSString, MMTableView;

@interface MMChatBackgroundSettingViewController : MMUIViewController <ChatBackgroundExt, ChatBackgroundViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	int m_columnCount;
	NSMutableArray* m_itemViews;
	NSString* m_username;
	NSMutableArray* m_allItems;
	BOOL isSettingChanged;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_allItems;
@property(retain, nonatomic) NSString* m_username;
@property(retain, nonatomic) NSMutableArray* m_itemViews;
@property(retain, nonatomic) MMTableView* m_tableView;
-(void).cxx_destruct;
-(void)onListStatusChange;
-(void)onChatBackgroundViewClick:(id)click;
-(void)onChatBackgroundDownloadFinishedForUser:(id)user withCID:(id)cid;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)onBackButtonClicked;
-(void)popToMessageSessionView;
-(void)viewWillTransitionToSize:(CGSize)view withTransitionCoordinator:(id)transitionCoordinator;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(int)getRowCount;
-(id)getAllItems;
-(void)dealloc;
-(id)init;
-(void)addItemView:(id)view;
@end

