//
//  InjectedExampleClass.h
//  Depend
//
//  Created by Rafael Gonzalves on 9/17/15.
//  Copyright (c) 2015 Rafael Gonçalves. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXProtocol.h"

@interface EXInjectedClass : NSObject

@property (nonatomic,setter=injectedProtocol:,readonly) id<EXProtocol> object;

@end
