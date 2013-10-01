//
//  MXiMultiUserChatMessage.h
//  MXi
//
//  Created by Martin Weißbach on 8/31/13.
//  Copyright (c) 2013 TU Dresden. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import "XMPPFramework.h"
#import "MXiMultiUserChatMessage.h"
#else
#import <MXi/XMPPFramework.h>
#import <MXi/MXiMultiUserChatMessage.h>
#endif

@interface MXiMultiUserChatMessage : XMPPMessage

+ (id)messageWithBody:(NSString *)body;

- (NSString *)bodyContent;

@end
