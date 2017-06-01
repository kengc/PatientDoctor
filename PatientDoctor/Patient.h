//
//  Patient.h
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Patient : NSObject

@property (nonatomic, weak) NSString *name;
@property (nonatomic) NSInteger age;

- (instancetype)initWithPatientName:(NSString *)name andAge:(NSInteger)age;

@end
