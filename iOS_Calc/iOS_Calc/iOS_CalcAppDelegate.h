/*
     File: iOS_CalcAppDelegate.h
 Abstract: This file declares the interface for the Calc application delegate.
  Version: 1.1
 
 
*/

#import <UIKit/UIKit.h>

@class CalcViewController;

@interface CalcAppDelegate : NSObject <UIApplicationDelegate> {
   UIWindow           *window;
   CalcViewController *calcViewController;
}

@property (nonatomic) IBOutlet UIWindow  *window;
@property (nonatomic) CalcViewController *calcViewController;

@end

