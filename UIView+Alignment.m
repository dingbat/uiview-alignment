//
//  UIView+Alignment.m
//  PushNews
//
//  Created by Dan Hassin on 4/6/10.
//  Copyright 2010 InContext. All rights reserved.
//

#import "UIView+Alignment.h"


@implementation UIView (alignment)

//align to rect

- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e ofRect:(CGRect)r
{
	CGRect rect = self.frame;
	
	if (a & UIViewAlignmentCenteredHorizontal)
		rect.origin.x = (r.size.width-rect.size.width)/2.0;
	
	if (a & UIViewAlignmentCenteredVertical)
		rect.origin.y = (r.size.height-rect.size.height)/2.0;
	
	if (a & UIViewAlignmentTop)
		rect.origin.y = 0;
	
	if (a & UIViewAlignmentBottom)
		rect.origin.y = r.size.height-self.frame.size.height;
	
	if (a & UIViewAlignmentLeft)
		rect.origin.x = 0;
	
	if (a & UIViewAlignmentRight)
		rect.origin.x = r.size.width-self.frame.size.width;
	
	rect.origin.x += e.left;
	rect.origin.x -= e.right;
	
	rect.origin.y += e.top;
	rect.origin.y -= e.bottom;
	
	self.frame = rect;
}

- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)rect
{
	[self alignTo:a withMargins:UIEdgeInsetsZero ofRect:rect];	
}


//default -> superview

- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e
{
	[self alignTo:a withMargins:e ofView:self.superview];
}

- (void) alignTo:(UIViewAlignment)a
{
	[self alignTo:a withMargins:UIEdgeInsetsZero];
}


//different view

- (void) alignTo:(UIViewAlignment)a withMargins:(UIEdgeInsets)e ofView:(UIView *)view
{
	if (!view)
		return;
	[self alignTo:a withMargins:e ofRect:view.frame];
}

- (void) alignTo:(UIViewAlignment)a ofView:(UIView *)view
{
	[self alignTo:a withMargins:UIEdgeInsetsZero ofView:view];
}


@end
