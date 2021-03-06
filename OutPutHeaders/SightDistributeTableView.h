/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "WeChat-Structs.h"
#import "MMUIView.h"
#import "UITableViewDelegate.h"
#import "IFTSContactMgrExt.h"
#import "UITableViewDataSource.h"

@class UIView, UIImageView, NSString, MMTableView, UIButton, UIImage, NSMutableDictionary, NSMutableArray, FTSContactMgr, UITextField;
@protocol SightDistributeTableViewDelegate;

@interface SightDistributeTableView : MMUIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, IFTSContactMgrExt> {
	NSMutableArray* m_sessionList;
	MMTableView* m_tableView;
	NSMutableDictionary* m_sendAry;
	NSMutableArray* m_seletedNotInSession;
	NSMutableArray* m_displayList;
	UIImageView* m_bgMask;
	float m_tableTopInset;
	BOOL m_inSearchPanel;
	UIView* m_searchBar;
	UITextField* m_searchTextField;
	UIButton* m_cancelSearchBtn;
	FTSContactMgr* _ftsContactMgr;
	UIImage* _thumb;
	UIImage* _maskImg;
	NSString* _videoPath;
	id<SightDistributeTableViewDelegate> _delegage;
	NSString* _searchKeyword;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* searchKeyword;
@property(assign, nonatomic) __weak id<SightDistributeTableViewDelegate> delegage;
@property(retain, nonatomic) NSString* videoPath;
@property(retain, nonatomic) UIImage* maskImg;
@property(retain, nonatomic) UIImage* thumb;
@property(retain, nonatomic) NSMutableArray* sessionList;
-(void).cxx_destruct;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)didSelectSearchResult:(id)result;
-(void)didPressSearchReturn;
-(void)onFTSContactSearchResultChanged:(BOOL)changed;
-(void)delaySearch:(id)search;
-(void)textChange;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)makeSearchBarView;
-(void)switchToSearchPanel;
-(void)exitSearchPanel;
-(unsigned long)getSelectCount;
-(void)scrollToTop;
-(void)confirmSendMsg;
-(void)deselectAllSelectedRows:(BOOL)rows;
-(void)clearSelection;
-(void)sendToContact:(id)contact thumbSize:(CGSize)size thumbData:(id)data;
-(void)sendShortVideoToContacts:(id)contacts;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)checkSelectCount;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)updateCell:(id)cell contact:(id)contact;
-(void)makeCell:(id)cell contact:(id)contact;
-(void)makeSaveCell:(id)cell;
-(void)makeMomentCell:(id)cell;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reflashSessionList;
-(void)setTableInset:(float)inset;
-(void)setTableMargin:(float)margin;
-(void)adjustTableViewSeparatorInset;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)fixKeyBoardColorForIOS8;
@end

