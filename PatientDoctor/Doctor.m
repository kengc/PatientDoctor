//
//  Doctor.m
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import "Doctor.h"

@implementation Doctor

- (instancetype)initWithDoctorName:(NSString *)name andSpecialization:(NSString *)special
{
    self = [super init];
    if (self) {
        _name = name;
        _specialization = special;
    }
    return self;
}

-(void)healthCardStatus:(Doctor *)doctor{
    [self.delegate doesHaveHealthCard:self]; //delegates (sendS) to parent
}

@end
