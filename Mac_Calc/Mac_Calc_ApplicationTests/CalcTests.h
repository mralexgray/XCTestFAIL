/*
     File: CalcTests.h
 Abstract: This file declares the interface for the application unit tests for the Calc Mac app.
  Version: 1.1
 
 
*/

#import <SenTestingKit/SenTestingKit.h>

#import "CalcViewController.h"
#import "CalcAppDelegate.h"

@interface CalcTests : SenTestCase {
@private
   NSApplication       *app;
   CalcAppDelegate     *app_delegate;
   CalcViewController  *calc_view_controller;
   NSView              *calc_view;
}

@end
