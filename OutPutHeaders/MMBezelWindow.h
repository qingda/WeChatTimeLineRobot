/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIWindow.h"

@class NSObject;
@protocol MMBezelWindowDelegate;

@interface MMBezelWindow : MMUIWindow {
	NSObject<MMBezelWindowDelegate>* _bezelWindowDelegate;
}
@property(assign, nonatomic) __weak NSObject<MMBezelWindowDelegate>* bezelWindowDelegate;
-(void).cxx_destruct;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end

