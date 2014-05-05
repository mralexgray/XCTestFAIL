/*
     File: Calculator.h
 Abstract: This file declares the interface for the Calculator class.
  Version: 1.1
 
 
 */

/*!
 * @class Calculator
 * This class implements a key-press--based calculator engine.
 * @throws NSInvalidArgumentException
 */

#import <Foundation/Foundation.h>

@interface Calculator : NSObject {
@private
   NSMutableString *_display;    // The calculator display (the value a harwdare-based calculator shows on its LCD screen).
   double           _operand;
   NSString        *_operator;
}

- init;


/*!
 * @method input:
 * Receives input into the calculator.
 *
 * Valid characters:
 *
 *     Digits:    .0123456789
 *
 *     Operators: +-×/=
 *
 *     Commands:  D     Delete
 *                C     Clear
 *
 * @throws NSInvalidArgumentException when character is not valid.
 */
- (void) input:(NSString *) character;


/*!
 * @method displayValue
 * Provides the value in the calculator’s “display.”
 */
- (NSString *) displayValue;

@end
