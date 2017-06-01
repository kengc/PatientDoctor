//
//  Doctor.h
//  PatientDoctor
//
//  Created by Kevin Cleathero on 2017-06-01.
//  Copyright © 2017 Kevin Cleathero. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DoctorDelegate;


@interface Doctor : NSObject

@property (nonatomic, weak) id <DoctorDelegate> delegate; //weak to auto delete

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *specialization;

- (instancetype)initWithDoctorName:(NSString *)name andSpecialization:(NSString *)special;
- (void)healthCardStatus:(Doctor *)doctor;

@end

@protocol DoctorDelegate <NSObject>
-(void)doesHaveHealthCard:(Doctor *)doctor; //pass tiself
@end
