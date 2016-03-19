//
//  Created by Andrea Cipriani on 16/03/16.
//  Copyright © 2016 Code Atlas SRL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VeeContactProt.h"
@class VeeAddressBookForTesting;
@class VeeContact;

@interface VeeContactsForTestingFactory : NSObject

- (instancetype)initWithAddressBookForTesting:(VeeAddressBookForTesting*)veeAddressBookForTesting;

- (VeeContact*)veeContactComplete;
- (VeeContact*)veeContactUnified;
- (NSArray<id<VeeContactProt>>*)veeContactsFromAddressBookForTesting;
+ (NSArray<id<VeeContactProt>>*)createRandomVeeContacts:(NSUInteger)numberOfVeeContacts;

@end