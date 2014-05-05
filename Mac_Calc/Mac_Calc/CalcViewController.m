/*
     File: CalcViewController.m
 Abstract: This file implements the CalcViewController class.
  Version: 1.1
 
 
 */

#import "CalcViewController.h"

@implementation CalcViewController
@synthesize displayField;

#pragma mark Lifecycle

- init {
   if (self = [super init]) {
      calculator = [[Calculator alloc] init];
   }
   return self;
}

# pragma mark Event Handling
- (IBAction)press:(id) sender {
   if ([sender isKindOfClass: [NSButton class]]) {
      [calculator input:[sender title]];
      [displayField setStringValue: [calculator displayValue]];
	}
}

@end
