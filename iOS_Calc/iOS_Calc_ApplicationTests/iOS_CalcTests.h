/*
     File: iOS_CalcTests.h
 Abstract: This file declares the interface for the application unit tests for the Calc iOS app.
  Version: 1.1
 
 
*/

#import <SenTestingKit/SenTestingKit.h>

#import <UIKit/UIKit.h>

// Test-subject headers.
#import "iOS_CalcAppDelegate.h"
#import "iOS_CalcViewController.h"


@interface iOS_CalcTests : SenTestCase {
@private
   CalcAppDelegate    *app_delegate;
   CalcViewController *calc_view_controller;
   UIView             *calc_view;
    
}

@end
