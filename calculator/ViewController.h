//
//  ViewController.h
//  calculator
//
//  Created by Aleksey on 09.10.17.
//  Copyright © 2017 Aleksey Vinogradov. All rights reserved.
//

#import <UIKit/UIKit.h>

int operation;
double displayNumber;
double resultNumber;
BOOL isDecimal;

@interface ViewController : UIViewController{
    
   IBOutlet UILabel *result;
}

-(void)setResultWithNumber:(int)theNumber;
-(void) operationWithNumber:(int)theNumber;
- (IBAction)C:(id)sender;
- (IBAction)plusMinus:(id)sender;
- (IBAction)divide:(id)sender;
- (IBAction)add:(id)sender;
- (IBAction)substrackt:(id)sender;
- (IBAction)multiply:(id)sender;
- (IBAction)equals:(id)sender;
- (IBAction)dot:(id)sender;
- (IBAction)seven:(id)sender;
- (IBAction)eight:(id)sender;
- (IBAction)nine:(id)sender;
- (IBAction)four:(id)sender;
- (IBAction)five:(id)sender;
- (IBAction)six:(id)sender;
- (IBAction)one:(id)sender;
- (IBAction)two:(id)sender;
- (IBAction)three:(id)sender;
- (IBAction)zero:(id)sender;
@end

