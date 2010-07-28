//
//  MPCheckbox.h
//  Pallet
//
//  Created by Vasileios Georgitzikis on 21/7/10.
//  Copyright 2010 Tzikis. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MPCheckbox : NSButton {

	
	BOOL isDefault;
	
	NSString *conflictsWith;
}

@property (nonatomic) BOOL isDefault;
@property (nonatomic, retain) NSString *conflictsWith;

@end