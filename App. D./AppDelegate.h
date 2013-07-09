//
//  AppDelegate.h
//  App. D.
//
//  Created by Jorge Uribe Orizaga on 04/07/13.
//
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

- (IBAction)MenDespHosp:(id)sender;

@property (strong) IBOutlet NSOutlineView *MenPrin;
- (IBAction)SendOk:(id)sender;

@end
