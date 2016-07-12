#import <Foundation/Foundation.h>
#import "PAApiClient.h"
#import "PushApps.h"

@interface PAApiClient : NSObject

@property NSString *sdkKey;
@property BOOL completionInMainThread;

+ (PAApiClient *)sharedClient;

- (NSURLSessionTask *)registerDevice:(registerDeviceCompletion)completion;
- (NSURLSessionTask *)setToken:(NSString *)token completion:(setTokenCompletion)completion;
- (NSURLSessionTask *)reportClick:(NSDictionary *)params completion:(setTokenCompletion)completion;
- (NSURLSessionTask *)getWidgetFeed:(NSDictionary *)params completion:(getWidgetFeedCompletion)completion;
- (NSURLSessionTask *)sendTestNotification:(NSDictionary *)params;
- (NSURLSessionTask *)addTags:(NSArray *)tags;
- (NSURLSessionTask *)removeTags:(NSArray *)tags;
- (NSURLSessionTask *)getTagsWithCompletion:(getTagsCompletion)completion;

@end
