/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "MMGridViewDataSource.h"
#import "MMGridViewActionDelegate.h"

@class UIPopoverController, UIViewController, UIView, MMGridViewLayoutHorizontalPagedLTRStrategy, NSString, MMGridView, NSArray, UIPageControl;
@protocol MMIconActionSheetDelegate;

@interface MMIconActionSheet : XXUnknownSuperclass <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, MMGridViewDataSource, MMGridViewActionDelegate> {
	UIPageControl* pageControl;
	NSString* cancelButtonTitle;
	MMGridView* gridView;
	NSArray* items;
	MMGridViewLayoutHorizontalPagedLTRStrategy* layoutStrategy;
	id<MMIconActionSheetDelegate> m_delegate;
	NSString* title;
	UIView* _transparentView;
	UIView* _contentView;
	UIPopoverController* _popoverController;
	int _lastOri;
	UIViewController* _popoverControllerNew;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIViewController* popoverControllerNew;
@property(retain, nonatomic) UIPopoverController* popoverController;
@property(assign, nonatomic) int lastOri;
@property(retain, nonatomic) MMGridViewLayoutHorizontalPagedLTRStrategy* layoutStrategy;
@property(retain, nonatomic) NSArray* items;
@property(retain, nonatomic) NSString* cancelButtonTitle;
@property(retain, nonatomic) UIView* transparentView;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(retain, nonatomic) MMGridView* gridView;
@property(retain, nonatomic) UIView* contentView;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) __weak id<MMIconActionSheetDelegate> m_delegate;
+(int)getIconActionSheetWidth;
-(void).cxx_destruct;
-(void)MMGridView:(id)view didTapOnItemAtIndex:(int)index;
-(id)MMGridView:(id)view cellForItemAtIndex:(int)index;
-(CGSize)MMGridView:(id)view sizeForItemsInInterfaceOrientation:(int)interfaceOrientation;
-(int)numberOfItemsInMMGridView:(id)mmgridView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(void)onExit;
-(void)OnCancel:(id)cancel;
-(void)OnPageChanged:(id)changed;
-(void)didRotate:(id)rotate;
-(void)handleTap:(id)tap;
-(void)reloadInnerView:(id)view;
-(void)removeFromView;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
-(void)showInView:(id)view;
-(id)initWithItems:(id)items cancelButtonTitle:(id)title delegate:(id)delegate landscape:(BOOL)landscape headerView:(id)view;
-(id)initWithItems:(id)items cancelButtonTitle:(id)title delegate:(id)delegate landscape:(BOOL)landscape;
-(id)initWithItems:(id)items cancelButtonTitle:(id)title delegate:(id)delegate landscape:(BOOL)landscape title:(id)title5 description:(id)description;
-(void)dealloc;
@end

