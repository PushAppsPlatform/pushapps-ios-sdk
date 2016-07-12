#import <Foundation/Foundation.h>

@interface PATag : NSObject

- (instancetype)initWithName:(NSString *)name andValue:(BOOL)value;

- (NSString *)getName;
- (id)getValue;
- (NSString *)getType;

- (NSDictionary *)toDictionary;

@end
