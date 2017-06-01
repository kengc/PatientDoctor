//
//  Patient.h
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Doctor.h"

@interface Patient : NSObject <DoctorDelegate>

//@property Doctor;

@property (nonatomic, strong) NSString *name;
@property (nonatomic) NSInteger age;
@property (nonatomic) NSString *healthCard;
@property (nonatomic, strong) Doctor *doctor;

- (void)requestMedication;
- (void)doesHaveHealthCard:(Doctor *)doctor;

- (instancetype)initWithPatientName:(NSString *)name andAge:(NSInteger)age;

@end
