//
//  DPCache.h
//  Depend
//
//  Created by Rafael Gonzalves on 9/16/15.
//  Copyright (c) 2015 Rafael Gonçalves. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DPInjectionDescriptor;

@interface DPCache : NSObject

+(NSArray *)injectClasses;
+(DPInjectionDescriptor *)descriptorWithClass:(Class)class andPropertyName:(NSString *)propertyName;

@end
