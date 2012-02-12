//
//  UIView+Alignment.h
//  UIView+Alignment
//
//  Created by Dan Hassin on 4/6/10.
//  Copyright 2010 InContext. All rights reserved.
//

#import <Foundation/Foundation.h>

enum
{
	UIViewAlignmentTop			= 1,
	UIViewAlignmentBottom			= 2,
	UIViewAlignmentLeft			= 4,
	UIViewAlignmentRight			= 8,
	UIViewAlignmentCenteredHorizontal	= 16,
	UIViewAlignmentCenteredVertical		= 32,
	UIViewAlignmentCentered			= UIViewAlignmentCenteredHorizontal | UIViewAlignmentCenteredVertical
}
typedef UIViewAlignment;

//Masking is possible for UIViewAlignment. For example, you can do this to align to top left of the superview:
// [myView alignTo:(UIViewAlignmentTop | UIViewAlignmentLeft)];


@interface UIView (alignment)

//by default aligns to the view's superview. does nothing if not in a superview
- (void) alignTo:(UIViewAlignment)a;
- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e;

//aligns frame based on the given view
- (void) alignTo:(UIViewAlignment)a ofView:(UIView *)v;
- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e ofView:(UIView *)view;

//aligns frame based on the given rect
- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)r;
- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e ofRect:(CGRect)r;

@end