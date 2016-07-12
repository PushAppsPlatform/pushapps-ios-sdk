#import <Foundation/Foundation.h>

#define PASharedData_LastRegistrationDate @"PASharedData_LastRegistrationDate"
#define PASharedData_UserRegistrationData @"PASharedData_UserRegistrationData"

@interface PASharedData : NSObject

+ (BOOL)saveObject:(id)object forKey:(NSString *)key;
+ (id)loadObjectForKey:(NSString *)key;

@end
