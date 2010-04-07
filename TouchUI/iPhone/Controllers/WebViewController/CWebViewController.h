//
//  CWebViewController.h
//  TouchCode
//
//  Created by Jonathan Wight on 05/27/08.
//  Copyright 2008 toxicsoftware.com. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@interface CWebViewController : UIViewController <UIWebViewDelegate, UIActionSheetDelegate> {
	NSURL *homeURL;
	BOOL dontChangeTitle;
	BOOL loading;
	
	NSURL *currentURL;

	IBOutlet UIWebView *webView;
	IBOutlet UIToolbar *toolbar;
	IBOutlet UIBarButtonItem *homeButton;
	IBOutlet UIBarButtonItem *backButton;
	IBOutlet UIBarButtonItem *forwardsButton;
	IBOutlet UIBarButtonItem *reloadButton;
}

@property (readwrite, nonatomic, retain) NSURL *homeURL;
@property (readwrite, nonatomic, assign) BOOL dontChangeTitle;

@property (readonly, nonatomic, assign) BOOL loading;
@property (readonly, nonatomic, retain) NSURL *currentURL;

@property (readonly, nonatomic, retain) IBOutlet UIWebView *webView;
@property (readonly, nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (readonly, nonatomic, retain) IBOutlet UIBarButtonItem *homeButton;
@property (readonly, nonatomic, retain) IBOutlet UIBarButtonItem *backButton;
@property (readonly, nonatomic, retain) IBOutlet UIBarButtonItem *forwardsButton;
@property (readonly, nonatomic, retain) IBOutlet UIBarButtonItem *reloadButton;

- (void)loadURL:(NSURL *)inURL;

- (IBAction)actionBack:(id)inSender;
- (IBAction)actionForwards:(id)inSender;
- (IBAction)actionReload:(id)inSender;
- (IBAction)actionHome:(id)inSender;
- (IBAction)actionUtilityPopup:(id)inSender;


@end
