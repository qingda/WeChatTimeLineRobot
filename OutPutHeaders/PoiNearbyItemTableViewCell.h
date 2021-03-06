/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class MMUILabel, LbsRecommendPoiItem, MMWebImageView, NSMutableArray, UIImageView;

@interface PoiNearbyItemTableViewCell : MMUIView {
	LbsRecommendPoiItem* _poiItem;
	MMWebImageView* _iconView;
	MMUILabel* _titleLabel;
	MMUILabel* _subTitleLabel;
	MMUILabel* _descLabel;
	UIImageView* _remarkBKImage;
	MMUILabel* _personalRemarkLabel;
	NSMutableArray* _adIconViewList;
}
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)initView;
-(id)initWithLbsRecommendPoiItem:(id)lbsRecommendPoiItem withSize:(CGSize)size;
@end

