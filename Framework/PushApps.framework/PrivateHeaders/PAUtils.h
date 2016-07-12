#import <Foundation/Foundation.h>

@interface PAUtils : NSObject

+(NSString *)getIPAddress:(BOOL)preferIPv4;
+(NSString *)getAppVersion;
+(NSString *)getAppBuildVersion;
+(NSString *)getDeviceDescription;
+(NSString *)getGmtOffset;
+(NSString *)encodeToken:(NSData*) token;
+(NSString *)identifierForAdvertising;
+(NSString *)deviceIdentifier;
+(BOOL)isDevelopmentBuild;

@end
