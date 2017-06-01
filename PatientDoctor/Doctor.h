//
//  Doctor.h
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Doctor : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *specialization;

- (instancetype)initWithDoctorName:(NSString *)name andSpecialization:(NSString *)special;

@end
