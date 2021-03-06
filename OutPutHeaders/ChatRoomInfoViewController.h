/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IOplogExt.h"
#import "AddMemLogicDelegate.h"
#import "ViewMemLogicDelegate.h"
#import "DelMemLogicDelegate.h"
#import "ChangeOwnerLogicDelegate.h"
#import "ShareFriendOnChatDelegate.h"
#import "UIAlertViewDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "IContactMgrExt.h"
#import "MMUIViewController.h"
#import "IGroupMgrExt.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "contactInfoDelegate.h"
#import "tableViewDelegate.h"
#import "MMTableViewInfoDelegate.h"

@class MMTableViewInfo, NameEditorViewController, DelMemLogic, AddMemLogic, ChangeOwnerLogic, NSArray, CContact, DelaySwitchSettingLogic, UIButton, ViewMemLogic, NSString, NSIndexPath, UIView;
@protocol chatRoomInfoDelegate, chatRoomSettingDelegate;

@interface ChatRoomInfoViewController : MMUIViewController <tableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, ShareFriendOnChatDelegate, IGroupMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, IAutoSetRemarkExt, IOplogExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChangeOwnerLogicDelegate> {
	CContact* m_chatRoomContact;
	NSArray* m_arrMemberList;
	id<chatRoomInfoDelegate, chatRoomSettingDelegate, ShareFriendOnChatDelegate> m_delegate;
	UIButton* m_muteButton;
	UIView* m_titleView;
	BOOL m_bDeleteStatus;
	BOOL m_bFromAddressBook;
	BOOL m_isChatStatusNotifyOpen;
	MMTableViewInfo* m_tableViewInfo;
	AddMemLogic* m_addMemLogic;
	ViewMemLogic* m_viewMemLogic;
	DelMemLogic* m_delMemLogic;
	ChangeOwnerLogic* m_changeOwnerLogic;
	BOOL m_isShowDislayName;
	BOOL m_bIsShowNotificationSectionIndexAtFirst;
	NSIndexPath* m_notificationSectionIndex;
	BOOL m_bIsShowNickNameSectionIndexAtFirst;
	NSIndexPath* m_showNicknameSectionIndex;
	BOOL m_bIsShowAnnouncementSectionIndexAtFirst;
	NSIndexPath* m_showAnnouncementSectionIndex;
	BOOL m_bEnterDescView;
	unsigned m_nCellCnt;
	unsigned m_nCellCntCnt;
	unsigned m_nCellCol;
	NameEditorViewController* m_CurrentVC;
	DelaySwitchSettingLogic* m_delaySwitchLogic;
	int _m_searchScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_searchScene;
@property(assign, nonatomic) BOOL m_bIsShowAnnouncementSectionIndexAtFirst;
@property(assign, nonatomic) BOOL m_bIsShowNickNameSectionIndexAtFirst;
@property(assign, nonatomic) BOOL m_bIsShowNotificationSectionIndexAtFirst;
@property(assign, nonatomic) BOOL m_bFromAddressBook;
@property(retain, nonatomic) UIButton* m_muteButton;
@property(retain, nonatomic) CContact* m_chatRoomContact;
@property(assign, nonatomic) __weak id<chatRoomInfoDelegate, chatRoomSettingDelegate, ShareFriendOnChatDelegate> m_delegate;
-(void).cxx_destruct;
-(void)changeSetting;
-(void)onDeleteContact:(id)contact;
-(void)onModifyContact:(id)contact;
-(void)processModContact:(id)contact;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)quitChatRoom;
-(BOOL)canShowUpgradeStatus;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)addToContactsFromContactInfo:(id)contactInfo;
-(void)setShowDisplayName:(id)name;
-(void)showSetRoomDisplayName;
-(void)oplogRet:(int)ret errMsg:(id)msg eventID:(unsigned long)anId cgiWrap:(id)wrap;
-(void)setChatRoomDisplayName:(id)name vc:(id)vc;
-(id)getDisplayName;
-(void)setShowRemoveMember;
-(void)onDeleteMember:(id)member;
-(void)onAddMemLogicStop:(BOOL)stop;
-(void)addMember;
-(void)onChangeOwnerLogicStop:(BOOL)stop;
-(void)showChangeOwnerView;
-(void)onViewMemLogicStop:(BOOL)stop;
-(void)showMoreMemberEx;
-(void)showMoreMember;
-(void)onDelMemLogicStop:(BOOL)stop;
-(void)showDelMemView;
-(void)openContactInfo:(id)info;
-(void)onEnterChat;
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)reloadMemberListAndView;
-(void)removeCoverView;
-(void)hideCoverView;
-(void)startCoverAnimOnIndexPath:(id)path;
-(void)initView;
-(void)doReset;
-(void)updateMemberView;
-(void)initFooterView;
-(void)showImageBrowser;
-(void)setTopSession:(id)session;
-(void)onEditAndSearch;
-(void)onQuit:(id)quit;
-(void)onQRCodeView;
-(void)makeQRInfoCell:(id)cell cellInfo:(id)info;
-(void)showAdminViewName;
-(void)showAdminViewDesc;
-(void)initData;
-(id)makeEnterBtn;
-(void)reloadTableData;
-(void)reloadProfileTableData;
-(void)makeDescCell:(id)cell cellInfo:(id)info;
-(id)makeDescView;
-(void)makeMemListSection:(id)section;
-(void)makeWhiteCell:(id)cell CellInfo:(id)info;
-(void)makeMemListCell:(id)cell CellInfo:(id)info;
-(void)updateToNormalStatusEx;
-(void)loadMemberList;
-(void)resortMemList;
-(void)tryGetContactUsrImg;
-(void)initTitleView;
-(void)updateTitleView;
-(void)onFinishedShareMyFriend:(BOOL)aFriend;
-(id)getMyFriendContact;
-(id)getShareMyFriendParentViewController;
-(BOOL)isTopSessionCountExceed;
-(void)onTopSession:(BOOL)session;
-(BOOL)getSessionTopped;
-(void)OnSetChatRoomTopic:(id)topic ErrorInfo:(id)info Success:(BOOL)success;
-(void)OnChangeMemberDisplayName:(id)name;
-(void)checkNeedReload:(id)reload;
-(void)OnChangeGroup:(id)group;
-(void)onExpose;
-(void)toggleWatchContact:(id)contact;
-(void)switchSaveToAddressBook:(id)addressBook;
-(void)onClear:(id)clear;
-(void)showChatBackgroundConfig;
-(void)setMuteStatus:(id)status;
-(BOOL)setUpdateNotifyMuted:(BOOL)muted;
-(void)OnDelGroupMember:(id)member withResult:(unsigned long)result memberList:(id)list errTip:(id)tip;
@end

