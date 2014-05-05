/*
     File: CalcViewController.h
 Abstract: This file declares the interface for the CalcViewController class.
  Version: 1.1
 
 
 */

#import <Cocoa/Cocoa.h>
#import "Calculator.h"

@interface CalcViewController : NSViewController {
	IBOutlet id displayField;
   Calculator *calculator;
}

@property (nonatomic) IBOutlet id displayField;

- (IBAction)press:(id)sender;

@end
