/*
     File: iOS_CalcAppDelegate.m
 Abstract: This file implements the Calc application delegate.
  Version: 1.1
 
 
*/

#import "iOS_CalcAppDelegate.h"
#import "iOS_CalcViewController.h"

@implementation CalcAppDelegate

@synthesize window;
@synthesize calcViewController;

- (void) applicationDidFinishLaunching:(UIApplication *)application {    

   // Override point for customization after application launch
   CalcViewController *_calcViewController = [[CalcViewController alloc] initWithNibName:@"CalcView" bundle:[NSBundle mainBundle]];
   self.calcViewController = _calcViewController;
   [window addSubview:[calcViewController view]];
   [window makeKeyAndVisible];
}



- (void) applicationDidReceiveMemoryWarning:(UIApplication *)application {
   NSLog(@"Calc.CalcAppDelegate: applicationDidReceiveMemoryWarning:");
}

@end
