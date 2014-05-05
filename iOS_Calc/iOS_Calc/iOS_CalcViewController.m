/*
     File: iOS_CalcViewController.m
 Abstract: This file implements the CalcViewController class.
  Version: 1.1
 
 
*/

#import "iOS_CalcViewController.h"


@implementation CalcViewController

@synthesize displayField;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
   if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
      calculator = [[Calculator alloc] init];
   }
   return self;
}

- (BOOL) shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
   return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


- (IBAction) press:(id)sender {
   [calculator input:[sender titleForState:UIControlStateNormal]];
   [displayField setText:[calculator displayValue]];
}

@end
