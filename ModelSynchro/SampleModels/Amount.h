//
//  Amount.h
//  ModelSynchro
//
//  Created by Jonathan Samudio on 01/04/18.
//  Copyright © 2018 Prolific Interactive. All rights reserved.
//

/*
    Auto-Generated using ModelSynchro
*/

#import <Foundation/Foundation.h>
#import "Currency.h"

@interface Amount: NSObject

@property (nonatomic, assign) double value;

@property (nonatomic, strong) Currency *currency;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end