#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PushApps.h"

typedef void (^PASDKCompletionBlock)(id object, NSError *error);

@interface PASDK : NSObject

// check this flag to see if the Pushapps service is currently available
+ (BOOL)isPushAppsServiceAvailable;

+ (void)setDelegate:(id<PAPopupDelegate>)newDelegate;

// initialize push notifications for the application
+ (void)registerForPushNotifications:(NSDictionary *)launchOptions;

// register to the Pushapps service
+ (void)registerDeviceWithSdkKey:(NSString*)sdkKey;

// send APNS device token to the Pushapps service
+ (void)setDevicePushToken:(NSData *)deviceToken;

// processes push notification
+ (void)handleNotification:(NSDictionary *)userInfo;

+ (void)getWidgetFeedForParams:(NSDictionary *)params withCompletionBlock:(PASDKCompletionBlock)completionBlock;

+ (void)sendTestNotification:(NSDictionary *)params;

+ (void)getTagsWithCompletionBlock:(PASDKCompletionBlock)completionBlock;

+ (void)addTags:(NSArray *)tags;

+ (void)removeTags:(NSArray *)tags;

@end
