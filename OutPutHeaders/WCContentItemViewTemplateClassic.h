/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMWebViewDelegate.h"
#import "MMMusicPlayerContollerDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "WeChat-Structs.h"
#import "WCContentItemBaseView.h"
#import "WCImageViewDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class MMMusicPlayerContoller, UILabel, UIImageView, NSString, WCImageView, MMUIWindow;

@interface WCContentItemViewTemplateClassic : WCContentItemBaseView <WCImageViewDelegate, RichTextLayoutDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, MMMusicPlayerContollerDelegate, WCNetworkMediaPlayerDelegate, WCForceTouchPreviewProtocol> {
	UILabel* _titleLabel;
	UILabel* _descLabel;
	WCImageView* _coverImage;
	MMMusicPlayerContoller* _playButton;
	UIImageView* _defaultImageView;
	BOOL _forbidJumpUrl;
	BOOL _bMusicItemJumpToMusicVC;
	MMUIWindow* m_fullScreenWindow;
	int _currentPage;
	BOOL _bSceneFromSearch;
	BOOL _closeAdLongVideoForViewDetail;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL closeAdLongVideoForViewDetail;
@property(assign, nonatomic) BOOL bSceneFromSearch;
+(float)heightForMedia:(id)media showDetail:(BOOL)detail;
+(id)getTrimDesc:(id)desc;
-(void).cxx_destruct;
-(CGRect)previewingSourceRectForLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(id)viewControllerToPreviewWithFromController:(id)controller forLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(BOOL)canPeek;
-(void)dealloc;
-(void)setNonInteractive;
-(void)setNormalColor;
-(void)setHighlightedColor;
-(void)onClickWCImage:(id)image;
-(void)onClickToPlayMusic:(id)playMusic;
-(void)onShareVideoToTimeline:(BOOL)timeline;
-(void)onShareVideoToFriend:(id)aFriend;
-(void)onClickFavVideoMenu;
-(void)onClosePlayerForViewDetail:(id)viewDetail;
-(void)jumpToDetail:(id)detail;
-(void)onClosePlayer;
-(BOOL)stopAtLastVideoFrameWhenPlayEnd;
-(void)jumpToViewStreamVideo;
-(void)throwUrlMessage;
-(void)onLongTouch;
-(void)onShareToOpenSDK:(id)openSDK;
-(void)addFavorite;
-(void)onFavoriteAdd:(id)add;
-(void)initViewsWithWCDataItem:(id)wcdataItem;
-(void)layoutSubviews;
@end

