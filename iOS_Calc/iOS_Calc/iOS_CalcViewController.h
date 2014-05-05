/*
     File: iOS_CalcViewController.h
 Abstract: This file declares the interface for the CalcViewController class.
  Version: 1.1
 
 
*/

#import <UIKit/UIKit.h>
#import "Calculator.h"

@interface CalcViewController : UIViewController {
   id          displayField;
   Calculator *calculator;
}

@property (nonatomic) IBOutlet id displayField;

- (IBAction) press:(id)sender;

@end
