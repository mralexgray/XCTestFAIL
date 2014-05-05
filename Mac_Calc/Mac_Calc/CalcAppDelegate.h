/*
     File: CalcAppDelegate.h
 Abstract: This file declares the interface for the Calc application delegate.
  Version: 1.1
 
 
 */

#import <Foundation/Foundation.h>
#import "CalcViewController.h"

@interface CalcAppDelegate : NSObject <NSApplicationDelegate> {
   NSWindow           *calc_window;
   CalcViewController *calc_view_controller;
}

@property (nonatomic) IBOutlet NSWindow  *calc_window;
@property (nonatomic) CalcViewController *calc_view_controller;

@end
