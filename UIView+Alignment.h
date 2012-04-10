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
 
 Left, with 10px margin:
	[myView alignTo:UIViewAlignmentLeft withMargins:UIEdgeInsetsMake(0,10,0,0)];
 
 Top-left:
	[myView alignTo:(UIViewAlignmentTop | UIViewAlignmentLeft)];

 Bottom & centered:
	[myView alignTo:(UIViewAlignmentCenterHorizontal | UIViewAlignmentBottom)];
*/

@interface UIView (alignment)

// Aligns frame based on the bounds of the sender's superview
- (void) alignTo:(UIViewAlignment)a;
- (void) alignTo:(UIViewAlignment)a margins:(UIEdgeInsets)e;

// Aligns frame based on the given rect
- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)r;
- (void) alignTo:(UIViewAlignment)a ofRect:(CGRect)r margins:(UIEdgeInsets)e;

@end