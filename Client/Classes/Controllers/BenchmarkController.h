//
//  BenchmarkController.h
//  Client
//
//  Created by Adrian on 3/3/10.
//  Copyright (c) 2010, akosma software / Adrian Kosmaczewski
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//  1. Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright
//  notice, this list of conditions and the following disclaimer in the
//  documentation and/or other materials provided with the distribution.
//  3. All advertising materials mentioning features or use of this software
//  must display the following acknowledgement:
//  This product includes software developed by akosma software.
//  4. Neither the name of the akosma software nor the
//  names of its contributors may be used to endorse or promote products
//  derived from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY ADRIAN KOSMACZEWSKI ''AS IS'' AND ANY
//  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL ADRIAN KOSMACZEWSKI BE LIABLE FOR ANY
//  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <UIKit/UIKit.h>
#import "DataLoaderDelegate.h"
#import <MessageUI/MFMailComposeViewController.h>

@interface BenchmarkController : UIViewController <DataLoaderDelegate,
                                                   MFMailComposeViewControllerDelegate>
{
@private
    IBOutlet UIBarButtonItem *_doneButton;
    IBOutlet UIBarButtonItem *_startButton;
    IBOutlet UIBarButtonItem *_mailButton;
    IBOutlet UITableView *_tableView;
    NSMutableArray *_testResults;
    NSMutableArray *_loaders;
    NSInteger _currentLimit;
    NSInteger _currentLoaderIndex;
    NSInteger _benchmarkMaximum;
    NSInteger _benchmarkIncrement;
    UINavigationController *_navigationController;
    BOOL _benchmarkFinished;
    BOOL _running;
    NSDate *_benchmarkDate;
}

@property (nonatomic, retain) IBOutlet UIBarButtonItem *doneButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *startButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *mailButton;
@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, copy) NSMutableArray *testResults;
@property (nonatomic, copy) NSMutableArray *loaders;
@property (nonatomic) NSInteger currentLimit;
@property (nonatomic) NSInteger currentLoaderIndex;
@property (nonatomic) NSInteger benchmarkMaximum;
@property (nonatomic) NSInteger benchmarkIncrement;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, getter=isBenchmarkFinished) BOOL benchmarkFinished;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, copy) NSDate *benchmarkDate;

- (IBAction)done:(id)sender;
- (IBAction)start:(id)sender;
- (IBAction)sendResultsViaEmail:(id)sender;

@end
