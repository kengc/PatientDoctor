//
//  Patient.m
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import "Patient.h"

@implementation Patient


- (instancetype)initWithPatientName:(NSString *)name andAge:(NSInteger)age
{
    self = [super init];
    if (self) {
        _name = name;
        _age = age;
    }
    return self;
}

@end
