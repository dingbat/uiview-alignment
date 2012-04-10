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
	UIViewAlignmentTop                  = 1 << 0,
	UIViewAlignmentBottom               = 1 << 1, 
	UIViewAlignmentLeft                 = 1 << 2,
	UIViewAlignmentRight                = 1 << 3,
	UIViewAlignmentCenterHorizontal     = 1 << 4,
	UIViewAlignmentCenterVertical       = 1 << 5,
	UIViewAlignmentCenter               = UIViewAlignmentCenterHorizontal | UIViewAlignmentCenterVertical
}
typedef UIViewAlignment; // (accepts masking)

/*
 Examples:
 
 Align myView to the far left of its superview, with 10px margin:
	[myView alignTo:UIViewAlignmentLeft withMargins:UIEdgeInsetsMake(0,10,0,0)];
 
 Align myView to the top left of its superview:
	[myView alignTo:(UIViewAlignmentTop | UIViewAlignmentLeft)];

 Align myView bottom & centered in the given rect:
	[myView alignTo:(UIViewAlignmentCenterHorizontal | UIViewAlignmentBottom) ofRect:otherRect];
*/

@interface UIView (alignment)

// Aligns frame based on the bounds of the sender's superview
- (void) alignTo:(UIViewAlignment)a;
- (void) alignTo:(UIViewAlignment)a margins:(UIEdgeInsets)e;

// Aligns frame based on the given rect
- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)r;
- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)r margins:(UIEdgeInsets)e;

@end