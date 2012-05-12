UIView+Alignment
========

Tired of typing "CGRectMake" a million times for simple alignment stuff? Me too.

Here's an alignment category for UIView in iOS. See the .h file for method options and descriptions.

### Examples

Align `myView` to the far left of its superview, with a 10px margin:

```objc
[myView alignTo:UIViewAlignmentLeft margins:UIEdgeInsetsMake(0,10,0,0)];
```

Align `myView` to the top-left of its superview:

```objc
[myView alignTo:(UIViewAlignmentTop | UIViewAlignmentLeft)];
```

Align `myView` bottom & centered in the given rect:

```objc
[myView alignTo:(UIViewAlignmentCenterHorizontal | UIViewAlignmentBottom) ofRect:otherRect];
```