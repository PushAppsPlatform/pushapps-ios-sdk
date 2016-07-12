#import <UIKit/UIKit.h>
#import "PATag.h"

//! Project version number for PushApps.
FOUNDATION_EXPORT double PushAppsVersionNumber;

//! Project version string for PushApps.
FOUNDATION_EXPORT const unsigned char PushAppsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <PushApps/PublicHeader.h>

typedef void (^PACompletionBlock)(id object, NSError *error);

typedef void (^registerDeviceCompletion)(NSError *error);

typedef void (^setTokenCompletion)(NSError *error);

typedef void (^getWidgetFeedCompletion)(NSArray *articles, NSError *error);

typedef void (^getTagsCompletion)(NSArray *tags, NSError *error);

@protocol PAPopupDelegate <NSObject>

@required
- (void)paPopupDismissed;

@end

@interface PushApps : NSObject

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

+ (void)getWidgetFeedForParams:(NSDictionary *)params withCompletionBlock:(PACompletionBlock)completion;

+ (void)handleOpenUrl:(NSURL *)url;

+ (void)addTag:(PATag *)tag;

+ (void)addTags:(NSArray *)tags;

+ (void)removeTag:(NSString *)tagName;

+ (void)removeTags:(NSArray *)tags;

+ (void)getTags:(PACompletionBlock)completion;

@end